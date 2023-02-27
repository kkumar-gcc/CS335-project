%{

#include <iostream>
#include <string>
#include <vector>
#include "cp.h"
using namespace std;

#define YYERROR_VERBOSE

void yyerror (const char *s);
extern "C" int yylex();
extern long long int line;

Node *root = NULL;

Node *createNode(string label, string value, vector <Node *> children) {

    Node *newNode = new Node();
    newNode->label = label;
    newNode->value = value;
    newNode->children = children;
    return newNode;
}
%}

%union{
    char *str;
    Node *node;
}

%start CompilationUnit

%token <str> CONTINUE FOR
%token <str> IF PACKAGE
%token <str> BOOLEAN PRIVATE THIS
%token <str> BREAK DOUBLE
%token <str> BYTE ELSE PUBLIC
%token <str> RETURN
%token <str> INT SHORT
%token <str> CHAR FINAL STATIC VOID
%token <str> CLASS LONG
%token <str> CONST FLOAT WHILE

%token <str> LITERAL IDENTIFIER


%right <str> '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN UNSIGNED_RIGHT_ASSIGN
%right <str> '?' ':'
%left  <str> OR_OP
%left  <str> AND_OP
%left  <str> '|'
%left  <str> '^'
%left  <str> '&'
%left  <str> NE_OP EQ_OP
%nonassoc <str> '<' '>' GE_OP LE_OP INSTANCEOF
%left  <str> LEFT_OP RIGHT_OP UNSIGNED_RIGHT_OP
%left  <str> '+' '-'
%left  <str> '*' '/' '%'
%right <str> NEW
%right <str> INC_OP DEC_OP '!' '~'

%right <str> '(' ')' '{' '}' '[' ']' '.' ',' ';' ELLIPSIS PROPORTION PTR_OP

%type <node> CompilationUnit PackageDeclaration
%type <node> TypeDeclaration TypeName Type PrimitiveType NumericType IntegralType FloatingPointType
%type <node> ReferenceType ArrayType Dims ArrayInitializer VariableInitializerList ClassDeclaration
%type <node> NormalClassDeclaration ClassModifier
%type <node> ClassBody ClassMemberDeclaration ClassBodyDeclaration FieldDeclaration VariableDeclaratorList
%type <node> VariableDeclarator VariableDeclaratorId VariableInitializer MethodDeclaration MethodHeader
%type <node> MethodDeclarator FormalParameterList FormalParameters FormalParameter LastFormalParameter
%type <node> ReceiverParameter MethodBody
%type <node> StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type <node> ExplicitConstructorInvocation
%type <node> Block
%type <node> BlockStatements BlockStatement LocalVariableDeclarationStatement LocalVariableDeclaration
%type <node> Statement StatementNoShortIf StatementWithoutTrailingSubstatement EmptyStatement LabeledStatement
%type <node> LabeledStatementNoShortIf ExpressionStatement StatementExpression IfThenStatement IfThenElseStatement
%type <node> IfThenElseStatementNoShortIf
%type <node> WhileStatement WhileStatementNoShortIf ForStatement ForStatementNoShortIf
%type <node> BasicForStatement SINGLE_ForInit SINGLE_Expression SINGLE_ForUpdate BasicForStatementNoShortIf ForInit 
%type <node> ForUpdate StatementExpressionList EnhancedForStatement EnhancedForStatementNoShortIf BreakStatement
%type <node> ContinueStatement ReturnStatement
%type <node> Primary PrimaryNoNewArray ClassLiteral ClassInstanceCreationExpression
%type <node> UnqualifiedClassInstanceCreationExpression FieldAccess ArrayAccess
%type <node> MethodInvocation ArgumentList MethodReference ArrayCreationExpression
%type <node> DimExprs DimExpr Expression
%type <node> AssignmentExpression Assignment LeftHandSide
%type <node> AssignmentOperator ConditionalExpression ConditionalOrExpression
%type <node> ConditionalAndExpression InclusiveOrExpression ExclusiveOrExpression
%type <node> AndExpression EqualityExpression RelationalExpression ShiftExpression
%type <node> AdditiveExpression MultiplicativeExpression UnaryExpression PreIncrementExpression
%type <node> PreDecrementExpression UnaryExpressionNotPlusMinus PostfixExpression
%type <node> PostIncrementExpression PostDecrementExpression CastExpression
%type <node> MULTI_TypeDeclaration
%type <node> MULTI_ClassModifier MULTI_ClassBodyDeclaration SINGLE_ArgumentList

