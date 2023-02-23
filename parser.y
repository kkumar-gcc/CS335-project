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

%token <str> ABSTRACT CONTINUE FOR SWITCH
%token <str> ASSERT DEFAULT IF PACKAGE SYNCHRONIZED
%token <str> BOOLEAN DO GOTO PRIVATE THIS
%token <str> BREAK DOUBLE IMPLEMENTS PROTECTED THROW
%token <str> BYTE ELSE IMPORT PUBLIC THROWS
%token <str> CASE ENUM RETURN TRANSIENT
%token <str> CATCH EXTENDS INT SHORT TRY
%token <str> CHAR FINAL INTERFACE STATIC VOID
%token <str> CLASS FINALLY LONG STRICTFP VOLATILE
%token <str> CONST FLOAT NATIVE SUPER WHILE

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

%type <node> CompilationUnit PackageDeclaration ImportDeclaration SingleTypeImportDeclaration
%type <node> TypeImportOnDemandDeclaration SingleStaticImportDeclaration StaticImportOnDemandDeclaration
%type <node> TypeDeclaration TypeName Type PrimitiveType NumericType IntegralType FloatingPointType
%type <node> ReferenceType ArrayType Dims ArrayInitializer VariableInitializerList ClassDeclaration
%type <node> NormalClassDeclaration ClassModifier Superclass Superinterfaces InterfaceTypeList
%type <node> ClassBody ClassMemberDeclaration ClassBodyDeclaration FieldDeclaration VariableDeclaratorList
%type <node> VariableDeclarator VariableDeclaratorId VariableInitializer MethodDeclaration MethodHeader
%type <node> MethodDeclarator FormalParameterList FormalParameters FormalParameter LastFormalParameter
%type <node> ReceiverParameter Throws ExceptionTypeList ExceptionType MethodBody InstanceInitializer
%type <node> StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type <node> ExplicitConstructorInvocation EnumDeclaration EnumBody EnumConstantList EnumConstant EnumBodyDeclarations
%type <node> InterfaceDeclaration NormalInterfaceDeclaration ExtendsInterfaces InterfaceBody
%type <node> InterfaceMemberDeclaration ConstantDeclaration InterfaceMethodDeclaration Block
%type <node> BlockStatements BlockStatement LocalVariableDeclarationStatement LocalVariableDeclaration
%type <node> Statement StatementNoShortIf StatementWithoutTrailingSubstatement EmptyStatement LabeledStatement
%type <node> LabeledStatementNoShortIf ExpressionStatement StatementExpression IfThenStatement IfThenElseStatement
%type <node> IfThenElseStatementNoShortIf AssertStatement SwitchStatement SwitchBlock SwitchBlockStatementGroup
%type <node> SwitchLabel WhileStatement WhileStatementNoShortIf DoStatement ForStatement ForStatementNoShortIf
%type <node> BasicForStatement SINGLE_ForInit SINGLE_Expression SINGLE_ForUpdate BasicForStatementNoShortIf ForInit 
%type <node> ForUpdate StatementExpressionList EnhancedForStatement EnhancedForStatementNoShortIf BreakStatement
%type <node> ContinueStatement ReturnStatement ThrowStatement SynchronizedStatement TryStatement 
%type <node> Catches CatchClause CatchFormalParameter CatchType Finally TryWithResourcesStatement 
%type <node> ResourceSpecification ResourceList Resource 
%type <node> Primary PrimaryNoNewArray ClassLiteral ClassInstanceCreationExpression
%type <node> UnqualifiedClassInstanceCreationExpression FieldAccess ArrayAccess
%type <node> MethodInvocation ArgumentList MethodReference ArrayCreationExpression
%type <node> DimExprs DimExpr Expression LambdaExpression LambdaParameters
%type <node> LambdaBody AssignmentExpression Assignment LeftHandSide
%type <node> AssignmentOperator ConditionalExpression ConditionalOrExpression
%type <node> ConditionalAndExpression InclusiveOrExpression ExclusiveOrExpression
%type <node> AndExpression EqualityExpression RelationalExpression ShiftExpression
%type <node> AdditiveExpression MultiplicativeExpression UnaryExpression PreIncrementExpression
%type <node> PreDecrementExpression UnaryExpressionNotPlusMinus PostfixExpression
%type <node> PostIncrementExpression PostDecrementExpression CastExpression
%type <node> MULTI_ImportDeclaration MULTI_TypeDeclaration
%type <node> MULTI_ClassModifier MULTI_ClassBodyDeclaration SINGLE_ArgumentList
%type <node> MULTI_InterfaceMemberDeclaration MULTI_SwitchBlockStatementGroup MULTI_SwitchLabel

