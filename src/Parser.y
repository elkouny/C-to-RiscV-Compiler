%code requires{
    #include "../include/ast.hpp"

	#include <cassert>

	// rename expression later
    extern const Block *g_root;


    int yylex(void);
    void yyerror(const char *);
}

%union{
    /*rename pointer ^*/
	const Block *block;
	std::vector<BlockPtr> *list;
    std::string *string;
}

%token SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP
%token LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CONST VOLATILE
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK

%token <string> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

%token <string> IDENTIFIER CONSTANT STRING_LITERAL

%token <string> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID TYPE_NAME

%token <string> RETURN
/*
%token <string> IDENTIFIER CONSTANT STRING_LITERAL

%token <string> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID TYPE_NAME

%token RETURN */

%type <block> translation_unit
%type <block> external_declaration
%type <block> function_definition

%type <block> declaration
%type <block> parameter_declaration
%type <block> init_declarator
%type <block> declarator
%type <block> direct_declarator

%type <list> statement_list
%type <list> declaration_list
%type <list> argument_expression_list
%type <list> parameter_list
/* %type <block> conditional_expression */

%type <block> expression
%type <block> assignment_expression
%type <block> logical_or_expression
%type <block> logical_and_expression
%type <block> inclusive_or_expression
%type <block> exclusive_or_expression
%type <block> and_expression
%type <block> equality_expression
%type <block> relational_expression
%type <block> additive_expression
%type <block> multiplicative_expression
%type <block> unary_expression
%type <block> postfix_expression
%type <block> primary_expression // etc

%type <block> compound_statement
%type <block> statement
%type <block> jump_statement
%type <block> expression_statement
%type <block> selection_statement
%type <block> iteration_statement

%type <string> assignment_operator
%type <string> declaration_specifiers
%type <string> type_specifier


%precedence LOWER_THAN_ELSE
%precedence ELSE
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
	| translation_unit external_declaration { $$ = new TranslationUnit($2, $1); }
	;

external_declaration
	: function_definition { $$ = $1;}
	| declaration	{ $$ = $1;}
	;

