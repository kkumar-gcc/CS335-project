%{
#include "cp.h"
#include "parser.tab.h"
void yyerror (char *s);
extern "C" int yylex();

#include <iostream>
#include <string>

using namespace std;

extern int line;
	
%}
%option yylineno

Abstract ="abstract"
Boolean "boolean"
Break "break"
Byte "byte"
Char "char"
Class "class"
Const "const"
Continue "continue"
Double "double"
Else "else"
Final "final"
Float "float"
For "for"
If "if"
Instanceof "instanceof"
Int "int"
Long "long"
New "new"
Package "package"
Private "private"
Public "public"
Return "return"
Short "short"
Static "static"
This "this"
Void "void"
While "while"



EqualTo "="
GreaterThan ">"
LessThan "<"
Not "!"
Tilda "~"
QuestionMark "?"
Colon ":"
Arrow "->"
EqualEqual "=="
GreaterEqual ">="
LessEqual "<="
NotEqual "!="
Increment "++"
Decrement "--"
Or "||"
And "&&"
Add "+"
Subtract "-"
Multiply "*"
Divide "/"
BitwiseOr "|"
BitwiseAnd "&"
Power "^"
Modulo "%"
DoubleGR ">>"
DoubleLR "<<"
TripleGR ">>>"
PlusEQ "+="
SubEQ "-="
MultEq "*="
AndEQ "&="
OrEQ "|="
PowEQ "^="
DivEQ "/="
ModEQ "%="
DoubleGREQ ">>="
DoubleLREQ "<<="
TripleGREQ ">>>="



LeftCurlyBrace "{"
RightCurlyBrace "}"
LeftSquareBrace "["
RightSquareBrace "]"
LeftSmallBrace "("
RightSmallBrace ")"
Comma ","
DoubleColon "::"
FullStop "."
SemiColon ";"

Comment					\/\/.*|\/\*([^\*]*(\*+[^\*\/]+)*)*\**\*\/

Literal					{IntegerLiteral}|{FloatingPointLiteral}|"true"|"false"|null|{CharacterLiteral}

IntegerLiteral 			{DecimalIntegerLiteral}|{HexIntegerLiteral}|{OctalIntegerLiteral}|{BinaryIntegerLiteral}
DecimalIntegerLiteral	{DecimalNumeral}([lL])?
HexIntegerLiteral		(0[xX]){HexDigits}([lL])?
OctalIntegerLiteral		{OctalNumeral}([lL])?
BinaryIntegerLiteral	{BinaryNumeral}([lL])?

DecimalNumeral			0|[1-9]({Digits})?|[1-9][_]+{Digits}
Digits					[0-9]|[0-9](([0-9_])+)?[0-9]
DigitsForFloat			[1-9]|[1-9](([0-9_])+)?[0-9]

HexDigits				[0-9a-fA-F]|[0-9a-fA-F](([0-9a-fA-F_])+)?[0-9a-fA-F]

OctalNumeral			0{OctalDigits}|0[_]+{OctalDigits}
OctalDigits				[0-7]|[0-7](([0-7_])+)?[0-7]


BinaryNumeral 			("0b"|"0B"){BinaryDigits}
BinaryDigits			[01]|[01](([01_])+)?[01]

FloatingPointLiteral	{DecimalFloatingPointLiteral}|{HexadecimalFloatingPointLiteral}
DecimalFloatingPointLiteral	{Digits}"."({Digits})?({ExponentPart})?({FloatTypeSuffix})?|"."{Digits}({ExponentPart})?({FloatTypeSuffix})?|{Digits}{ExponentPart}({FloatTypeSuffix})?|{DigitsForFloat}({ExponentPart})?{FloatTypeSuffix}
ExponentPart			[eE]([+-])?{Digits}
FloatTypeSuffix			[fFdD]

HexadecimalFloatingPointLiteral	{HexSignificand}{BinaryExponent}({FloatTypeSuffix})?
HexSignificand			(0[xX]){HexDigits}[.]?|(0[xX])({HexDigits})?"."{HexDigits}
BinaryExponent			[pP]([+-])?{Digits}

CharacterLiteral		('[^'\\\n]'|'{EscapeSequence}')

StringLiteral			\"([^\"\\\n]|{EscapeSequence})*\"

EscapeSequence			(\\)[btnfr]|(\\)([0-7]|[0-7][0-7]|[0-3][0-7][0-7])|"\\\\"|"\\\""|"\\'"

Identifier				[a-zA-Z_$][a-zA-Z_0-9$]*




%%

[ \t\r\f\b]+ 			;
[\n] { line++;}
{Abstract} { yylval.str=strdup(yytext); return(ABSTRACT); }
{Boolean} {yylval.str=strdup(yytext); return BOOLEAN;}
{Break} {yylval.str=strdup(yytext); return BREAK;}
{Byte} {yylval.str=strdup(yytext); return BYTE;}
{Char} {yylval.str=strdup(yytext); return CHAR;}
{Class} {yylval.str=strdup(yytext); return CLASS;}
{Const} {yylval.str=strdup(yytext); return CONST;}
{Continue} {yylval.str=strdup(yytext); return CONTINUE;}
{Double} {yylval.str=strdup(yytext); return DOUBLE;}
{Else} {yylval.str=strdup(yytext); return ELSE;}
{Final} {yylval.str=strdup(yytext); return FINAL;}
{Float} {yylval.str=strdup(yytext); return FLOAT;}
{For} {yylval.str=strdup(yytext); return FOR;}
{If} {yylval.str=strdup(yytext); return IF;}
{Instanceof} {yylval.str=strdup(yytext); return INSTANCEOF;}
{Int} {yylval.str=strdup(yytext); return INT;}
{Long} {yylval.str=strdup(yytext); return LONG;}
{New} {yylval.str=strdup(yytext); return NEW;}
{Package} {yylval.str=strdup(yytext); return PACKAGE;}
{Private} {yylval.str=strdup(yytext); return PRIVATE;}
{Public} {yylval.str=strdup(yytext); return PUBLIC;}
{Return} {yylval.str=strdup(yytext); return RETURN;}
{Short} {yylval.str=strdup(yytext); return SHORT;}
{Static} {yylval.str=strdup(yytext); return STATIC;}
{This} {yylval.str=strdup(yytext); return THIS;}
{Void} {yylval.str=strdup(yytext); return VOID;}
{While} {yylval.str=strdup(yytext); return WHILE;}