%%
CompilationUnit : 
         PackageDeclaration MULTI_TypeDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,$2,temp});}
         | MULTI_TypeDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
         | PackageDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
         |         {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
         ;
PackageDeclaration :
          PACKAGE TypeName ';' { Node *temp1=createNode("PACKAGE",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("PackageDeclaration","",{temp1,$2,temp3}); }
          ;
MULTI_TypeDeclaration :
       TypeDeclaration  {$$=createNode("multiTypeDeclaration","",{$1});}
       | MULTI_TypeDeclaration TypeDeclaration { $$=$1; $$->children.push_back($2);}
      ;
TypeDeclaration :
      ClassDeclaration {$$ = $1;}
      | ';' {$$=createNode("Separator",$1,{});}
      ;
/* production 6 */
TypeName : IDENTIFIER                  { $$ = createNode("Identifier",$1, {}); }
           | TypeName '.' IDENTIFIER   { Node* l = createNode("Identifier", $3, {}); Node* temp = createNode("Separator", $2, {}); $1->children.push_back(l); $1->children.push_back(temp); $$ = $1; }
           ;

/*production 4 */

Type
    : PrimitiveType             { $$ = $1; }
    | ReferenceType             { $$ = $1; }
    // | ArrayType                 { $$ = $1; }
    ;

PrimitiveType
    : NumericType               { $$ = $1; }
    | BOOLEAN                   { $$ = createNode("Keyword", $1, {} ); }
    ;

NumericType
    : IntegralType              { $$ = $1; }
    | FloatingPointType         { $$ = $1; }
    ;

IntegralType
    : BYTE                      { $$ = createNode("Keyword", $1, {} ); }
    | SHORT                     { $$ = createNode("Keyword", $1, {} ); }
    | INT                       { $$ = createNode("Keyword", $1, {} ); }
    | LONG                      { $$ = createNode("Keyword", $1, {} ); }
    | CHAR                      { $$ = createNode("Keyword", $1, {} ); }
    ;

FloatingPointType
    : FLOAT                     { $$ = createNode("Keyword", $1, {} ); }
    | DOUBLE                    { $$ = createNode("Keyword", $1, {} ); }
    ;

ReferenceType 
   : TypeName   { $$ = $1; }
   | ArrayType  { $$ = $1; }
   ;
ArrayType :
     PrimitiveType Dims { $$ = createNode("ArrayType","",{$1,$2});}
     | TypeName Dims { $$ = createNode("ArrayType","",{$1,$2});}
     ;
Dims :
    Dims '[' ']'  { $$ = $1;Node *temp1 = createNode("Separator",$2,{});Node *temp3 = createNode("Separator",$3,{}); $$->children.push_back(temp1);$$->children.push_back(temp3);}
   | '[' ']'       {Node *temp1 = createNode("Separator",$1,{}); Node *temp3 = createNode("Separator",$2,{});  ;$$ = createNode("DIMS","",{temp1,temp3}); } 
   ;
/* PRODUCTION #10 (Arrays) ----------------------------------------------- */

ArrayInitializer
    : '{' VariableInitializerList ',' '}'                  { Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{});Node *temp4=createNode("Separator",$4,{}); $$=createNode("ArrayInitializer","",{temp1,$2,temp3,temp4}); }
    | '{' VariableInitializerList '}'                      { Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("ArrayInitializer","",{temp1,$2,temp3}); }
    | '{' ',' '}'                                           { Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$3,{}); $$=createNode("ArrayInitializer","",{temp1,temp3,temp4}); }
    | '{' '}'                                              { Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{});$$ = createNode("ArrayInitializer_EMP", "", {temp1,temp2}); }
    ;

VariableInitializerList
    : VariableInitializer                                  { $$ = createNode("VariableInitializerList", "", {$1}); }  
    | VariableInitializerList ',' VariableInitializer      { $$ = $1; $$->children.push_back($3);Node *temp1=createNode("Separator",$2,{});$$->children.push_back(temp1); }
    ;

/* PRODUCTION #8(classes) */


ClassDeclaration :
     NormalClassDeclaration  { $$ = $1; }
     ;
   
NormalClassDeclaration 
     : MULTI_ClassModifier CLASS IDENTIFIER ClassBody  {Node *temp2=createNode("Keyword",$2,{});Node *temp3=createNode("Identifier",$3,{});$$=createNode("normalClassDeclaration","",{$1,temp2,temp3,$4});}
     | CLASS IDENTIFIER ClassBody {Node *temp1=createNode("Keyword",$1,{});Node *temp2=createNode("Identifier",$2,{});$$=createNode("normalClassDeclaration","",{temp1,temp2,$3});}  
     ;

ClassBody 
     : '{' MULTI_ClassBodyDeclaration '}'  {Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("classBody","",{temp1,$2,temp3});} 
     | '{' '}'   {Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{}); Node *temp3=createNode("fieldDeclaration","",{});$$=createNode("classBody","",{temp1,temp2});}
     ;
MULTI_ClassBodyDeclaration 
     : ClassBodyDeclaration {$$=createNode("multiClassBodyDeclaration","",{$1});}
     | MULTI_ClassBodyDeclaration ClassBodyDeclaration { $$=$1; $$->children.push_back($2);}
     ;
ClassBodyDeclaration 
     : ClassMemberDeclaration   { $$ = $1; }
     | StaticInitializer         { $$ = $1; }
     | ConstructorDeclaration    { $$ = $1; }
     ;

ClassMemberDeclaration 
     : FieldDeclaration   { $$ = $1; }
     | MethodDeclaration   { $$ = $1; }
     | ClassDeclaration    { $$ = $1; }
     | ';' {$$=createNode("Separator",$1,{});}
     ;



FieldDeclaration
    : MULTI_ClassModifier Type VariableDeclaratorList ';' {Node * temp4 =createNode("Separator",$4,{});$$=createNode("fieldDeclaration","",{$1,$2,$3,temp4});}
    | Type VariableDeclaratorList ';' {Node * temp3 =createNode("Separator",$3,{});$$=createNode("fieldDeclaration","",{$1,$2,temp3});}
    ;