%%
CompilationUnit : 
         | PackageDeclaration TypeDeclaration 
         | TypeDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
         | PackageDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
         |         {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
         ;
PackageDeclaration :
          PACKAGE TypeName ';' { $$ = $2; }
          ;

TypeDeclaration :
      ClassDeclaration {$$ = $1;}
      | ';'
      // | InterfaceDeclaration
      ;
/* production 6 */
TypeName : IDENTIFIER                  { $$ = createNode("Identifier",$1, {}); }
           | TypeName '.' IDENTIFIER   { Node* l = createNode("ID", $3, {}); $1->children.push_back(l); $$ = $1; }
           ;

/*production 4 */

Type
    : PrimitiveType             { $$ = $1; }
    | ReferenceType
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
   : TypeName
   | ArrayType
   ;
ArrayType :
     PrimitiveType Dims
     | TypeName Dims
     ;
Dims :
    Dims '[' ']'
   | '[' ']'
   ;
/* PRODUCTION #10 (Arrays) ----------------------------------------------- */

ArrayInitializer
    : '{' VariableInitializerList ',' '}'                  { $$ = $2; }
    | '{' VariableInitializerList '}'                      { $$ = $2; }
    | '{' ',' '}'                                          { $$ = createNode("EMP", "", {}); }
    | '{' '}'                                              { $$ = createNode("EMP", "", {}); }
    ;

VariableInitializerList
    : VariableInitializer                                  { $$ = createNode("ArrayInitializer", "", {$1}); }  
    | VariableInitializerList ',' VariableInitializer      { $$ = $1; $$->children.push_back($3); }
    ;

/* PRODUCTION #8(classes) */


ClassDeclaration :
     NormalClassDeclaration
     ;
   
NormalClassDeclaration 
     : CLASS IDENTIFIER ClassBody
     ;

ClassBody 
     : '{' ClassBodyDeclaration '}'
     | '{' '}'
     ;
ClassBodyDeclaration 
     : ClassMemberDeclaration
     | StaticInitializer
     | ConstructorDeclaration
     ;

ClassMemberDeclaration 
     : FieldDeclaration 
     | MethodDeclaration
     | ClassDeclaration
     |     
     ;



FieldDeclaration
    : ClassModifier Type VariableDeclaratorList ';' {Node * temp4 =createNode("Separator",$4,{});$$=createNode("fieldDeclaration","",{$1,$2,$3,temp4});}
    | Type VariableDeclaratorList ';' {Node * temp3 =createNode("Separator",$3,{});$$=createNode("fieldDeclaration","",{$1,$2,temp3});}
    ;

ClassModifier 
    : PUBLIC { $$ = createNode("Keyword", $1, {} ); }
    | PRIVATE { $$ = createNode("Keyword", $1, {} ); }
    ;
VariableDeclaratorList 
    : VariableDeclaratorList ',' VariableDeclarator  {$$ = $1; Node * temp2 = createNode("Separator",$2,{});}
    | VariableDeclarator {$$=$1;}
    ;

VariableDeclarator 
    : VariableDeclaratorId '=' VariableInitializer {Node * temp2 = createNode("=","",{}); $$=createNode("VariableDeclarator","",{$1,temp2,$3});} 
    | VariableDeclaratorId {$$=$1;}
    ;   
VariableDeclaratorId 
    : IDENTIFIER Dims
    | IDENTIFIER  {$$=createNode("Identifier",$1,{});}
    ;

VariableInitializer
   : Expression { $$=$1;}
   | ArrayInitializer
   ;


MethodDeclaration
    : ClassModifier MethodHeader MethodBody     {$$ = $2; $2->children.insert($2->children.begin(), $1); $$->children.push_back($3); }     
    | MethodHeader MethodBody                         {$$ = $1; $$->children.push_back($2); }
    ;

MethodHeader
    : Type MethodDeclarator                 
    | VOID MethodDeclarator                  { $$ = $2; Node *temp = createNode("TYPE", $1, {}); $2->children.insert($2->children.begin(), temp); }
    ;

MethodDeclarator
    : IDENTIFIER '(' FormalParameterList ')'         { $$ = createNode("Function", $1, {$3}); }
    | IDENTIFIER '(' ')'                             { $$ = createNode("Function", $1, {}); }
    | IDENTIFIER '(' FormalParameterList ')' Dims    { $$ = createNode("Function", $1, {$3,$5}); }
    | IDENTIFIER '(' ')' Dims                        { $$ = createNode("Function", $1, {$4}); }
    ;

FormalParameterList
    : ReceiverParameter                              { $$ = createNode("Parameters", "", {$1}); }
    | FormalParameters ',' LastFormalParameter       { $$ = $1; $1->children.push_back($3); }
    | LastFormalParameter                            { $$ = createNode("Parameters", "", {$1}); }
    ;

FormalParameters
    : FormalParameters ',' FormalParameter           { $$ = $1; $$->children.push_back($3); }
    | FormalParameter                                { $$ = createNode("Parameters", "", {$1}); }
    | ReceiverParameter                              { $$ = createNode("Parameters", "", {$1}); }
    ;

FormalParameter
    : FINAL Type VariableDeclaratorId               { Node *temp = createNode("MODIFIER", $1, {}); $$ = createNode("Parameter", "", {temp, $2, $3}); }
    | Type VariableDeclaratorId                     { $$ = createNode("Parameter", "", {$1, $2}); }
    ;

LastFormalParameter
    : FormalParameter                               { $$ = $1; }
    ;

ReceiverParameter
    : Type THIS                                     { Node *n1 = createNode("THIS", $2, {}); $$ = createNode("ReceiverParameter", "", {$1, n1}); }
    | Type IDENTIFIER '.' THIS                      { Node *n1 = createNode("THIS", $4, {}); Node *n2 = createNode("ID", $2, {}); $$ = createNode("ReceiverParameter", "", {$1, n2, n1}); }
    ;

MethodBody
    : Block                                         {$$ = $1; }
    | ';'                                           {$$ = createNode("EMP", "", {}); }
    ;

InstanceInitializer
    : Block                                         { $$ = $1; }
    ;

StaticInitializer
    : STATIC Block                                  { $$ = createNode("STATIC", $1, {$2}); }
    ;

ConstructorDeclaration
    : ClassModifier ConstructorDeclarator ConstructorBody            { $$ = $2; $$->children.insert($$->children.begin(), $1); $$->children.push_back($3);  }
    | ConstructorDeclarator ConstructorBody                                { $$ = $1; $$->children.push_back($2); }
    ;

ConstructorDeclarator
    : IDENTIFIER '(' FormalParameterList ')'                               { $$ = createNode("Constructor", $1, {$3}); }
    | IDENTIFIER '(' ')'                                                   { $$ = createNode("Constructor", $1, {}); }
    ;

ConstructorBody
    : '{' ExplicitConstructorInvocation BlockStatements '}'                { $$ = createNode("Body", "", {$2, $3}); }
    | '{' BlockStatements '}'                                              { $$ = createNode("Body", "", {$2}); }
    | '{' ExplicitConstructorInvocation '}'                                { $$ = createNode("Body", "", {$2}); }
    | '{' '}'                                                              { $$ = createNode("EMP", "", {}); }
    ;

ExplicitConstructorInvocation
    : THIS SINGLE_ArgumentList                                             { $$ = createNode("THIS", $1, {$2}); }
    ;

SINGLE_ArgumentList
    : '(' ')' ';'                                      { $$ = createNode("EMP", "", {}); }
    | '(' ArgumentList ')' ';'                         { $$ = $2; }
    ;


/* PRODUCTION #14(block statements) */

Block
    : '{' BlockStatements '}'                { $$ = $2; }
    | '{' '}'                                { $$ = createNode("EMP", "", {}); }
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
    : LocalVariableDeclaration ';'           { $$ = $1; }
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
    : ';'                                    { $$ = createNode("EMP", "", {}); }
    ;

LabeledStatement
    : IDENTIFIER ':' Statement               { $$ = createNode("LabeledStatement", $1, {$3}); }
    ;

LabeledStatementNoShortIf
    : IDENTIFIER ':' StatementNoShortIf      { $$ = createNode("LabeledStatement", $1, {$3}); }
    ;

ExpressionStatement
    : StatementExpression ';'                { $$ = $1; }
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
    : IF '(' Expression ')' Statement                                      
    ;

IfThenElseStatement
    : IF '(' Expression ')' StatementNoShortIf ELSE Statement
    ;

IfThenElseStatementNoShortIf
    : IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf    
    ;

WhileStatement
    : WHILE '(' Expression ')' Statement                                    
    ;

WhileStatementNoShortIf
    : WHILE '(' Expression ')' StatementNoShortIf                           
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
    : FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' Statement   
    ;

SINGLE_ForInit
    : /* Empty */          {$$=createNode("EMP","",{});}
    | ForInit              {$$=$1;}
    ;

SINGLE_Expression
    : /* Empty */          {$$=createNode("EMP","",{});}
    | Expression           {$$=$1;}
    ;

SINGLE_ForUpdate
    : /* Empty */          {$$=createNode("EMP","",{});}
    | ForUpdate            {$$=$1;}
    ;

BasicForStatementNoShortIf
    : FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' StatementNoShortIf   
    ;

ForInit
    : StatementExpressionList          {$$=$1;}
    | LocalVariableDeclaration         {$$=$1;}
    ;

ForUpdate
    : StatementExpressionList          {$$=$1;}
    ;

StatementExpressionList
    : StatementExpression                               {$$=createNode("StatementExpressions", "", {$1});}
    | StatementExpressionList ',' StatementExpression   {$1->children.push_back($3);$$=$1;}
    ;

EnhancedForStatement
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement          
    ;

EnhancedForStatementNoShortIf
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf      
    ;

BreakStatement
    : BREAK IDENTIFIER ';'        {Node* temp=createNode("ID",$2,{});$$=createNode("BREAK",$1,{temp});}
    | BREAK ';'                   {$$=createNode("BREAK",$1,{});}
    ;

ContinueStatement
    : CONTINUE IDENTIFIER ';'     {Node* temp=createNode("ID",$2,{});$$=createNode("CONTINUE",$1,{temp});}
    | CONTINUE ';'                {$$=createNode("CONTINUE",$1,{});}
    ;

ReturnStatement
    : RETURN Expression ';'       {$$=createNode("RETURN",$1,{$2});}
    | RETURN ';'                  {$$=createNode("RETURN",$1,{});}
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
    | TypeName '.' THIS                                                             {Node *temp = createNode("KEYWORD",$3,{});
                                                                                     $$=createNode("PRIMARYNONEWARRAY","",{$1,temp});}                                                             
    | '(' Expression ')'                                                            {$$=$2;}
    | ClassInstanceCreationExpression                                               {$$=$1;}
    | FieldAccess                                                                   {$$=$1;}
    | ArrayAccess                                                                   {$$=$1;}
    | MethodInvocation                                                              {$$=$1;}
    | MethodReference                                                               {$$=$1;}
    ;

ClassLiteral
    : TypeName Dims '.' CLASS                                                       {Node *temp = createNode("KEYWORD",$4,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,$2,temp});}
    | TypeName '.' CLASS                                                            {Node *temp = createNode("KEYWORD",$3,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp});}
    | PrimitiveType Dims '.' CLASS                                                  {Node *temp = createNode("KEYWORD",$4,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,$2,temp});}
    | PrimitiveType '.' CLASS /* combined numerictype and boolean */                {Node *temp = createNode("KEYWORD",$3,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp});}
    | VOID '.' CLASS                                                                {Node *temp = createNode("KEYWORD",$3,{});
                                                                                     Node *temp1 = createNode("KEYWORD",$1,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{temp1,temp});}
    ;

ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression                                         {$$=$1;}
    | /*treat as expression name*/TypeName '.' UnqualifiedClassInstanceCreationExpression{$$=createNode("CLASS_INSTANCE","",{$1,$3});$1->label="Expression Name";}
    | Primary '.' UnqualifiedClassInstanceCreationExpression                             {$$=createNode("CLASS_INSTANCE","",{$1,$3});}
    ;