declaration_list
	: declaration { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| declaration_list declaration { $1->push_back($2); $$ = $1; }
	/* | declaration_list ',' declaration { $1->push_back($3); $$ = $1; }
	| '(' declaration_list ')' { $$ = $2; } */
	;

declaration
	: declaration_specifiers init_declarator ';' { $$ = new Declaration(*$1, $2);}
	;

init_declarator
	: declarator { $$ = new Init_Declarator($1);}
	| declarator '=' assignment_expression { $$ = new Init_Declarator($1, $3);}
	;


function_definition
	: declaration_specifiers declarator compound_statement { $$ = new Function(*$1, $2, $3); }  // $1 type, $2 main(), $3 block: {}
	/* | declaration_specifiers declarator declaration_list compound_statement { $$ = new Function(*$1, $2, $3, $4); }  // $1 type, $2 main(), $3 block: {} */
	/* | expression ';' { $$ = $1; } */
	/* |compound_statement { $$ = $1; } */
	| jump_statement { $$ = $1; }
	;

declaration_specifiers
	: type_specifier { $$ = $1;}
	;

type_specifier
	: VOID      { $$ = $1; }
	| CHAR      { $$ = $1; }
	| SHORT     { $$ = $1; }
	| INT       { $$ = $1; }
	| LONG      { $$ = $1; }
	| FLOAT     { $$ = $1; }
	| DOUBLE    { $$ = $1; }
	| SIGNED    { $$ = $1; }
	| UNSIGNED  { $$ = $1; }
	| TYPE_NAME { $$ = $1; }
	;

declarator
	: direct_declarator { $$ = $1;}
	;

direct_declarator
	: IDENTIFIER { $$ = new Declarator(*$1); delete $1;}
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '(' parameter_list ')' { $$ = new FunctionDeclarator($1, $3); }
	| direct_declarator '(' ')' { $$ = $1;}
	;

parameter_list
	: parameter_declaration { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| parameter_list ',' parameter_declaration { $1->push_back($3); $$ = $1;}
	;

parameter_declaration
	: declaration_specifiers declarator { $$ = new ParameterDeclaration($1, $2);}
	/* | declaration_specifiers abstract_declarator { $$ = new ParameterDeclaration($1, $2);} */
	| declaration_specifiers { $$ = new ParameterDeclaration($1);}
	;

compound_statement
	: '{' '}' { $$ = new Expression("null"); }
	/* | '{' statement '}' { $$ = $2; } */
	| '{' statement_list '}' {$$ = new Compound_Statement($2);}
	| '{' declaration_list statement_list '}' {$$ = new Compound_Statement($2, $3);}
	| '{' declaration_list '}' {$$ = new Compound_Statement($2);}
	;

statement_list
	: statement	{ std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| statement_list statement { $1->push_back($2); $$ = $1; }
	;


statement
	: jump_statement {$$ = $1;}
	| expression_statement { $$ = $1; }
	| compound_statement { $$ = $1; }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	;

jump_statement
	: RETURN expression ';' {$$= new jump_statement(*$1,$2); delete $1;}
	;

expression_statement
	: ';'	{ $$ = new Expression("null"); }
	| expression ';' { $$ = $1; }
	;

selection_statement
	: IF '(' expression ')' statement { $$ = new IfElse($3, $5);} %prec LOWER_THAN_ELSE
	| IF '(' expression ')' statement ELSE statement { $$ = new IfElse($3, $5, $7);}
	;

iteration_statement
	: WHILE '(' expression ')' statement { $$ = new While($3, $5);}
	| DO statement WHILE '(' expression ')' ';' { $$ = new While($5, $2);}
	;

expression
	: assignment_expression { $$ = $1; }
	;



/* postfix_expression
	: primary_expression { $$ = $1;} */

postfix_expression
	: primary_expression { $$ = $1;}
	/* | postfix_expression '[' expression ']' { $$ = new ArrayAccess($1, $3);} */
	| postfix_expression '(' ')' { $$ = new FunctionCall($1);}
	| postfix_expression '(' argument_expression_list ')' { $$ = new FunctionCall($1, $3);}
	/* | postfix_expression '.' IDENTIFIER { $$ = new MemberAccess($1, $3);} */
	/* | postfix_expression PTR_OP IDENTIFIER { $$ = new PointerAccess($1, $3);} */
	| postfix_expression INC_OP { $$ = new Inc($1);}
	| postfix_expression DEC_OP { $$ = new Dec($1);}
	;

argument_expression_list
	: assignment_expression { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| argument_expression_list ',' assignment_expression { $1->push_back($3); $$ = $1; }
	;

unary_expression
	: postfix_expression { $$ = $1;}
	| INC_OP unary_expression { $$ = new Inc($2);}
	| DEC_OP unary_expression { $$ = new Dec($2);}
	/* | unary_operator cast_expression { $$ = new UnaryOperator($1, $2);}
	| SIZEOF unary_expression { $$ = new Sizeof($2);}
	| SIZEOF '(' type_name ')' { $$ = new Sizeof($3);} */
	;

multiplicative_expression
	: unary_expression { $$ = $1;}
	| multiplicative_expression '*' unary_expression  { $$ = new Multiplication($1, $3);}
	| multiplicative_expression '/' unary_expression { $$ = new Division($1, $3);}
	;

additive_expression
	: multiplicative_expression { $$ = $1;}
	| additive_expression '+' multiplicative_expression { $$ = new Addition($1, $3);}
	| additive_expression '-' multiplicative_expression { $$ = new Subtraction($1, $3);}
	;

relational_expression
	: additive_expression { $$ = $1;}
	| relational_expression '<' additive_expression { $$ = new LessThan($1, $3);}
	| relational_expression '>' additive_expression { $$ = new GreaterThan($1, $3);}
	| relational_expression LE_OP additive_expression { $$ = new LessThanEqual($1, $3);}
	| relational_expression GE_OP additive_expression { $$ = new GreaterThanEqual($1, $3);}
	;

equality_expression
	: relational_expression { $$ = $1;}
	| equality_expression EQ_OP relational_expression { $$ = new Equal($1, $3);}
	| equality_expression NE_OP relational_expression { $$ = new NotEqual($1, $3);}
	;

and_expression
	: equality_expression { $$ = $1;}
	| and_expression '&' equality_expression { $$ = new BitwiseAnd($1, $3);}
	;

exclusive_or_expression
	: and_expression { $$ = $1;}
	| exclusive_or_expression '^' and_expression { $$ = new BitwiseXor($1, $3);}
	;

inclusive_or_expression
	: exclusive_or_expression { $$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression { $$ = new BitwiseOr($1, $3);}
	;

logical_and_expression
	: inclusive_or_expression { $$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression { $$ = new LogicalAnd($1, $3);}
	;

logical_or_expression
	: logical_and_expression { $$ = $1;}
	| logical_or_expression OR_OP logical_and_expression { $$ = new LogicalOr($1, $3);}
	;


assignment_expression
	: logical_or_expression { $$ = $1;}
	| unary_expression assignment_operator assignment_expression { $$ = new Assignment($1, *$2, $3);}
	;

primary_expression
	: IDENTIFIER { $$ = new Expression(*$1); delete $1;}
	| CONSTANT { $$ = new Expression(stoi(*$1)); delete $1;}
	| STRING_LITERAL { $$ = new Expression(*$1); delete $1;}
	| '(' expression ')' { $$ = $2; }
	;

assignment_operator
	: '='  { $$ = new std::string("=");}
	| MUL_ASSIGN { $$ = $1;}
	| DIV_ASSIGN { $$ = $1;}
	| MOD_ASSIGN { $$ = $1;}
	| ADD_ASSIGN { $$ = $1;}
	| SUB_ASSIGN { $$ = $1;}

%%



const Block *g_root;

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