MULTI_ClassModifier 
    : ClassModifier {$$=createNode("multiTypeDeclaration","",{$1});}
    | MULTI_ClassModifier ClassModifier  {$$=$1; $1->children.push_back($2);}
    ;
ClassModifier 
    : PUBLIC { $$ = createNode("Keyword", $1, {} ); }
    | PRIVATE { $$ = createNode("Keyword", $1, {} ); }
    | STATIC {$$ = createNode("Keyword", $1, {} ); }
    ;
VariableDeclaratorList 
    : VariableDeclaratorList ',' VariableDeclarator  {$$ = $1;$$->children.push_back($3);Node * temp2 = createNode("Separator",$2,{}); $$->children.push_back(temp2); }
    | VariableDeclarator {$$=$1;}
    ;

VariableDeclarator 
    : VariableDeclaratorId '=' VariableInitializer {Node * temp2 = createNode("=","",{});$$=createNode("VariableDeclarator","",{$1,temp2,$3});} 
    | VariableDeclaratorId {$$=$1;}
    ;   
VariableDeclaratorId 
    : IDENTIFIER Dims {Node * temp2 = createNode("Identifier",$1,{}); $$=createNode("VariableDeclaratorId","",{temp2,$2});} 
    | IDENTIFIER  {$$=createNode("Identifier",$1,{});}
    ;

VariableInitializer
   : Expression { $$=$1;}
   | ArrayInitializer { $$=$1;}
   ;


MethodDeclaration
    : MULTI_ClassModifier MethodHeader MethodBody     {$$=createNode("MethodDeclaration","",{$1,$2,$3}); }     
    | MethodHeader MethodBody                       {$$=createNode("MethodDeclaration","",{$1,$2}); }     
    ;

MethodHeader
    : Type MethodDeclarator                  {$$=createNode("MethodHeader","",{$1,$2}); }   
    | VOID MethodDeclarator                  { Node *temp = createNode("TYPE", $1, {}); $$ = createNode("MethodHeader","",{temp,$2}); }
    ;

MethodDeclarator
    : IDENTIFIER '(' FormalParameterList ')'         { Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4}); }
    | IDENTIFIER '(' ')'                             { Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$3,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,temp4}); }
    | IDENTIFIER '(' FormalParameterList ')' Dims    { Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4,$5}); }
    | IDENTIFIER '(' ')' Dims                        { Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$3,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$4,temp4}); }
    ;

FormalParameterList
    : ReceiverParameter                              { $$ = createNode("Parameters", "", {$1}); }
    | FormalParameters ',' LastFormalParameter       { Node *temp2=createNode("Separator",$2,{}); $$=createNode("FormalParameterList","",{$1,temp2,$3}); }
    | LastFormalParameter                            { $$ = createNode("Parameters", "", {$1}); }
    ;

FormalParameters
    : FormalParameters ',' FormalParameter           { $$ = $1; $$->children.push_back($3);Node *temp=createNode("Separator",$2,{}); $$->children.push_back(temp); }
    | FormalParameter                                { $$ = createNode("Parameters", "", {$1}); }
    | ReceiverParameter                              { $$ = createNode("Parameters", "", {$1}); }
    ;

FormalParameter
    : FINAL Type VariableDeclaratorId               { Node *temp = createNode("MODIFIER", $1, {}); $$ = createNode("FormalParameter", "", {temp, $2, $3}); }
    | Type VariableDeclaratorId                     { $$ = createNode("FormalParameter", "", {$1, $2}); }
    ;

LastFormalParameter
    : FormalParameter                               { $$ = $1; }
    ;

ReceiverParameter
    : Type THIS                                     { Node *n1 = createNode("THIS", $2, {}); $$ = createNode("ReceiverParameter", "", {$1, n1}); }
    | Type IDENTIFIER '.' THIS                      { Node *n1 = createNode("THIS", $4, {}); Node *n3 = createNode("Separator", $3, {}); Node *n2 = createNode("Identifier", $2, {}); $$ = createNode("ReceiverParameter", "", {$1, n2, n1,n3}); }
    ;

MethodBody
    : Block                                         {$$ = $1; }
    | ';'                                           {$$ = createNode("EMP", "", {}); }
    ;
StaticInitializer
    : STATIC Block                                  { Node * n1 = createNode("KEYWORD", $1, {});$$ = createNode("StaticInitializer","", {n1,$2}); } 
    ;

ConstructorDeclaration
    : MULTI_ClassModifier ConstructorDeclarator ConstructorBody            { $$ = $2; $$->children.push_back($1); $$->children.push_back($3);  }
    | ConstructorDeclarator ConstructorBody                                { $$ = $1; $$->children.push_back($2); }
    ;

ConstructorDeclarator
    : IDENTIFIER '(' FormalParameterList ')'                                { Node *n1 = createNode("Identifier", $1, {});Node *n2= createNode("Separator", $2, {});Node *n3= createNode("Separator", $4, {});$$ = createNode("ConstructorDeclarator","",{n1,n2,n3,$3}); }
    | IDENTIFIER '(' ')'                                                   { Node *n3 = createNode("Identifier", $1, {});Node *n1 = createNode("Separator", $2, {});Node *n2 = createNode("Separator", $3, {});$$ = createNode("ConstructorDeclarator","",{n1,n2,n3}); }
    ;