UnqualifiedClassInstanceCreationExpression
    : NEW TypeName '(' ArgumentList ')'                                                 {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        $$ = createNode("UNQUA_CLASS_INSTANCE","",{temp,$2,$4});$2->label="ClassType";}
    | NEW TypeName '(' ArgumentList ')' ClassBody                                       {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        $$ = createNode("UNQUA_CLASS_INSTANCE","",{temp,$2,$4,$6});$2->label="ClassType";}
    | NEW TypeName '(' ')' ClassBody                                                    {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        $$ = createNode("UNQUA_CLASS_INSTANCE","",{temp,$2,temp1,$5});$2->label="ClassType";}
    | NEW TypeName '(' ')'                                                              {Node *temp = createNode("KEYWORD",$1,{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        $$ = createNode("UNQUA_CLASS_INSTANCE","",{temp,$2,temp1});$2->label="ClassType";}
    ;/*in each treat typename as classorinterfacetypetoinstantiate */

FieldAccess
    : Primary '.' IDENTIFIER                                                           {Node *temp = createNode("ID",$3,{});
                                                                                        $$ = createNode("FIELDACC","",{$1,temp});}
    ;

ArrayAccess
    : /*treat as expression name*/TypeName '[' Expression ']'                          {$$=createNode("ARRAY","",{$1,$3});$1->label="Expression Name";}
    | PrimaryNoNewArray '[' Expression ']'                                             {$$=createNode("ARRAY","",{$1,$3});}
    ;

MethodInvocation
    : IDENTIFIER '(' ArgumentList ')'                                                  {Node *temp = createNode("ID",$1,{});
                                                                                        $$=createNode("METHODINVOCATION","",{temp,$3});}
    | IDENTIFIER '(' ')'                                                               {Node *temp = createNode("ID",$1,{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        $$=createNode("METHODINVOCATION","",{temp,temp1});}
    | /*treat both as typename and expression name*/TypeName '.' IDENTIFIER '(' ArgumentList ')'
                                                                                       {Node *temp = createNode("ID",$3,{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,$5});}
    | /*treat both as typename and expression name*/TypeName '.' IDENTIFIER '(' ')'
                                                                                        {Node *temp = createNode("ID",$3,{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,temp1});}
    | Primary '.' IDENTIFIER '(' ArgumentList ')'                                       {Node *temp = createNode("ID",$3,{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,$5});}
    | Primary '.' IDENTIFIER '(' ')'                                                    {Node *temp = createNode("ID",$3,{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        $$=createNode("METHODINVOCATION","",{$1,temp,temp1});}
   ;

ArgumentList
    : ArgumentList ',' Expression                                                      {$1->children.push_back($3); $$ = $1; }
    | Expression                                                                       {$$ = createNode("ARGLIST","", {$1}); }
    ;

MethodReference
   : /*treat as expression name and class type*/TypeName PROPORTION IDENTIFIER          {Node *temp = createNode("ID",$3,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp});}
   | ArrayType PROPORTION IDENTIFIER                                                    {Node *temp = createNode("ID",$3,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp});}
   | Primary PROPORTION IDENTIFIER                                                      {Node *temp = createNode("ID",$3,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp});}
   | /*treat as class type*/TypeName PROPORTION NEW                                     {Node *temp = createNode("KEYWORD",$3,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp});$1->label="ClassType";}
   | ArrayType PROPORTION NEW                                                           {Node *temp = createNode("KEYWORD",$3,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp});}
   ;

ArrayCreationExpression
   : NEW PrimitiveType DimExprs Dims                                                    {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW PrimitiveType DimExprs                                                         {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});}                                      
   | NEW /*treat as class type*/TypeName DimExprs Dims                                  {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});$2->label="ClassType";}
   | NEW /*treat as class type*/TypeName DimExprs                                       {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});$2->label="ClassType";}
   | NEW PrimitiveType Dims ArrayInitializer                                            {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW /*treat as class type*/TypeName Dims ArrayInitializer                          {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});$2->label="ClassType";}
   ;

