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
    double number;
    std::string *string;
}

%token IDENTIFIER CONSTANT STRING_LITERAL
%token TYPE_NAME

%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID

%token RETURN

%type <block> primary_expression // etc
%type <block> expression
%type <block> declaration_specifiers
%type <block> type_specifier
%type <block> type_qualifier
%type <block> declarator
%type <block> direct_declarator
%type <block> statement
%type <block> compound_statement
%type <block> jump_statement
%type <block> translation_unit
%type <block> external_declaration
%type <block> function_definition


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
	;

external_declaration
	: function_definition { $$ = $1;}
	;

function_definition
	: declaration_specifiers declarator compound_statement { $$ = new Function($1, $2, $3);} // $1 type, $2 main(), $3 block: {}
	;

declaration_specifiers
	: type_specifier { $$ = $1;}
	| type_qualifier { $$ = $1;}
	;

type_specifier
	: VOID { $$ = $1;}
	| CHAR { $$ = $1;}
	| SHORT { $$ = $1;}
	| INT { $$ = $1;}
	| LONG { $$ = $1;}
	| FLOAT { $$ = $1;}
	| DOUBLE { $$ = $1;}
	| SIGNED { $$ = $1;}
	| UNSIGNED { $$ = $1;}
	| TYPE_NAME { $$ = $1;}
	;

type_qualifier
	: CONST { $$ = $1;}
	| VOLATILE { $$ = $1;}
	;

declarator
	: direct_declarator { $$ = new Declarator($1);}
	;

direct_declarator
	: IDENTIFIER { $$ = $1; }
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '(' ')' { $$ = $1;}

compound_statement
	: '{' '}'
	| '{' statement '}'
	;

statement
	: jump_statement {$$ = $1;}
	;

jump_statement
	: RETURN expression ';' {$$ = new Jump($2);}
	;

expression
	: primary_expression {$$ = $1;}
	;

primary_expression
	: IDENTIFIER { $$ = $1; }
	| CONSTANT { $$ = $1; }
	| STRING_LITERAL { $$ = $1; }
	| '(' expression ')' { $$ = $2; }
	;

%%

const Block *g_root; 

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}