ConstructorBody
    : '{' ExplicitConstructorInvocation BlockStatements '}'                { Node *n1 = createNode("Separator", $1, {});Node *n4= createNode("Separator", $4, {});$$ = createNode("ConstructorBody","",{n1,n4,$2,$3}); }
    | '{' BlockStatements '}'                                              { Node *n1 = createNode("Separator", $1, {});Node *n4= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,n4,$2}); }
    | '{' ExplicitConstructorInvocation '}'                                { Node *n1 = createNode("Separator", $1, {});Node *n3= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,n3,$2}); }
    // | '{' '}'                                                              { Node *n1 = createNode("Separator", $1, {});Node *n2= createNode("Separator", $2, {});$$ = createNode("ConstructorBody","",{$1,$2}); }
    ;

ExplicitConstructorInvocation
    : THIS SINGLE_ArgumentList                                             { Node * n1 = createNode("KEYWORD", $1, {});$$ = createNode("ExplicitConstructorInvocation","", {n1,$2}); }
    ;

SINGLE_ArgumentList
    : '(' ')' ';'                                      { Node *n1 = createNode("Separator", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n3 = createNode("Separator", $3, {});$$ = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
    | '(' ArgumentList ')' ';'                         { Node *n1 = createNode("Separator", $1, {});Node *n2 = createNode("Separator", $3, {});Node *n3 = createNode("Separator", $4, {});$$ = createNode("SINGLE_ArgumentList","",{n1,n2,n3,$2});  }
    ;


/* PRODUCTION #14(block statements) */

Block
    : '{' BlockStatements '}'                { Node *n1 = createNode("Separator", $1, {});Node *n4= createNode("Separator", $3, {});$$ = createNode("Block","",{n1,n4,$2}); }
    // | '{' '}'                                 { Node *n1 = createNode("Separator", $1, {});Node *n2= createNode("Separator", $2, {});$$ = createNode("Block","",{$1,$2}); }
    ;

BlockStatements
    : BlockStatement                         { $$ = createNode("BlockStatements", "", {$1}); }
    | BlockStatements BlockStatement         { $$ = $1; $$->children.push_back($2); }
    ;

BlockStatement
    : LocalVariableDeclarationStatement      { $$ = $1; }
    | ClassDeclaration                       { $$ = $1; }
    | Statement                              { $$ = $1; }
    ;

LocalVariableDeclarationStatement
    : LocalVariableDeclaration ';'           { Node *n1 = createNode("Separator", $2, {});$$ = createNode("LocalVariableDeclarationStatement","",{n1,$1}); }
    ;

LocalVariableDeclaration
    : Type VariableDeclaratorList            { $$ = createNode("LocalVariableDeclaration", "", {$1, $2}); }
    ;

Statement
    : StatementWithoutTrailingSubstatement   { $$ = $1; }
    | LabeledStatement                       { $$ = $1; }
    | IfThenStatement                        { $$ = $1; }
    | IfThenElseStatement                    { $$ = $1; }
    | WhileStatement                         { $$ = $1; }
    | ForStatement                           { $$ = $1; }
    ;

StatementNoShortIf
    : StatementWithoutTrailingSubstatement   { $$ = $1; }
    | LabeledStatementNoShortIf              { $$ = $1; }
    | IfThenElseStatementNoShortIf           { $$ = $1; }
    | WhileStatementNoShortIf                { $$ = $1; }
    | ForStatementNoShortIf                  { $$ = $1; }
    ;

StatementWithoutTrailingSubstatement
    : Block                                  { $$ = $1; }
    | EmptyStatement                         { $$ = $1; }
    | ExpressionStatement                    { $$ = $1; }
    | BreakStatement                         { $$ = $1; }
    | ContinueStatement                      { $$ = $1; }
    | ReturnStatement                        { $$ = $1; }
    ;

EmptyStatement
    : ';'                                    { $$ = createNode("Separator", $1, {}); }
    ;

LabeledStatement
    : IDENTIFIER ':' Statement               {  Node *n1 = createNode("Identifier", $1, {});Node *n2 = createNode("Separator", $2, {}); $$ = createNode("LabeledStatement","", {n1,n2,$3});}
    ;

LabeledStatementNoShortIf
    : IDENTIFIER ':' StatementNoShortIf       { Node *n1 = createNode("Identifier", $1, {});Node *n2 = createNode("Separator", $2, {}); $$ = createNode("LabeledStatementNoShortIf","", {n1,n2,$3}); }
    ;

ExpressionStatement
    : StatementExpression ';'                 { Node *n1 = createNode("Separator", $2, {});$$ = createNode("ExpressionStatement","",{n1,$1}); }
    ;

StatementExpression
    : Assignment                             { $$ = $1; }
    | PreIncrementExpression                 { $$ = $1; }
    | PreDecrementExpression                 { $$ = $1; }
    | PostIncrementExpression                { $$ = $1; }
    | PostDecrementExpression                { $$ = $1; }
    | MethodInvocation                       { $$ = $1; }
    | ClassInstanceCreationExpression        { $$ = $1; }
    ;

IfThenStatement
    : IF '(' Expression ')' Statement     { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n3 = createNode("Separator", $4, {}); $$=createNode("IfThenStatement","",{n1,n2,n3,$3,$5});}                           
    ;

IfThenElseStatement
    : IF '(' Expression ')' StatementNoShortIf ELSE Statement  { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n3 = createNode("Separator", $4, {}); Node *n4 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenELseStatement","",{n1,n2,n3,n4,$3,$5,$7});}      
    ;

IfThenElseStatementNoShortIf
    : IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf    { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n3 = createNode("Separator", $4, {}); Node *n4 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenElseStatementNoShortIf","",{n1,n2,n3,n4,$3,$5,$7});}    
    ;

WhileStatement
    : WHILE '(' Expression ')' Statement        {Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n3 = createNode("Separator", $4, {}); $$=createNode("WhileStatement","",{n1,n2,n3,$3,$5});}                              
    ;

WhileStatementNoShortIf
    : WHILE '(' Expression ')' StatementNoShortIf                {Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n3 = createNode("Separator", $4, {}); $$=createNode("WhileStatementNoShortIf","",{n1,n2,n3,$3,$5});}                 
    ;

ForStatement                                                                
    : BasicForStatement                          {$$=$1;}
    | EnhancedForStatement                       {$$=$1;}
    ;

ForStatementNoShortIf
    : BasicForStatementNoShortIf                 {$$=$1;}
    | EnhancedForStatementNoShortIf              {$$=$1;}
    ;

BasicForStatement
    : FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' Statement   { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n4 = createNode("Separator", $4, {});Node *n6 = createNode("Separator", $6, {});Node *n8 = createNode("Separator", $8, {}); $$=createNode("BasicForStatement","",{n1,n2,n4,n6,n8,$3,$5,$7,$9}); }
    ;

SINGLE_ForInit
    : /* Empty */          {$$=createNode("SINGLE_ForInit","",{});}
    | ForInit              {$$=$1;}
    ;

SINGLE_Expression
    : /* Empty */          {$$=createNode("SINGLE_Expression","",{});}
    | Expression           {$$=$1;}
    ;

SINGLE_ForUpdate
    : /* Empty */          {$$=createNode("SINGLE_ForUpdate","",{});}
    | ForUpdate            {$$=$1;}
    ;

BasicForStatementNoShortIf
    : FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' StatementNoShortIf    {Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n4 = createNode("Separator", $4, {});Node *n6 = createNode("Separator", $6, {});Node *n8 = createNode("Separator", $8, {});  $$=createNode("BasicForStatementNoShortIf","",{n1,n2,n4,n6,n8,$3,$5,$7,$9}); }
    ;

ForInit
    : StatementExpressionList          {$$=$1;}
    | LocalVariableDeclaration         {$$=$1;}
    ;

ForUpdate
    : StatementExpressionList          {$$=$1;}
    ;

StatementExpressionList
    : StatementExpression                               {$$=createNode("StatementExpressionList", "", {$1});}
    | StatementExpressionList ',' StatementExpression   {$$ = $1; $$->children.push_back($3);Node *temp1=createNode("Separator",$2,{});$$->children.push_back(temp1);}
    ;

EnhancedForStatement
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement          { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n5 = createNode("Separator", $5, {});Node *n7 = createNode("Separator", $7, {}); $$=createNode("EnhancedForStatement","",{n1,n2,$4,n5,n7,$3,$6,$8}); }
    ;

EnhancedForStatementNoShortIf
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf       { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n5 = createNode("Separator", $5, {});Node *n7 = createNode("Separator", $7, {});  $$=createNode("EnhancedForStatementNoShortIf","",{n1,n2,$4,n5,n7,$3,$6,$8});}
    ;

BreakStatement
    : BREAK IDENTIFIER ';'        {Node* n1=createNode("Keyword",$1,{});Node* n2=createNode("Identifier",$2,{});Node* n3=createNode("Separator",$3,{});$$=createNode("BreakStatement","",{n1,n2,n3});}
    | BREAK ';'                   {Node* n1=createNode("Keyword",$1,{}); Node* n2=createNode("Separator",$2,{});$$=createNode("BreakStatement","",{n1,n2});}
    ;

ContinueStatement
    : CONTINUE IDENTIFIER ';'     {Node* n1=createNode("Keyword",$1,{});Node* n2=createNode("Identifier",$2,{});Node* n3=createNode("Separator",$3,{});$$=createNode("ContinueStatement","",{n1,n2,n3});}
    | CONTINUE ';'                {Node* n1=createNode("Keyword",$1,{}); Node* n2=createNode("Separator",$2,{});$$=createNode("ContinueStatement","",{n1,n2});}
    ;

ReturnStatement
    : RETURN Expression ';'       {Node* n1=createNode("Keyword",$1,{});Node* n3=createNode("Separator",$3,{});$$=createNode("BreakStatement","",{n1,$2,n3});}
    | RETURN ';'                  {Node* n1=createNode("Keyword",$1,{}); Node* n2=createNode("Separator",$2,{});$$=createNode("BreakStatement","",{n1,n2});}
    ;



/* PRODUCTION # 15 ( Expressions ) */

Primary
    : PrimaryNoNewArray                                                             {$$=$1;}
    | ArrayCreationExpression                                                       {$$=$1;}
    ;

PrimaryNoNewArray
    : LITERAL                                                                       {$$=createNode("LITERAL",$1,{});}
    | ClassLiteral                                                                  {$$=$1;}
    | THIS                                                                          {$$=createNode("KEYWORD",$1,{});}
    | TypeName '.' THIS                                                             {Node *temp = createNode("KEYWORD",$3,{});Node *temp1 = createNode("Separator",$2,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$1,temp,temp1});}                                                             
    | '(' Expression ')'                                                            {Node *temp = createNode("Separator",$3,{});Node *temp1 = createNode("Separator",$1,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$2,temp,temp1});}     
    | ClassInstanceCreationExpression                                               {$$=$1;}
    | FieldAccess                                                                   {$$=$1;}
    | ArrayAccess                                                                   {$$=$1;}
    | MethodInvocation                                                              {$$=$1;}
    | MethodReference                                                               {$$=$1;}
    ;

ClassLiteral
    : TypeName Dims '.' CLASS                                                       {Node *temp = createNode("KEYWORD",$4,{});Node *temp1 = createNode("Separator",$3,{});
                                                                                      $$ = createNode("CLASS_LITERAL","",{$1,$2,temp,temp1});}
    | TypeName '.' CLASS                                                            {Node *temp = createNode("KEYWORD",$3,{});Node *temp1 = createNode("Separator",$2,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp,temp1});}
    | PrimitiveType Dims '.' CLASS                                                  {Node *temp = createNode("KEYWORD",$4,{});Node *temp1 = createNode("Separator",$3,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,$2,temp,temp1});}
    | PrimitiveType '.' CLASS                                                   {Node *temp = createNode("KEYWORD",$3,{});Node *temp1 = createNode("Separator",$2,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp,temp1});}
    | VOID '.' CLASS                                                                {Node *temp = createNode("KEYWORD",$3,{});Node *temp2= createNode("Separator",$2,{});
                                                                                     Node *temp1 = createNode("KEYWORD",$1,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
    ;

ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression                                         {$$=$1;}
    | TypeName '.' UnqualifiedClassInstanceCreationExpression                {Node *temp1 = createNode("Separator",$2,{});$$=createNode("CLASS_INSTANCE","",{$1,$3,temp1});}
    | Primary '.' UnqualifiedClassInstanceCreationExpression                             {Node *temp1 = createNode("Separator",$2,{});$$=createNode("CLASS_INSTANCE","",{$1,$3,temp1});}
    ;

UnqualifiedClassInstanceCreationExpression
    : NEW TypeName '(' ArgumentList ')'                                                 {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        Node *temp1 = createNode("Separator",$3,{});Node *temp2 = createNode("Separator",$5,{});$$ = createNode("unqualifiedClassInstance","",{temp,$2,$4,temp1,temp2});}
    | NEW TypeName '(' ArgumentList ')' ClassBody                                       {Node *temp = createNode("KEYWORD",$1,{});Node *temp1 = createNode("Separator",$3,{});Node *temp2= createNode("Separator",$5,{});
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,$4,$6,temp1,temp2});}
    | NEW TypeName '(' ')' ClassBody                                                    {Node *temp = createNode("KEYWORD",$1,{});Node *temp1 = createNode("Separator",$3,{});Node *temp2 = createNode("Separator",$4,{});
                            
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,temp1,$5,temp2});}
    | NEW TypeName '(' ')'                                                              {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        Node *temp1 = createNode("Separator",$3,{});Node *temp2 = createNode("Separator",$4,{});
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,temp1,temp2});}
    

