%{
#include "cp.h"
#include "parser.tab.h"
void yyerror (char *s);
extern "C" int yylex();

#include <iostream>
#include <string>

using namespace std;

int error = 0;
long long int line = 1;
	
%}


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
TripleDot "..."
FullStop "."
SemiColon ";"




HexDigit                [0-9a-fA-F]

InputCharacterNotBackSlashNotDoubleQuote [^\n\r\\"]
InputCharacterNotBackSlashNotSingleQuote [^\n\r\\']


Comment					\/\/.*|\/\*([^\*]*(\*+[^\*\/]+)*)*\**\*\/

Literal					{IntegerLiteral}|{FloatingPointLiteral}|{BooleanLiteral}|{CharacterLiteral}|{NullLiteral}

IntegerLiteral 			{DecimalIntegerLiteral}|{HexIntegerLiteral}|{OctalIntegerLiteral}|{BinaryIntegerLiteral}
DecimalIntegerLiteral	{DecimalNumeral}({IntegerTypeSuffix})?
HexIntegerLiteral		{HexNumeral}({IntegerTypeSuffix})?
OctalIntegerLiteral		{OctalNumeral}({IntegerTypeSuffix})?
BinaryIntegerLiteral	{BinaryNumeral}({IntegerTypeSuffix})?
IntegerTypeSuffix		"l"|"L"

DecimalNumeral			0|{NonZeroDigit}({Digits})?|{NonZeroDigit}{Underscores}{Digits}
NonZeroDigit			[1-9]
Digits					{Digit}|{Digit}({DigitAndUnderscores})?{Digit}
DigitsForFloat			{NonZeroDigit}|{NonZeroDigit}({DigitAndUnderscores})?{Digit}
Digit 					0|{NonZeroDigit}
DigitAndUnderscores		({DigitOrUnderscores})+
DigitOrUnderscores		{Digit}|"_"
Underscores 			[_]+

HexNumeral				("0x"|"0X"){HexDigits}
HexDigits				{HexDigit}|{HexDigit}({HexDigitAndUnderscores})?{HexDigit}
HexDigitAndUnderscores 	({HexDigitOrUnderscores})+
HexDigitOrUnderscores	{HexDigit}|"_"

OctalNumeral			0{OctalDigits}|0{Underscores}{OctalDigits}
OctalDigits				{OctalDigit}|{OctalDigit}({OctalDigitAndUnderscores})?{OctalDigit}
OctalDigit 				[0-7]
OctalDigitAndUnderscores ({OctalDigitOrUnderscores})+
OctalDigitOrUnderscores	OctalDigit|"_"

BinaryNumeral 			("0b"|"0B"){BinaryDigits}
BinaryDigits			{BinaryDigit}|{BinaryDigit}({BinaryDigitAndUnderscores})?{BinaryDigit}
BinaryDigit 			[01]
BinaryDigitAndUnderscores ({BinaryDigitOrUnderscores})+
BinaryDigitOrUnderscores {BinaryDigit}|"_"

FloatingPointLiteral	{DecimalFloatingPointLiteral}|{HexadecimalFloatingPointLiteral}
DecimalFloatingPointLiteral	{Digits}"."({Digits})?({ExponentPart})?({FloatTypeSuffix})?|"."{Digits}({ExponentPart})?({FloatTypeSuffix})?|{Digits}{ExponentPart}({FloatTypeSuffix})?|{DigitsForFloat}({ExponentPart})?{FloatTypeSuffix}
ExponentPart			{ExponentIndicator}{SignedInteger}
ExponentIndicator		"e"|"E"
SignedInteger			({Sign})?{Digits}
Sign 					"+"|"-"
FloatTypeSuffix			"f"|"F"|"d"|"D"

HexadecimalFloatingPointLiteral	{HexSignificand}{BinaryExponent}({FloatTypeSuffix})?
HexSignificand			{HexNumeral}[.]?|("0x"|"0X")({HexDigits})?"."{HexDigits}
BinaryExponent			{BinaryExponentIndicator}{SignedInteger}
BinaryExponentIndicator	"p"|"P"

BooleanLiteral			"true"|"false"

CharacterLiteral		('[^'\\\n]'|'{EscapeSequence}')

StringLiteral			\"([^\"\\\n]|{EscapeSequence})*\"

EscapeSequence			(\\)[btnfr]|{OctalEscape}|"\\\\"|"\\\""|"\\'"
OctalEscape				(\\)({OctalDigit}|{OctalDigit}{OctalDigit}|{ZeroToThree}{OctalDigit}{OctalDigit})
ZeroToThree				[0-3]

NullLiteral				null



Identifier				[a-zA-Z_$][a-zA-Z_0-9$]*




%%

[ \t\r\f\b]+ 			;
[\n\r]					;


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
{TripleDot} {yylval.str=strdup(yytext); return ELLIPSIS;}
{FullStop} {yylval.str=strdup(yytext); return '.';}
{SemiColon} {yylval.str=strdup(yytext); return ';';}



{Comment}				{ for(int i = 0; i<yyleng; ++i) if(yytext[i] == '\n') line++; /* comments, meant to be ignored */}
{Literal}				{yylval.str=strdup(yytext); return LITERAL;}
{StringLiteral}	{yylval.str=strdup(yytext); return STRINGLITERAL;}
{Identifier}			{yylval.str=strdup(yytext); return IDENTIFIER;}
.					{ cerr<<line<<": error :: Illegal Character >>> "<<yytext<<"\n"; exit(-1); }


%%
int yywrap(){
    return 1;
}