%option noyywrap

%{
extern "C" int fileno(FILE *stream);
#include "currentParser.tab.hpp"
%}

D  [0-9]
L  [a-zA-Z_]
H  [a-fA-F0-9]
E  [Ee][+-]?{D}+
FS (f|F|l|L)
IS (u|U|l|L)*

%%

"auto"			{ return(AUTO); }
"break"			{ return(BREAK); }
"case"			{ return(CASE); }
"char"			{ return(CHAR); }
"const"			{ return(CONST); }
"continue"		{ return(CONTINUE); }
"default"		{ return(DEFAULT); }
"do"			{ return(DO); }
"double"		{ return(DOUBLE); }
"else"			{ return(ELSE); }
"enum"			{ return(ENUM); }
"extern"		{ return(EXTERN); }
"float"			{ return(FLOAT); }
"for"			{ return(FOR); }
"goto"			{ return(GOTO); }
"if"			{ return(IF); }
"int"			{ yylval.string=new std::string(yytext); return(INT); }
"long"			{ return(LONG); }
"register"		{ return(REGISTER); }
"return"		{ return(RETURN); }
"short"			{ return(SHORT); }
"signed"		{ return(SIGNED); }
"sizeof"		{ return(SIZEOF); }
"static"		{ return(STATIC); }
"struct"		{ return(STRUCT); }
"switch"		{ return(SWITCH); }
"typedef"		{ return(TYPEDEF); }
"union"			{ return(UNION); }
"unsigned"		{ return(UNSIGNED); }
"void"			{ return(VOID); }
"volatile"		{ return(VOLATILE); }
"while"			{ return(WHILE); }

{L}({L}|{D})*		{ yylval.string=new std::string(yytext); return(IDENTIFIER);} //check_type()); }

0[xX]{H}+{IS}?		{ yylval.string=new std::string(yytext); return(CONSTANT); }
0{D}+{IS}?		    { yylval.string=new std::string(yytext); return(CONSTANT); }
{D}+{IS}?		    { yylval.string=new std::string(yytext); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ yylval.string=new std::string(yytext); return(CONSTANT); }

{D}+{E}{FS}?		{ yylval.string=new std::string(yytext); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ yylval.string=new std::string(yytext); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ yylval.string=new std::string(yytext); return(STRING_LITERAL); }

"..."			{ return(ELLIPSIS); }
">>="			{ return(RIGHT_ASSIGN); }
"<<="			{ return(LEFT_ASSIGN); }
"+="			{ return(ADD_ASSIGN); }
"-="			{ return(SUB_ASSIGN); }
"*="			{ return(MUL_ASSIGN); }
"/="			{ return(DIV_ASSIGN); }
"%="			{ return(MOD_ASSIGN); }
"&="			{ return(AND_ASSIGN); }
"^="			{ return(XOR_ASSIGN); }
"|="			{ return(OR_ASSIGN); }
">>"			{ return(RIGHT_OP); }
"<<"			{ return(LEFT_OP); }
"++"			{ return(INC_OP); }
"--"			{ return(DEC_OP); }
"->"			{ return(PTR_OP); }
"&&"			{ return(AND_OP); }
"||"			{ return(OR_OP); }
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"!="			{ return(NE_OP); }
";"			    { return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{ return('}'); }
","		    	{ return(','); }
":"		    	{ return(':'); }
"="		    	{ return('='); }
"("		    	{ return('('); }
")"		    	{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>")		{ return(']'); }
"."		    	{ return('.'); }
"&"		    	{ return('&'); }
"!"		    	{ return('!'); }
"~"		    	{ return('~'); }
"-"		    	{ return('-'); }
"+"		    	{ return('+'); }
"*"		    	{ return('*'); }
"/"		    	{ return('/'); }
"%"		    	{ return('%'); }
"<"		    	{ return('<'); }
">"		    	{ return('>'); }
"?"		    	{ return('?'); }
"^"		    	{ return('^'); }
"|"		    	{ return('|'); }

[ \t\v\n\f]		{ }
.			{ /* ignore bad characters */ }

%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}

// yywrap()
// {
// 	return 1;
// }

// {
// 	char c, c1;

// loop:
// 	while ((c = input()) != '*' && c != 0)
// 		putchar(c);

// 	if ((c1 = input()) != '/' && c != 0)
// 	{
// 		unput(c1);
// 		goto loop;
// 	}

// 	if (c != 0)
// 		putchar(c1);
// }


// int column = 0;

// void count()
// {
// 	int i;

// 	for (i = 0; yytext[i] != '\0'; i++)
// 		if (yytext[i] == '\n')
// 			column = 0;
// 		else if (yytext[i] == '\t')
// 			column += 8 - (column % 8);
// 		else
// 			column++;

// 	ECHO;
// }


// int check_type()
// {
// /*
// * pseudo code --- this is what it should check
// *
// *	if (yytext == type_name)
// *		return(TYPE_NAME);
// *
// *	return(IDENTIFIER);
// */

// /*
// *	it actually will only return IDENTIFIER
// */
// 	return(IDENTIFIER);
// }