FieldAccess
    : Primary '.' IDENTIFIER                                                           {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("Separator",$2,{});
                                                                                        $$ = createNode("FIELDACC","",{$1,temp,temp1});}
    ;

ArrayAccess
    : TypeName '[' Expression ']'                          {Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,$3,temp1,temp2});}
    | PrimaryNoNewArray '[' Expression ']'                                             {Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,$3,temp1,temp2});}
    ;

MethodInvocation
    : IDENTIFIER '(' ArgumentList ')'                                                  {Node *temp = createNode("Identifier",$1,{});Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});
                                                                                        $$=createNode("METHODINVOCATION","",{temp,$3,temp1,temp2});}
    | IDENTIFIER '(' ')'                                                               {Node *temp = createNode("Identifier",$1,{});Node *temp3 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$3,{});
                                                                                       
                                                                                        $$=createNode("METHODINVOCATION","",{temp,temp2,temp3});}
    | TypeName '.' IDENTIFIER '(' ArgumentList ')'
                                                                                       {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});Node *temp3 = createNode("Separator",$6,{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,$5,temp1,temp2,temp3});}
    | TypeName '.' IDENTIFIER '(' ')'
                                                                                        {Node *temp = createNode("Identifier",$3,{});Node *temp3= createNode("Separator",$2,{});Node *temp4= createNode("Separator",$4,{});Node *temp5 = createNode("Separator",$5,{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,$1,temp5});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,temp1,temp3,temp4});}
    | Primary '.' IDENTIFIER '(' ArgumentList ')'                                        {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});Node *temp3 = createNode("Separator",$6,{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,$5,temp1,temp2,temp3});}
    | Primary '.' IDENTIFIER '(' ')'                                                    {Node *temp = createNode("Identifier",$3,{});Node *temp3= createNode("Separator",$2,{});Node *temp4= createNode("Separator",$4,{});Node *temp5 = createNode("Separator",$5,{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,temp5,$1});}
   ;

