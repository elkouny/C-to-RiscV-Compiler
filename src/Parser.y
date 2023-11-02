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

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO

%token <string> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

%token <string> IDENTIFIER CONSTANT STRING_LITERAL

%token <string> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID TYPE_NAME

%token <string> RETURN CONTINUE BREAK 
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
%type <block> labeled_statement

%type <list> statement_list
%type <list> declaration_list
%type <list> argument_expression_list
%type <list> parameter_list
%type <list> initializer_list
%type <list> enumerator_list
/* %type <block> conditional_expression */

%type <block> expression
%type <block> initializer
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
%type <block> shift_expression // etc
%type <block> conditional_expression
%type <block> constant_expression
%type <block> enumerator
/* %type <block> unary_operator // etc */

%type <block> enum_specifier
%type <block> compound_statement
%type <block> statement
%type <block> jump_statement
%type <block> expression_statement
%type <block> selection_statement
%type <block> iteration_statement

/* %type <string> assignment_operator */
%type <string> unary_operator
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
	| enum_specifier ';' { $$ = $1;}
	| ENUM IDENTIFIER init_declarator ';' { $$ = new Declaration("int", $3);}
	
	;

init_declarator
	: declarator { $$ = new Init_Declarator($1);}
	| declarator '=' initializer { $$ = new Init_Declarator($1, $3);}
	;

initializer
	: assignment_expression { $$ = $1;}
	| '{' initializer_list '}' { $$ = new ArrayInitializer($2);}
	/* | '{' initializer_list ',' '}' { $$ = new ArrayInitializer($2);} */
	;


