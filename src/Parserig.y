%code requires{
    #include "ast.hpp"

	#include <cassert>

    extern Block *g_root; 

    int yylex(void);
    void yyerror(const char *);  
}
%define parse.error verbose


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


// continue...
/* %type <number> // May need int, float etc type */

/* %type <string> STRING_LITERAL // may need char type */

%start translation_unit

%%

primary_expression
	: IDENTIFIER { $$ = new Identifier($1);}
	| CONSTANT { $$ = new Constant($1);}
	| STRING_LITERAL { $$ = new StringLiteral($1);}
	| '(' expression ')' { $$ = $2;}
	;

postfix_expression
	: primary_expression { $$ = $1;}
	| postfix_expression '[' expression ']' { $$ = new ArrayAccess($1, $3);}
	| postfix_expression '(' ')' { $$ = new FunctionCall($1, NULL);}
	| postfix_expression '(' argument_expression_list ')' { $$ = new FunctionCall($1, $3);}
	| postfix_expression '.' IDENTIFIER { $$ = new MemberAccess($1, $3);}
	| postfix_expression PTR_OP IDENTIFIER { $$ = new PointerAccess($1, $3);}
	| postfix_expression INC_OP { $$ = new PostfixInc($1);}
	| postfix_expression DEC_OP { $$ = new PostfixDec($1);}
	;

argument_expression_list
	: assignment_expression { $$ = new ArgumentList($1);}
	| argument_expression_list ',' assignment_expression { $$ = new ArgumentList($1, $3);}
	;

unary_expression
	: postfix_expression { $$ = $1;}
	| INC_OP unary_expression { $$ = new PrefixInc($2);}
	| DEC_OP unary_expression { $$ = new PrefixDec($2);}
	| unary_operator cast_expression { $$ = new UnaryOperator($1, $2);}
	| SIZEOF unary_expression { $$ = new Sizeof($2);}
	| SIZEOF '(' type_name ')' { $$ = new Sizeof($3);}
	;

unary_operator
	: '&' { $$ = new AddressOf();}
	| '*' { $$ = new Dereference();}
	| '+' { $$ = new UnaryPlus();}
	| '-' { $$ = new UnaryMinus();}
	| '~' { $$ = new BitwiseNot();}
	| '!' { $$ = new LogicalNot();}
	;

cast_expression
	: unary_expression { $$ = $1;}
	| '(' type_name ')' cast_expression { $$ = new Cast($2, $4);}
	;

multiplicative_expression
	: cast_expression { $$ = $1;}
	| multiplicative_expression '*' cast_expression  { $$ = new Multiplication($1, $3);}
	| multiplicative_expression '/' cast_expression { $$ = new Division($1, $3);}
	| multiplicative_expression '%' cast_expression { $$ = new Modulo($1, $3);}
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
	: logical_and_expression	{ $$ = $1;}
	| logical_or_expression OR_OP logical_and_expression { $$ = new LogicalOr($1, $3);}
	;

conditional_expression
	: logical_or_expression { $$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression { $$ = new Conditional($1, $3, $5);}
	;

assignment_expression
	: conditional_expression { $$ = $1;}
	| unary_expression assignment_operator assignment_expression { $$ = new Assignment($1, $2, $3);}
	;

assignment_operator
	: '=' { $$ = new Assign();}
	| MUL_ASSIGN { $$ = new MulAssign();}
	| DIV_ASSIGN { $$ = new DivAssign();}
	| MOD_ASSIGN { $$ = new ModAssign();}
	| ADD_ASSIGN { $$ = new AddAssign();}
	| SUB_ASSIGN { $$ = new SubAssign();}
	| LEFT_ASSIGN { $$ = new LeftAssign();}
	| RIGHT_ASSIGN 	{ $$ = new RightAssign();}
	| AND_ASSIGN { $$ = new AndAssign();}
	| XOR_ASSIGN { $$ = new XorAssign();}
	| OR_ASSIGN { $$ = new OrAssign();}
	;

expression
	: assignment_expression { $$ = $1;}
	| expression ',' assignment_expression { $$ = new Expression($1, $3);}
	;

constant_expression
	: conditional_expression { $$ = $1;}
	;

declaration
	: declaration_specifiers ';' { $$ = new Declaration($1);}
	| declaration_specifiers init_declarator_list ';' { $$ = new Declaration($1, $2);}
	;

declaration_specifiers
	: storage_class_specifier { $$ = new DeclarationSpecifiers($1);}
	| storage_class_specifier declaration_specifiers { $$ = new DeclarationSpecifiers($1, $2);}
	| type_specifier { $$ = new DeclarationSpecifiers($1);}
	| type_specifier declaration_specifiers { $$ = new DeclarationSpecifiers($1, $2);}
	| type_qualifier { $$ = new DeclarationSpecifiers($1);}
	| type_qualifier declaration_specifiers { $$ = new DeclarationSpecifiers($1, $2);}
	;

init_declarator_list
	: init_declarator { $$ = new InitDeclaratorList($1);}
	| init_declarator_list ',' init_declarator { $$ = new InitDeclaratorList($1, $3);}
	;

init_declarator
	: declarator { $$ = new InitDeclarator($1);}
	| declarator '=' initializer { $$ = new InitDeclarator($1, $3);}
	;

storage_class_specifier
	: TYPEDEF { $$ = new TypeDef();}
	| EXTERN { $$ = new Extern();}
	| STATIC { $$ = new Static();}
	| AUTO { $$ = new Auto();}
	| REGISTER { $$ = new Register();}
	;

type_specifier
	: VOID { $$ = new Void();}
	| CHAR { $$ = new Char();}
	| SHORT { $$ = new Short();}
	| INT { $$ = new Int();}
	| LONG { $$ = new Long();}
	| FLOAT { $$ = new Float();}
	| DOUBLE { $$ = new Double();}
	| SIGNED { $$ = new Signed();}
	| UNSIGNED { $$ = new Unsigned();}
	| struct_or_union_specifier { $$ = $1;}
	| enum_specifier { $$ = $1;}
	| TYPE_NAME { $$ = new TypeName($1);}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}' { $$ = new StructOrUnionSpecifier($1, $2, $4);}
	| struct_or_union '{' struct_declaration_list '}' { $$ = new StructOrUnionSpecifier($1, $3);}
	| struct_or_union IDENTIFIER { $$ = new StructOrUnionSpecifier($1, $2);}
	;

