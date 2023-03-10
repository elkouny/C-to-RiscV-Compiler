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
%type <block> postfix_expression
%type <block> argument_expression_list
%type <block> unary_expression
%type <block> unary_operator
%type <block> cast_expression
%type <block> multiplicative_expression
%type <block> additive_expression
%type <block> shift_expression
%type <block> relational_expression
%type <block> equality_expression
%type <block> and_expression
%type <block> exclusive_or_expression
%type <block> inclusive_or_expression
%type <block> logical_and_expression
%type <block> logical_or_expression
%type <block> conditional_expression
%type <block> assignment_expression
%type <block> assignment_operator
%type <block> expression
%type <block> constant_expression
%type <block> declaration
%type <block> declaration_specifiers
%type <block> init_declarator_list
%type <block> init_declarator
%type <block> storage_class_specifier
%type <block> type_specifier
%type <block> struct_or_union_specifier
%type <block> struct_or_union
%type <block> struct_declaration_list
%type <block> struct_declaration	
%type <block> specifier_qualifier_list
%type <block> struct_declarator_list
%type <block> struct_declarator
%type <block> enum_specifier
%type <block> enumerator_list
%type <block> enumerator
%type <block> type_qualifier
%type <block> declarator
%type <block> direct_declarator
%type <block> pointer
%type <block> type_qualifier_list
%type <block> parameter_type_list
%type <block> parameter_list
%type <block> parameter_declaration
%type <block> identifier_list
%type <block> type_name
%type <block> abstract_declarator
%type <block> direct_abstract_declarator
%type <block> initializer
%type <block> initializer_list
%type <block> statement
%type <block> labeled_statement
%type <block> compound_statement
%type <block> expression_statement
%type <block> selection_statement
%type <block> iteration_statement
%type <block> jump_statement
%type <block> translation_unit
%type <block> external_declaration
%type <block> function_definition
%type <block> declaration_list
%type <block> statement_list


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
	: external_declaration { $$ = new TreeNode($1); }
	/* | declaration { $$ = $1; } */
	;

external_declaration
	: function_definition	{ $$ = $1;}
	/* | declaration	{ $$ = new ExternalDeclaration($1);} */
	;

function_definition
	: declaration_specifiers declarator compound_statement		{ $$ = new FunctionDefinition($1, $2, $3);} // $1 type, $2 main(), $3 block: {}
	/* | declaration_specifiers declarator declaration_list compound_statement	{ $$ = new FunctionDefinition($1, $2, $3, $4);} */
	/* | declaration_specifiers declarator compound_statement		{ $$ = new FunctionDefinition($1, $2, $3);} */
	/* | declarator declaration_list compound_statement	{ $$ = new FunctionDefinition($1, $2, $3);} */
	/* | declarator compound_statement	{ $$ = new FunctionDefinition($1, $2);} */
	;

/* declaration_list
	: declaration { $$ = new DeclarationList($1);}
	| declaration_list declaration { $$ = new DeclarationList($1, $2);}
	;

declaration
	: declaration_specifiers ';' { $$ = new Declaration($1);}
	| declaration_specifiers init_declarator_list ';' { $$ = new Declaration($1, $2);}
	; */

declaration_specifiers
	: storage_class_specifier { $$ = $1;}
	| storage_class_specifier declaration_specifiers { std::cerr<<"declaration specifiers"<<std::endl; }
	| type_specifier { $$ = $1;}
	| type_specifier declaration_specifiers { std::cerr<<"declaration specifiers"<<std::endl; }
	| type_qualifier { $$ = $1;}
	| type_qualifier declaration_specifiers { std::cerr<<"declaration specifiers"<<std::endl; }
	;

storage_class_specifier
	: TYPEDEF { $$ = new TypeDef();}
	| EXTERN { $$ = new Extern();}
	| STATIC { $$ = new Static();}
	| AUTO { $$ = new Auto();}
	| REGISTER { $$ = new Register();}
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
	/* | struct_or_union_specifier { $$ = $1;}
	| enum_specifier { $$ = $1;} */
	| TYPE_NAME { $$ = $1;}
	;

/* struct_or_union
	: STRUCT { $$ = new Struct();}
	| UNION { $$ = new Union();}
	; */

type_qualifier
	: CONST { $$ = $1;}
	| VOLATILE { $$ = $1;}
	;

/* init_declarator_list
	: init_declarator { $$ = new InitDeclaratorList($1);}
	| init_declarator_list ',' init_declarator { $$ = new InitDeclaratorList($1, $3);}
	;

init_declarator
	: declarator { $$ = new InitDeclarator($1);}
	| declarator '=' initializer { $$ = new InitDeclarator($1, $3);}
	; */

declarator
	: direct_declarator { $$ = new Declarator($1);}
	/* : pointer direct_declarator { $$ = new Declarator($1, $2);} */
	;

direct_declarator
	: IDENTIFIER { $$ = new DirectDeclarator($1);}
	| '(' declarator ')' { $$ = new DirectDeclarator($2);}
	| direct_declarator '(' ')' { $$ = new DirectDeclarator($1);}

	
/* compound_statement
	: '{' '}' { $$ = new CompoundStatement();}
	| '{' statement_list '}' { $$ = new CompoundStatement($2);}
	| '{' declaration_list '}' { $$ = new CompoundStatement($2);}
	| '{' declaration_list statement_list '}' { $$ = new CompoundStatement($2, $3);}
	; */

compound_statement
	: '{' '}'
	| '{' statement '}'
	;

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
	: IDENTIFIER { $$ = $1; }
	| CONSTANT { $$ = $1; }
	| STRING_LITERAL { $$ = $1; }
	| '(' expression ')' { $$ = $2; }
	;

%%

/*rename*/ 
const Block *g_root; 

/*rename*/ 
const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}