DimExprs
   : DimExpr                                                                            {$$ = createNode("DIMEXPR","", {$1}); }
   | DimExprs DimExpr                                                                   {$1->children.push_back($2); $$ = $1; }
   ;

DimExpr
   : '[' Expression ']'                                                                 {$$=$2;}
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
   | /*treat as expression name*/TypeName AssignmentOperator Expression                 {$2->children={$1,$3};$$=$2;$1->label="Expression Name";}
   ;

LeftHandSide
   : FieldAccess                                                                        {$$=$1;}
   | ArrayAccess                                                                        {$$=$1;}
   ;

AssignmentOperator
   : '='                                                                                {$$=createNode("OP",$1,{});}
   | MUL_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
   | DIV_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
   | MOD_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
   | ADD_ASSIGN                                                                         {$$=createNode("OP",$1,{});}                                                                               
   | SUB_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
   | LEFT_ASSIGN                                                                        {$$=createNode("OP",$1,{});}
   | RIGHT_ASSIGN                                                                       {$$=createNode("OP",$1,{});}
   | UNSIGNED_RIGHT_ASSIGN                                                              {$$=createNode("OP",$1,{});}
   | AND_ASSIGN                                                                         {$$=createNode("OP",$1,{});}  
   | XOR_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
   | OR_ASSIGN                                                                          {$$=createNode("OP",$1,{});}
   ;