{EqualTo} {yylval.str=strdup(yytext); return '=';}
{GreaterThan} {yylval.str=strdup(yytext); return '>';}
{LessThan} {yylval.str=strdup(yytext); return '<';}
{Not} {yylval.str=strdup(yytext); return '!';}
{Tilda} {yylval.str=strdup(yytext); return '~';}
{QuestionMark} {yylval.str=strdup(yytext); return '?';}
{Colon} {yylval.str=strdup(yytext); return ':';}
{Arrow} {yylval.str=strdup(yytext); return PTR_OP;}
{EqualEqual} {yylval.str=strdup(yytext); return EQ_OP;}
{GreaterEqual} {yylval.str=strdup(yytext); return GE_OP;}
{LessEqual} {yylval.str=strdup(yytext); return LE_OP;}
{NotEqual} {yylval.str=strdup(yytext); return NE_OP;}
{Increment} {yylval.str=strdup(yytext); return INC_OP;}
{Decrement} {yylval.str=strdup(yytext); return DEC_OP;}
{Or} {yylval.str=strdup(yytext); return OR_OP;}
{And} {yylval.str=strdup(yytext); return AND_OP;}
{Add} {yylval.str=strdup(yytext); return '+';}
{Subtract} {yylval.str=strdup(yytext); return '-';}
{Multiply} {yylval.str=strdup(yytext); return '*';}
{Divide} {yylval.str=strdup(yytext); return '/';}
{BitwiseOr} {yylval.str=strdup(yytext); return '|';}
{BitwiseAnd} {yylval.str=strdup(yytext); return '&';}
{Power} {yylval.str=strdup(yytext); return '^';}
{Modulo} {yylval.str=strdup(yytext); return '%';}
{DoubleGR} {yylval.str=strdup(yytext); return RIGHT_OP;}
{DoubleLR} {yylval.str=strdup(yytext); return LEFT_OP;}
{TripleGR} {yylval.str=strdup(yytext); return UNSIGNED_RIGHT_OP;}
{PlusEQ} {yylval.str=strdup(yytext); return ADD_ASSIGN;}
{SubEQ} {yylval.str=strdup(yytext); return SUB_ASSIGN;}
{MultEq} {yylval.str=strdup(yytext); return MUL_ASSIGN;}
{AndEQ} {yylval.str=strdup(yytext); return AND_ASSIGN;}
{OrEQ} {yylval.str=strdup(yytext); return OR_ASSIGN;}
{PowEQ} {yylval.str=strdup(yytext); return XOR_ASSIGN;}
{DivEQ} {yylval.str=strdup(yytext); return DIV_ASSIGN;}
{ModEQ} {yylval.str=strdup(yytext); return MOD_ASSIGN;}
{DoubleGREQ} {yylval.str=strdup(yytext); return RIGHT_ASSIGN;}
{DoubleLREQ} {yylval.str=strdup(yytext); return LEFT_ASSIGN;}
{TripleGREQ} {yylval.str=strdup(yytext); return UNSIGNED_RIGHT_ASSIGN;}


{LeftCurlyBrace} {yylval.str=strdup(yytext); return '{';}
{RightCurlyBrace} {yylval.str=strdup(yytext); return '}';}
{LeftSquareBrace} {yylval.str=strdup(yytext); return '[';}
{RightSquareBrace} {yylval.str=strdup(yytext); return ']';}
{LeftSmallBrace} {yylval.str=strdup(yytext); return '(';}
{RightSmallBrace} {yylval.str=strdup(yytext); return ')';}
{Comma} {yylval.str=strdup(yytext); return ',';}
{DoubleColon} {yylval.str=strdup(yytext); return PROPORTION;}
{FullStop} {yylval.str=strdup(yytext); return '.';}
{SemiColon} {yylval.str=strdup(yytext); return ';';}



{Comment}				{ for(int i = 0; i<yyleng; ++i) if(yytext[i] == '\n') line++; /* comments, meant to be ignored */}

{IntegerLiteral} {yylval.ival=atoi(yytext); return INTEGERLITERAL;}
{FloatingPointLiteral} {yylval.str=strdup(yytext); return FLOATINGPOINTLITERAL;}
"true" {yylval.str=strdup(yytext); return TRUELITERAL;}
"false"	{yylval.str=strdup(yytext); return FALSELITERAL;}
null {yylval.str=strdup(yytext); return NULLLITERAL;} 
{CharacterLiteral} {yylval.str=strdup(yytext); return CHARACTERLITERAL;}

{StringLiteral}	{yylval.str=strdup(yytext); return STRINGLITERAL;}
{Identifier}			{yylval.str=strdup(yytext); return IDENTIFIER;}
.					{ cerr<<"Line:"<<line<<" :Error :: Illegal Character >>> "<<yytext<<"\n"; exit(-1); }


%%
int yywrap(){
    return 1;
}