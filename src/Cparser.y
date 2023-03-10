// DOUBLE CHECK THIS WITH SPEC LATER
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

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <block> primary_expression // etc
%type <block> statement
%type <block> jump_statement
%type <block> expression
%type <block> translation_unit
%type <block> function_definition
%type <block> compound_statement
%type <block> declaration
%type <block> declaration_specifiers

%type <block> declarator

// continue...
%type <number> CONSTANT// May need int, float etc type
%type <string> STRING_LITERAL // may need char type


%start ROOT

%%
/* Extracts AST */
ROOT : translation_unit { g_root = $1; }

/* Top level entity */
translation_unit
	: function_definition { $$ = $1; }
	| declaration { $$ = $1; }
	;



function_definition
	
	: declaration_specifiers declarator compound_statement {$$ = new FunctionDefinition($1, $2, $3);}
	;

/* compound_statement
	: '{' '}'
	| '{' statement_list '}' 
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	; */

statement
	: /*labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| */ jump_statement {$$ = $1;}
	;

jump_statement
	: /* GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| */ RETURN expression ';' {$$ = new ReturnStatement($2);}
	;

expression
	: primary_expression {$$ = $1;}
	/* | expression ',' assignment_expression */
	;

primary_expression
	: /*IDENTIFIER
	| */CONSTANT {$$ = new Constant($1);}
	| STRING_LITERAL {$$ = new StringLiteral($1);}
	| '(' expression ')' {$$ = $2;}
	;

%%

/*rename*/ Expression *g_root; 

/*rename*/ Expression *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}