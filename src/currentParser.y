%code requires{
    #include "ast.hpp"

	#include <cassert>

	// rename expression later
    extern const Block *g_root; 

    int yylex(void);
    void yyerror(const char *);  
}

%union{
    /*rename pointer ^*/ 
	const Block *block;
    // double number;
    std::string *string;
}

%token SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CONST VOLATILE
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK

%token <string> IDENTIFIER CONSTANT STRING_LITERAL

%token <string> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID TYPE_NAME

%token RETURN
/* 
%token <string> IDENTIFIER CONSTANT STRING_LITERAL

%token <string> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID TYPE_NAME

%token RETURN */

%type <block> primary_expression // etc
%type <block> expression
%type <block> declarator
%type <block> direct_declarator
%type <block> statement
%type <block> compound_statement
%type <block> jump_statement
%type <block> translation_unit
%type <block> external_declaration
%type <block> function_definition
%type <block> statement_list
%type <block> declaration
%type <block> init_declarator_list 
%type <block> init_declarator

%type <string> declaration_specifiers
%type <string> type_specifier

/* %type <block> declarator */

// continue...
/* %type <number> CONSTANT// May need int, float etc type */
/* %type <string> STRING_LITERAL // may need char type */

%start ROOT

%%
/* Extracts AST */
ROOT : translation_unit { g_root = $1; }

/* Top level entity */
translation_unit
	: external_declaration { $$ = $1; }
	| declaration	{ $$ = $1;}
	;

external_declaration
	: function_definition { $$ = $1;}
	;

// HAVE A LOO L8R
/* eg int x = 2; or int x; or int x,y=2 */
declaration
	: declaration_specifiers ';' { $$ = new Declaration(*$1);}
	| declaration_specifiers init_declarator_list ';' { $$ = new Declaration(*$1, $2);}
	;

init_declarator_list
	: init_declarator { $$ = new Init_Declarator_List($1);}
	| init_declarator_list ',' init_declarator { $$ = new Init_Declarator_List($3, $1);}
	;

init_declarator
	: declarator { $$ = new Init_Declarator($1);} 
	| declarator '=' primary_expression { $$ = new Init_Declarator($1, $3);}
	;

///// UNTIL HERE

function_definition
	: declaration_specifiers declarator compound_statement { $$ = new Function(*$1, $2, $3); }  // $1 type, $2 main(), $3 block: {}
	| expression ';' { $$ = $1; }
	| jump_statement { $$ = $1; }
	;

declaration_specifiers
	: type_specifier { $$ = $1;}
	;

type_specifier
	: VOID      { $$ = $1; /*delete $1;*/}
	| CHAR      { $$ = $1; /*delete $1;*/}
	| SHORT     { $$ = $1; /*delete $1;*/}
	| INT       { $$ = $1; /*delete $1;*/}
	| LONG      { $$ = $1; /*delete $1;*/}
	| FLOAT     { $$ = $1; /*delete $1;*/}
	| DOUBLE    { $$ = $1; /*delete $1;*/}
	| SIGNED    { $$ = $1; /*delete $1;*/}
	| UNSIGNED  { $$ = $1; /*delete $1;*/}
	| TYPE_NAME { $$ = $1; /*delete $1;*/}
	;

declarator
	: direct_declarator { $$ = $1;}
	;

direct_declarator
	: IDENTIFIER { $$ = new Declarator(*$1); }
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '(' ')' { $$ = $1;}
	;

compound_statement
	: '{' '}' { $$ = new Expression("null"); }
	/* | '{' statement '}' { $$ = $2; } */
	| '{' statement_list '}' { $$ = ($2);}
	;

statement_list
	: statement	{  $$ = new Statement_List($1);}
	| statement_list statement	{ $$ = new Statement_List($2, $1);}
	;

statement
	: jump_statement {$$ = $1;}
	;

jump_statement
	: RETURN expression ';' {$$ = $2;}

	;

expression
	: primary_expression {$$ = $1;}
	;

primary_expression
	: IDENTIFIER { $$ = new Expression(*$1); }
	| CONSTANT { $$ = new Expression(stoi(*$1)); }
	| STRING_LITERAL { $$ = new Expression(*$1); }
	| '(' expression ')' { $$ = $2; }
	;

%%

const Block *g_root; 

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}