ConditionalExpression
   : ConditionalOrExpression                                                            {$$=$1;}
   | ConditionalOrExpression '?' Expression ':' ConditionalExpression                   
   ;

ConditionalOrExpression
    : ConditionalAndExpression                                                          {$$=$1;}
   | ConditionalOrExpression OR_OP ConditionalAndExpression                             {$$=createNode("OP",$2,{$1,$3});}
   ;

ConditionalAndExpression
   : InclusiveOrExpression                                                              {$$=$1;}                                                                                                                                                                                                                           
   | ConditionalAndExpression AND_OP InclusiveOrExpression                              {$$=createNode("OP",$2,{$1,$3});}                                                                                                                                                               
   ;

InclusiveOrExpression
   : ExclusiveOrExpression                                                              {$$=$1;}                                        
   | InclusiveOrExpression '|' ExclusiveOrExpression                                    {$$=createNode("OP",$2,{$1,$3});}                                                                        
   ;

ExclusiveOrExpression
   : AndExpression                                                                      {$$=$1;}                              
   | ExclusiveOrExpression '^' AndExpression                                            {$$=createNode("OP",$2,{$1,$3});}                                                               
   ;

AndExpression
   : EqualityExpression                                                                 {$$=$1;}                                  
   | AndExpression '&' EqualityExpression                                               {$$=createNode("OP",$2,{$1,$3});}                                                           
   ;