ArgumentList
    : ArgumentList ',' Expression                                                      {Node *temp = createNode("Separator",$2,{}); $1->children.push_back($3); $1->children.push_back(temp);$$ = $1;}
    | Expression                                                                       {$$ = createNode("ARGLIST","", {$1}); }
    ;

MethodReference
   : TypeName PROPORTION IDENTIFIER          {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | ArrayType PROPORTION IDENTIFIER                                                    {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | Primary PROPORTION IDENTIFIER                                                      {Node *temp = createNode("Identifier",$3,{});Node *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   |  TypeName PROPORTION NEW                                     {Node *temp = createNode("KEYWORD",$3,{});Node *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | ArrayType PROPORTION NEW                                                           {Node *temp = createNode("KEYWORD",$3,{});Node *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   ;

ArrayCreationExpression
   : NEW PrimitiveType DimExprs Dims                                                    {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW PrimitiveType DimExprs                                                         {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});}                                      
   | NEW TypeName DimExprs Dims                                  {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW TypeName DimExprs                                       {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});}
   | NEW PrimitiveType Dims ArrayInitializer                                            {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW TypeName Dims ArrayInitializer                          {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   ;

DimExprs
   : DimExpr                                                                            {$$ = createNode("DIMEXPR","", {$1}); }
   | DimExprs DimExpr                                                                   {$1->children.push_back($2); $$ = $1; }
   ;

DimExpr
   : '[' Expression ']'                                                                 {Node *temp2=createNode("Separator",$1,{});Node *temp1=createNode("Separator",$3,{});$$ = createNode("DimExpr","", {temp1,temp2,$2});}
   ;

Expression
   : AssignmentExpression                                                               {$$=$1;}
   ;

AssignmentExpression
   : ConditionalExpression                                                              {$$=$1;}                    
   | Assignment                                                                         {$$=$1;}
   ;

Assignment
   : LeftHandSide AssignmentOperator Expression                                         {$2->children={$1,$3};$$=$2;}
   | TypeName AssignmentOperator Expression                 {$2->children={$1,$3};$$=$2;}
   ;

LeftHandSide
   : FieldAccess                                                                        {$$=$1;}
   | ArrayAccess                                                                        {$$=$1;}
   ;

AssignmentOperator
   : '='                                                                                {$$=createNode("operator",$1,{});}
   | MUL_ASSIGN                                                                         {$$=createNode("operator",$1,{});}
   | DIV_ASSIGN                                                                         {$$=createNode("operator",$1,{});}
   | MOD_ASSIGN                                                                         {$$=createNode("operator",$1,{});}
   | ADD_ASSIGN                                                                         {$$=createNode("operator",$1,{});}                                                                               
   | SUB_ASSIGN                                                                         {$$=createNode("operator",$1,{});}
   | LEFT_ASSIGN                                                                        {$$=createNode("operator",$1,{});}
   | RIGHT_ASSIGN                                                                       {$$=createNode("operator",$1,{});}
   | UNSIGNED_RIGHT_ASSIGN                                                              {$$=createNode("operator",$1,{});}
   | AND_ASSIGN                                                                         {$$=createNode("operator",$1,{});}  
   | XOR_ASSIGN                                                                         {$$=createNode("operator",$1,{});}
   | OR_ASSIGN                                                                          {$$=createNode("operator",$1,{});}
   ;

ConditionalExpression
   : ConditionalOrExpression                                                            {$$=$1;}
   | ConditionalOrExpression '?' Expression ':' ConditionalExpression                   {Node *temp1=createNode("Separator",$2,{});Node *temp2=createNode("Separator",$4,{});$$=createNode("BRANCH","",{$1,$3,$5,temp1,temp2});}
   ;

ConditionalOrExpression
    : ConditionalAndExpression                                                          {$$=$1;}
   | ConditionalOrExpression OR_OP ConditionalAndExpression                             {$$=createNode("operator",$2,{$1,$3});}
   ;

ConditionalAndExpression
   : InclusiveOrExpression                                                              {$$=$1;}                                                                                                                                                                                                                           
   | ConditionalAndExpression AND_OP InclusiveOrExpression                              {$$=createNode("operator",$2,{$1,$3});}                                                                                                                                                               
   ;

InclusiveOrExpression
   : ExclusiveOrExpression                                                              {$$=$1;}                                        
   | InclusiveOrExpression '|' ExclusiveOrExpression                                    {$$=createNode("operator",$2,{$1,$3});}                                                                        
   ;

ExclusiveOrExpression
   : AndExpression                                                                      {$$=$1;}                              
   | ExclusiveOrExpression '^' AndExpression                                            {$$=createNode("operator",$2,{$1,$3});}                                                               
   ;

AndExpression
   : EqualityExpression                                                                 {$$=$1;}                                  
   | AndExpression '&' EqualityExpression                                               {$$=createNode("operator",$2,{$1,$3});}                                                           
   ;

EqualityExpression
   : RelationalExpression                                                               {$$=$1;}
   | EqualityExpression EQ_OP RelationalExpression                                      {$$=createNode("operator",$2,{$1,$3});}
   | EqualityExpression NE_OP RelationalExpression                                      {$$=createNode("operator",$2,{$1,$3});}
   ;

RelationalExpression
   : ShiftExpression                                                                    {$$=$1;}
   | RelationalExpression '<' ShiftExpression                                           {$$=createNode("operator",$2,{$1,$3});}
   | RelationalExpression '>' ShiftExpression                                           {$$=createNode("operator",$2,{$1,$3});}
   | RelationalExpression LE_OP ShiftExpression                                         {$$=createNode("operator",$2,{$1,$3});}
   | RelationalExpression GE_OP ShiftExpression                                         {$$=createNode("operator",$2,{$1,$3});}
   | RelationalExpression INSTANCEOF ReferenceType                                      {$$=createNode("operator",$2,{$1,$3});}
   ;

ShiftExpression
   : AdditiveExpression                                                                 {$$=$1;}
   | ShiftExpression LEFT_OP  AdditiveExpression                                        {$$=createNode("operator",$2,{$1,$3});}
   | ShiftExpression RIGHT_OP AdditiveExpression                                        {$$=createNode("operator",$2,{$1,$3});}
   | ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression                               {$$=createNode("operator",$2,{$1,$3});}
   ;

AdditiveExpression
   : MultiplicativeExpression                                                           {$$=$1;}
   | AdditiveExpression '+' MultiplicativeExpression                                    {$$=createNode("operator",$2,{$1,$3});}
   | AdditiveExpression '-' MultiplicativeExpression                                    {$$=createNode("operator",$2,{$1,$3});}
   ;

MultiplicativeExpression
   : UnaryExpression                                                                    {$$=$1;}
   | MultiplicativeExpression '*' UnaryExpression                                       {$$=createNode("operator",$2,{$1,$3});}                 
   | MultiplicativeExpression '/' UnaryExpression                                       {$$=createNode("operator",$2,{$1,$3});}
   | MultiplicativeExpression '%' UnaryExpression                                       {$$=createNode("operator",$2,{$1,$3});}
   ;

UnaryExpression
   : PreIncrementExpression                                                             {$$=$1;}
   | PreDecrementExpression                                                             {$$=$1;}
   | '+' UnaryExpression                                                                {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   | '-' UnaryExpression                                                                {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   | UnaryExpressionNotPlusMinus                                                        {$$=$1;}
   ;

PreIncrementExpression
   : INC_OP UnaryExpression                                                             {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   ;

PreDecrementExpression
   : DEC_OP UnaryExpression                                                             {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   ;

UnaryExpressionNotPlusMinus
   : PostfixExpression                                                                  {$$=$1;}
   | '~' UnaryExpression                                                                {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   | '!' UnaryExpression                                                                {Node * temp = createNode("operator",$1,{});
                                                                                         $$=createNode("unaryOperator","",{temp,$2});}
   | CastExpression                                                                     {$$=$1;}
   ;

PostfixExpression
   : Primary                                                                            {$$=$1;}
   | /*treat as expression name*/TypeName                                               {$$=$1;}
   | PostIncrementExpression                                                            {$$=$1;}
   | PostDecrementExpression                                                            {$$=$1;}
   ;

PostIncrementExpression
   : PostfixExpression INC_OP                                                           {Node * temp = createNode("operator",$2,{});
                                                                                         $$=createNode("unaryOperator","",{$1,temp});}
   ;

PostDecrementExpression
   : PostfixExpression DEC_OP                                                           {Node * temp = createNode("operator",$2,{});
                                                                                         $$=createNode("unaryOperator","",{$1,temp});}
   ;

CastExpression
   : '(' PrimitiveType ')' UnaryExpression                                              {Node * temp1 = createNode("Separator",$1,{});Node * temp3 = createNode("Separator",$3,{});$$=createNode("TYPECAST","",{$2,$4,temp1,temp3});}
   ;




%%



int counter=2;
void dfs(Node* head, int head_num){
    for(Node* u:head->children){

        string temp = (u->value)[0]=='"' ? "\\"+(u->value).substr(0,(u->value).size()-1)+"\\\"" : u->value;
    
        string val =  (u->value).empty() ? u->label : u->label+"__"+u->value;
        string shape =  ", shape = box" ;
        string color = ", color=lightblue style=filled";
        cout << counter << " [label = \""+val+"\""+shape+color+"];\n";
        cout << head_num << "->" << counter << " [ ];\n";
        counter++;
        dfs(u,counter-1);
    }
}


void generate_dot(){
    if(root==NULL)  return;
    cout << "digraph G {" << '\n' << "size=\"7,15\"; center = true; ";
    string temp = (root->value)[0]=='"' ? "\\"+(root->value).substr(0,(root->value).size()-1)+"\\\"" : root->value;
    string val = (root->value).empty() ? root->label : root->label+"__"+temp;
    string shape = (root->value).empty() ? ", shape = box" : "";
    string color = (root->value).empty() ? "" : ", color=lightblue, style=filled";
    cout << "1 [label = \""+val+"\""+shape+color+"];\n";
    dfs(root,1);
    cout << "}";
}




int main (void) {
    yyparse();

    generate_dot();

    return 1;
}

void yyerror (const char *s) {cerr<<"Line "<<line<<": "<<s;}