initializer_list
	: initializer { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| initializer_list ',' initializer { $1->push_back($3); $$ = $1; }
	;

function_definition
	: declaration_specifiers declarator compound_statement { $$ = new Function(*$1, $2, $3); }  // $1 type, $2 main(), $3 block: {}
	/* | declaration_specifiers declarator { $$ = new Function(*$1, $2); } */
	/* | declaration_specifiers declarator declaration_list compound_statement { $$ = new Function(*$1, $2, $3, $4); }  // $1 type, $2 main(), $3 block: {} */
	/* | expression ';' { $$ = $1; } */
	/* |compound_statement { $$ = $1; } */
	/* | jump_statement { $$ = $1; } */
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
	/* | enum_specifier { $$ = $1;}	 */
	;

declarator
	: direct_declarator { $$ = $1;}
	;

direct_declarator
	: IDENTIFIER { $$ = new Declarator(*$1); delete $1;}
	| '*' IDENTIFIER { $$ = new Declarator(*$2); delete $2;}
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '(' parameter_list ')' { $$ = new FunctionDeclarator($1, $3); }
	| direct_declarator '(' ')' { $$ = new FunctionDeclarator($1);}
	// ARRAYs
	| direct_declarator '[' logical_or_expression ']' { $$ = new ArrayDeclarator($1, $3);} // was constant_expression
	/* | direct_declarator '[' ']' { $$ = new DirectDeclarator($1);} */
	/* | direct_declarator '(' ')' { $$ = $1;} */
	;

parameter_list
	: parameter_declaration { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList; }
	| parameter_list ',' parameter_declaration { $1->push_back($3); $$ = $1;}
	;

parameter_declaration
	: declaration_specifiers declarator { $$ = new ParameterDeclaration(*$1, $2);}
	/* | declaration_specifiers abstract_declarator { $$ = new ParameterDeclaration($1, $2);} */
	| declaration_specifiers { $$ = new ParameterDeclaration(*$1);}
	;

compound_statement
	: '{' '}' { $$ = new Expression("null"); }
	/* | '{' statement '}' { $$ = $2; } */
	| '{' statement_list '}' {$$ = new Compound_Statement($2,"slist");}
	| '{' declaration_list statement_list '}' {$$ = new Compound_Statement($2, $3);}
	| '{' declaration_list '}' {$$ = new Compound_Statement($2,"dlist");}
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
	| labeled_statement { $$ = $1; }
	;


labeled_statement
	: CASE constant_expression ':' statement 	{ $$ = new Case($2, $4);}
	/* : IDENTIFIER ':' statement { $$ = new LabeledStatement($1, $3);} */
	| DEFAULT ':' statement { $$ = new Case($3);}
	;

jump_statement
	: RETURN expression ';' { $$= new JumpStatement(*$1,$2); delete $1;}
	| CONTINUE ';'	{ $$ = new JumpStatement(*$1); delete $1;}
	| BREAK ';'	{ $$ = new JumpStatement(*$1); delete $1;}
	| RETURN ';'	{ $$ = new JumpStatement(*$1); delete $1;}
	;

expression_statement
	: ';'	{ $$ = new Expression("null"); }
	| expression ';' { $$ = $1; }
	;

selection_statement
	: IF '(' expression ')' statement { $$ = new IfElse($3, $5);} %prec LOWER_THAN_ELSE
	| IF '(' expression ')' statement ELSE statement { $$ = new IfElse($3, $5, $7);}
	| SWITCH '(' expression ')' statement	{ $$ = new Switch($3, $5);}
	;

iteration_statement
	: WHILE '(' expression ')' statement { $$ = new While($3, $5);}
	| DO statement WHILE '(' expression ')' ';' { $$ = new While($5, $2);}
	| FOR '(' expression_statement expression_statement ')' statement { $$ = new For($3, $4, $6);}
	| FOR '(' expression_statement expression_statement expression ')' statement { $$ = new For($3, $4, $5, $7);}
	;

expression
	: assignment_expression { $$ = $1; }
	;

postfix_expression
	: primary_expression { $$ = $1;}
	| postfix_expression '[' expression ']' { $$ = new ArrayExpression($1, $3);}
	| postfix_expression '(' ')' { $$ = new FunctionCall($1);}
	| postfix_expression '(' argument_expression_list ')' { $$ = new FunctionCall($1, $3);}
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
	| unary_operator unary_expression { $$ = new UnaryOperator(*$1, $2);}
	| SIZEOF unary_expression { $$ = new SizeOf($2);}
	| SIZEOF '(' type_specifier ')' { $$ = new SizeOf(*$3);}
	;

unary_operator
	: '&' { $$ = new std::string("&");}
	| '*' { $$ = new std::string("*");}
	| '+' { $$ = new std::string("+");}
	| '-' { $$ = new std::string("-");}
	| '~' { $$ = new std::string("~");} // BITWISE NOT
	| '!' { $$ = new std::string("!");} // LOGICAL NOT
	;

multiplicative_expression
	: unary_expression { $$ = $1;}
	| multiplicative_expression '*' unary_expression  { $$ = new Multiplication($1, $3);}
	| multiplicative_expression '/' unary_expression { $$ = new Division($1, $3);}
	| multiplicative_expression '%' unary_expression { $$ = new Modulo($1, $3);}
	;

additive_expression
	: multiplicative_expression { $$ = $1;}
	| additive_expression '+' multiplicative_expression { $$ = new Addition($1, $3);}
	| additive_expression '-' multiplicative_expression { $$ = new Subtraction($1, $3);}
	;

shift_expression
	: additive_expression { $$ = $1;}
	| shift_expression LEFT_OP additive_expression { $$ = new LeftShift($1, $3);}
	| shift_expression RIGHT_OP additive_expression	{ $$ = new RightShift($1, $3);}
	;


relational_expression
	: shift_expression { $$ = $1;}
	| relational_expression '<' shift_expression { $$ = new LessThan($1, $3);}
	| relational_expression '>' shift_expression { $$ = new GreaterThan($1, $3);}
	| relational_expression LE_OP shift_expression { $$ = new LessThanEqual($1, $3);}
	| relational_expression GE_OP shift_expression { $$ = new GreaterThanEqual($1, $3);}
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

conditional_expression
	: logical_or_expression { $$ = $1;}
	/* | logical_or_expression '?' expression ':' conditional_expression { $$ = new Conditional($1, $3, $5);} */
	;

assignment_expression
	: conditional_expression { $$ = $1;}
	/* | unary_expression assignment_operator assignment_expression { $$ = new Assignment($1, *$2, $3);} */
	| unary_expression '=' assignment_expression { $$ = new Assignment($1, "=", $3);}
	| unary_expression MUL_ASSIGN assignment_expression { $$ = new Assignment($1, "*=", new Multiplication($1, $3));}
	| unary_expression DIV_ASSIGN assignment_expression { $$ = new Assignment($1, "/=", new Division($1, $3));}
	| unary_expression MOD_ASSIGN assignment_expression { $$ = new Assignment($1, "%=", new Modulo($1, $3));}
	| unary_expression ADD_ASSIGN assignment_expression { $$ = new Assignment($1, "+=", new Addition($1, $3));}
	| unary_expression SUB_ASSIGN assignment_expression { $$ = new Assignment($1, "-=", new Subtraction($1, $3));}

	;

constant_expression
	: conditional_expression { $$ = $1;}
	;

/* 
INT
	:ENUM IDENTIFIER 
	; */

enum_specifier
	: ENUM '{' enumerator_list '}' { $$ = new EnumSpecifier($3);}
	| ENUM IDENTIFIER '{' enumerator_list '}' { $$ = new EnumSpecifier($4);}
	/* | ENUM IDENTIFIER { $$ = new Init_Declarator(*$2);} */
	;

enumerator_list
	: enumerator { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back($1);  $$ = BlockList;}
	| enumerator_list ',' enumerator { $1->push_back($3); $$ = $1;}
	;

enumerator
	: IDENTIFIER { $$ = new Enumerator(*$1);}
	| IDENTIFIER '=' constant_expression { $$ = new Enumerator(*$1, $3);}
	;

primary_expression
	: IDENTIFIER { $$ = new Expression(*$1); delete $1;}
	| CONSTANT { $$ = new Expression(stoi(*$1)); delete $1;}
	/* | STRING_LITERAL { $$ = new Expression(*$1); delete $1;} */
	| '(' expression ')' { $$ = $2; }
	;

// DONT NEED THIS
/* assignment_operator
	: '='  { $$ = new std::string("=");}
	| MUL_ASSIGN { $$ = $1;}
	| DIV_ASSIGN { $$ = $1;}
	| MOD_ASSIGN { $$ = $1;}
	| ADD_ASSIGN { $$ = $1;}
	| SUB_ASSIGN { $$ = $1;} */

%%

const Block *g_root;

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}