EqualityExpression
   : RelationalExpression                                                               {$$=$1;}
   | EqualityExpression EQ_OP RelationalExpression                                      {$$=createNode("OP",$2,{$1,$3});}
   | EqualityExpression NE_OP RelationalExpression                                      {$$=createNode("OP",$2,{$1,$3});}
   ;

RelationalExpression
   : ShiftExpression                                                                    {$$=$1;}
   | RelationalExpression '<' ShiftExpression                                           {$$=createNode("OP",$2,{$1,$3});}
   | RelationalExpression '>' ShiftExpression                                           {$$=createNode("OP",$2,{$1,$3});}
   | RelationalExpression LE_OP ShiftExpression                                         {$$=createNode("OP",$2,{$1,$3});}
   | RelationalExpression GE_OP ShiftExpression                                         {$$=createNode("OP",$2,{$1,$3});}
   | RelationalExpression INSTANCEOF ReferenceType                                      {$$=createNode("OP",$2,{$1,$3});}
   ;

ShiftExpression
   : AdditiveExpression                                                                 {$$=$1;}
   | ShiftExpression LEFT_OP  AdditiveExpression                                        {$$=createNode("OP",$2,{$1,$3});}
   | ShiftExpression RIGHT_OP AdditiveExpression                                        {$$=createNode("OP",$2,{$1,$3});}
   | ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression                               {$$=createNode("OP",$2,{$1,$3});}
   ;

AdditiveExpression
   : MultiplicativeExpression                                                           {$$=$1;}
   | AdditiveExpression '+' MultiplicativeExpression                                    {$$=createNode("OP",$2,{$1,$3});}
   | AdditiveExpression '-' MultiplicativeExpression                                    {$$=createNode("OP",$2,{$1,$3});}
   ;