struct_or_union
	: STRUCT { $$ = new Struct();}
	| UNION { $$ = new Union();}
	;

struct_declaration_list
	: struct_declaration { $$ = new StructDeclarationList($1);}
	| struct_declaration_list struct_declaration { $$ = new StructDeclarationList($1, $2);}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' { $$ = new StructDeclaration($1, $2);}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list { $$ = new SpecifierQualifierList($1, $2);}
	| type_specifier { $$ = new SpecifierQualifierList($1);}
	| type_qualifier specifier_qualifier_list{ $$ = new SpecifierQualifierList($1, $2);}
	| type_qualifier { $$ = new SpecifierQualifierList($1);}
	;

struct_declarator_list
	: struct_declarator { $$ = new StructDeclaratorList($1);}
	| struct_declarator_list ',' struct_declarator { $$ = new StructDeclaratorList($1, $3);}
	;

struct_declarator
	: declarator { $$ = new StructDeclarator($1);}
	| ':' constant_expression { $$ = new StructDeclarator($1);}
	| declarator ':' constant_expression { $$ = new StructDeclarator($1, $3);}
	;

enum_specifier
	: ENUM '{' enumerator_list '}' { $$ = new EnumSpecifier($2);}
	| ENUM IDENTIFIER '{' enumerator_list '}' { $$ = new EnumSpecifier($2, $4);}
	| ENUM IDENTIFIER { $$ = new EnumSpecifier($2);}
	;

enumerator_list
	: enumerator { $$ = new EnumeratorList($1);}
	| enumerator_list ',' enumerator { $$ = new EnumeratorList($1, $3);}
	;

enumerator
	: IDENTIFIER { $$ = new Enumerator($1);}
	| IDENTIFIER '=' constant_expression { $$ = new Enumerator($1, $3);}
	;

type_qualifier
	: CONST { $$ = new Const();}
	| VOLATILE { $$ = new Volatile();}
	;

declarator
	: pointer direct_declarator { $$ = new Declarator($1, $2);}
	| direct_declarator { $$ = new Declarator($1);}
	;

direct_declarator
	: IDENTIFIER { $$ = new DirectDeclarator($1);}
	| '(' declarator ')' { $$ = new DirectDeclarator($2);}
	| direct_declarator '[' constant_expression ']' { $$ = new DirectDeclarator($1, $3);}
	| direct_declarator '[' ']' { $$ = new DirectDeclarator($1);}
	| direct_declarator '(' parameter_type_list ')' { $$ = new DirectDeclarator($1, $3);}
	| direct_declarator '(' identifier_list ')' { $$ = new DirectDeclarator($1, $3);}
	| direct_declarator '(' ')' { $$ = new DirectDeclarator($1);}
	;

pointer
	: '*' { $$ = new Pointer();}
	| '*' type_qualifier_list { $$ = new Pointer($2);}
	| '*' pointer { $$ = new Pointer($2);}
	| '*' type_qualifier_list pointer { $$ = new Pointer($2, $3);}
	;

type_qualifier_list
	: type_qualifier { $$ = new TypeQualifierList($1);}
	| type_qualifier_list type_qualifier { $$ = new TypeQualifierList($1, $2);}
	;


parameter_type_list
	: parameter_list { $$ = new ParameterTypeList($1);}
	| parameter_list ',' ELLIPSIS { $$ = new ParameterTypeList($1, $3);}
	;

parameter_list
	: parameter_declaration { $$ = new ParameterList($1);}
	| parameter_list ',' parameter_declaration { $$ = new ParameterList($1, $3);}
	;

parameter_declaration
	: declaration_specifiers declarator { $$ = new ParameterDeclaration($1, $2);}
	| declaration_specifiers abstract_declarator { $$ = new ParameterDeclaration($1, $2);}
	| declaration_specifiers { $$ = new ParameterDeclaration($1);}
	;