MultiplicativeExpression
   : UnaryExpression                                                                    {$$=$1;}
   | MultiplicativeExpression '*' UnaryExpression                                       {$$=createNode("OP",$2,{$1,$3});}                 
   | MultiplicativeExpression '/' UnaryExpression                                       {$$=createNode("OP",$2,{$1,$3});}
   | MultiplicativeExpression '%' UnaryExpression                                       {$$=createNode("OP",$2,{$1,$3});}
   ;

UnaryExpression
   : PreIncrementExpression                                                             {$$=$1;}
   | PreDecrementExpression                                                             {$$=$1;}
   | '+' UnaryExpression                                                                {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   | '-' UnaryExpression                                                                {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   | UnaryExpressionNotPlusMinus                                                        {$$=$1;}
   ;

PreIncrementExpression
   : INC_OP UnaryExpression                                                             {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   ;

PreDecrementExpression
   : DEC_OP UnaryExpression                                                             {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   ;

UnaryExpressionNotPlusMinus
   : PostfixExpression                                                                  {$$=$1;}
   | '~' UnaryExpression                                                                {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   | '!' UnaryExpression                                                                {Node * temp = createNode("OP",$1,{});
                                                                                         $$=createNode("UOP","",{temp,$2});}
   | CastExpression                                                                     {$$=$1;}
   ;

PostfixExpression
   : Primary                                                                            {$$=$1;}
   | /*treat as expression name*/TypeName                                               {$$=$1;$1->label="Expression Name";}
   | PostIncrementExpression                                                            {$$=$1;}
   | PostDecrementExpression                                                            {$$=$1;}
   ;

PostIncrementExpression
   : PostfixExpression INC_OP                                                           {Node * temp = createNode("OP",$2,{});
                                                                                         $$=createNode("UOP","",{$1,temp});}
   ;

PostDecrementExpression
   : PostfixExpression DEC_OP                                                           {Node * temp = createNode("OP",$2,{});
                                                                                         $$=createNode("UOP","",{$1,temp});}
   ;

CastExpression
   : '(' PrimitiveType ')' UnaryExpression                                              {$$=createNode("TYPECAST","",{$2,$4});}
   ;

































































// ArrayType : TypeName '[' ']'     { $$ = $1;Node *temp = createNode("","[]",{}); $$->children.push_back(temp);}
//           | ArrayType '[' ']'    { Node* l = createNode("ARRAY", $3, {}); $1->children.push_back(l); $$ = $1; }
//           ;

/* production 8 */
// ClassDeclaration 
//    : CLASS IDENTIFIER ClassBody {Node *temp1=createNode("Keyword",$1,{});Node *temp2=createNode("Identifier",$2,{});$$=createNode("normalClassDeclaration","",{temp1,temp2,$3});}     
//    ;
// ClassBody
//    : '{' ClassBodyDeclaration '}'  {Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("classBody","",{temp1,$2,temp3});} 
//    | '{' '}'  {Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{}); Node *temp3=createNode("fieldDeclaration","",{});$$=createNode("classBody","",{temp1,temp2});} 
//    ;
// ClassBodyDeclaration 
//    : ClassMemberDeclaration {$$=$1;}
// //    | InstanceInitializer   {$$=$1;}
// //    | StaticInitializer     {$$=$1;}
// //    | ConstructorDeclaration   {$$=$1;}
//    ;
// ClassMemberDeclaration
//     : FieldDeclaration {$$=$1;}
//     // | MethodDeclaration
//     // | ClassDeclaration
//     // | InterfaceDeclaration
//     ;
// FieldDeclaration
//     : ClassModifier Type VariableDeclaratorList ';' {Node * temp4 =createNode("Separator",$4,{});$$=createNode("fieldDeclaration","",{$1,$2,$3,temp4});}
//     | Type VariableDeclaratorList ';' {Node * temp3 =createNode("Separator",$3,{});$$=createNode("fieldDeclaration","",{$1,$2,temp3});}
//     ;
// ClassModifier 
//     : PUBLIC { $$ = createNode("Keyword", $1, {} ); }
//     | PRIVATE { $$ = createNode("Keyword", $1, {} ); }
//     ;
// VariableDeclaratorList 
//     // : VariableDeclaratorList ',' VariableDeclarator  {$$ = ; Node * temp2 = createNode("Separator",$2,{}); Node * temp3 = createNode("")}
//     : VariableDeclarator {$$=$1;}
//     ;
// VariableDeclarator 
//     : VariableDeclaratorId '=' VariableInitializer {Node * temp2 = createNode("=","",{}); $$=createNode("VariableDeclarator","",{$1,temp2,$3});} 
//     | VariableDeclaratorId {$$=$1;}
//     ;   
// VariableDeclaratorId 
//     : IDENTIFIER  {$$=createNode("Identifier",$1,{});}
//     ;
// VariableInitializer
//    : Expression { $$=$1;}
//    ;
// Expression 
//    : AssignmentExpression { $$=$1;}
//    ;
// AssignmentExpression
//    : Assignment {$$=$1;}
// // :  ConditionalExpression
//    ;

// Assignment 
//    : LeftHandSide AssignmentOperator Expression {$$=$2;$2->children.push_back($1);$2->children.push_back($3);}
//    | TypeName AssignmentOperator Expression {$$=$2;$2->children.push_back($1);$2->children.push_back($3);}
//    ;

// LeftHandSide 
//    : FieldAccess {$$=$1;}
//    ;
// FieldAccess 
//    : Primary '.' IDENTIFIER {Node *temp1=createNode('Separator',$2,{});Node *temp2=createNode('Identifier',$3,{});$$=createNode("fieldAccess","",{$1,temp2,temp3});}
//    ;

// Primary
//    : PrimaryNoNewArray {$$=$1;}
// //    | ArrayCreationExpression
//    ;
// PrimaryNoNewArray 
//    : LITERAL {$$=createNode("Literal",$1,{});}
//    | ClassLiteral {$$=$1;}
//    | THIS {$$=createNode("Keyword",$1,{});}
//    | TypeName '.' THIS {Node *temp1=createNode('Separator',$2,{}); Node *temp2=createNode('Separator',$3,{});$$=createNode("primaryNoNewArray","",{$1,temp1,temp2});}
//    | '(' Expression ')' {Node *temp1=createNode('Separator',$1,{}); Node *temp3=createNode('Separator',$3,{});$$=createNode("primaryNoNewArray","",{temp1,$2,temp3});}
// //    | ClassInstanceCreationExpression
//    | FieldAccess {$$=$1;}
// //    | ArrayAccess
//    | MethodInvocation {$$=$1;}
//    | MethodReference {$$=$1;}
//    ;
// ClassLiteral
//    : TypeName '.' CLASS
//    | PrimitiveType '.' CLASS
//    | VOID '.' CLASS
//    ;

// MethodInvocation 
//    : IDENTIFIER '(' ArgumentList ')'
//    | IDENTIFIER '(' ')'
//    | TypeName '.' IDENTIFIER '(' ArgumentList ')'
//    | TypeName '.' IDENTIFIER '(' ')'
//    | Primary '.' IDENTIFIER '(' ArgumentList ')'
//    | Primary '.' IDENTIFIER '(' ')'
//    ;

// ArgumentList 
//    : ArgumentList ',' Expression
//    | Expression
//    ;

// MethodReference 
//    : TypeName PROPORTION IDENTIFIER
// //    | ArrayType PROPORTION IDENTIFIER
//    | Primary PROPORTION IDENTIFIER
//    ;

// AssignmentOperator 
//    : '='                                                                                {$$=createNode("OP",$1,{});}
//    | MUL_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
//    | DIV_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
//    | MOD_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
//    | ADD_ASSIGN                                                                         {$$=createNode("OP",$1,{});}                                                                               
//    | SUB_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
//    | LEFT_ASSIGN                                                                        {$$=createNode("OP",$1,{});}
//    | RIGHT_ASSIGN                                                                       {$$=createNode("OP",$1,{});}
//    | UNSIGNED_RIGHT_ASSIGN                                                              {$$=createNode("OP",$1,{});}
//    | AND_ASSIGN                                                                         {$$=createNode("OP",$1,{});}  
//    | XOR_ASSIGN                                                                         {$$=createNode("OP",$1,{});}
//    | OR_ASSIGN                                                                          {$$=createNode("OP",$1,{});}
//    ;

 





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