identifier_list
	: IDENTIFIER { $$ = $1 }
	| identifier_list ',' IDENTIFIER  { $$ = new IdentifierList($1, $3);}
	;

type_name
	: specifier_qualifier_list { $$ = new TypeName($1);}
	| specifier_qualifier_list abstract_declarator { $$ = new TypeName($1, $2);}
	;

abstract_declarator
	: pointer { $$ = new AbstractDeclarator($1);}
	| direct_abstract_declarator { $$ = new AbstractDeclarator($1);}
	| pointer direct_abstract_declarator { $$ = new AbstractDeclarator($1, $2);}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' { $$ = new DirectAbstractDeclarator($2);}
	| '[' ']' { $$ = new DirectAbstractDeclarator();}
	| '[' constant_expression ']' { $$ = new DirectAbstractDeclarator($2);}
	| direct_abstract_declarator '[' ']' { $$ = new DirectAbstractDeclarator($1);}
	| direct_abstract_declarator '[' constant_expression ']' { $$ = new DirectAbstractDeclarator($1, $3);}
	| '(' ')' { $$ = new DirectAbstractDeclarator();}
	| '(' parameter_type_list ')' { $$ = new DirectAbstractDeclarator($2);}
	| direct_abstract_declarator '(' ')' { $$ = new DirectAbstractDeclarator($1);}
	| direct_abstract_declarator '(' parameter_type_list ')'  { $$ = new DirectAbstractDeclarator($1, $3);}
	;

initializer
	: assignment_expression { $$ = new Initializer($1);}
	| '{' initializer_list '}' { $$ = new Initializer($2);}
	| '{' initializer_list ',' '}' { $$ = new Initializer($2);}
	;

initializer_list
	: initializer { $$ = new InitializerList($1);}
	| initializer_list ',' initializer { $$ = new InitializerList($1, $3);}
	;

statement
	: labeled_statement { $$ = new Statement($1);}
	| compound_statement { $$ = new Statement($1);}
	| expression_statement { $$ = new Statement($1);}
	| selection_statement { $$ = new Statement($1);}
	| iteration_statement { $$ = new Statement($1);}
	| jump_statement { $$ = new Statement($1);}
	;

labeled_statement
	: IDENTIFIER ':' statement { $$ = new LabeledStatement($1, $3);}
	| CASE constant_expression ':' statement 	{ $$ = new LabeledStatement($2, $4);}
	| DEFAULT ':' statement { $$ = new LabeledStatement($3);}
	;

compound_statement
	: '{' '}' { $$ = new CompoundStatement();}
	| '{' statement_list '}' { $$ = new CompoundStatement($2);}
	| '{' declaration_list '}' { $$ = new CompoundStatement($2);}
	| '{' declaration_list statement_list '}' { $$ = new CompoundStatement($2, $3);}
	;

declaration_list
	: declaration { $$ = new DeclarationList($1);}
	| declaration_list declaration { $$ = new DeclarationList($1, $2);}
	;

statement_list
	: statement	{ $$ = new StatementList($1);}
	| statement_list statement	{ $$ = new StatementList($1, $2);}
	;

expression_statement
	: ';'	{ $$ = new ExpressionStatement();}
	| expression ';'	{ $$ = new ExpressionStatement($1);}
	;

selection_statement
	: IF '(' expression ')' statement	{ $$ = new SelectionStatement($3, $5);}
	| IF '(' expression ')' statement ELSE statement	{ $$ = new SelectionStatement($3, $5, $7);}
	| SWITCH '(' expression ')' statement	{ $$ = new SelectionStatement($3, $5);}
	;

iteration_statement
	: WHILE '(' expression ')' statement	{ $$ = new IterationStatement($3, $5);}
	| DO statement WHILE '(' expression ')' ';'	{ $$ = new IterationStatement($2, $4);}
	/* | FOR '(' expression_statement expression_statement ')' statement	{ $$ = new IterationStatement($3, $4, $6);}
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = new IterationStatement($3, $4, $5, $7);} */
	;

jump_statement
	: GOTO IDENTIFIER ';'	{ $$ = new JumpStatement($2);}
	| CONTINUE ';'	{ $$ = new JumpStatement();}
	| BREAK ';'	{ $$ = new JumpStatement();}
	| RETURN ';'	{ $$ = new JumpStatement();}
	| RETURN expression ';'		{ $$ = new JumpStatement($2);}
	;

translation_unit	
	: external_declaration	{ $$ =  $1;}
	| translation_unit external_declaration	{ $$ = new TranslationUnit($1, $2);}
	;

external_declaration
	: function_definition	{ $$ = $1;}
	| declaration	{ $$ = $1;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement	{ $$ = new FunctionDefinition($1, $2, $3, $4);}
	| declaration_specifiers declarator compound_statement		{ $$ = new FunctionDefinition($1, $2, $3);}
	| declarator declaration_list compound_statement	{ $$ = new FunctionDefinition($1, $2, $3);}
	| declarator compound_statement	{ $$ = new FunctionDefinition($1, $2);}
	;

%%

/*rename*/ Expression *g_root; 

/*rename*/ Expression *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
