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
         TypeDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
        //  | PackageDeclaration {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{$1,temp});}
         |         {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
         ;
// PackageDeclaration :
//           PACKAGE TypeName ';' {$$=createNode("packageDeclaration",)}
//           ;
        
    //      TypeName {root = createNode("PROGRAM","",{$1});}
    //      | Type   {root = createNode("PROGRAM","",{$1});}
    //    ;
TypeDeclaration :
      ClassDeclaration {$$ = $1;}
      ;
/* production 6 */
TypeName : IDENTIFIER                  { $$ = createNode("Identifier",$1, {}); }
        //    | TypeName '.' IDENTIFIER   { Node* l = createNode("ID", $3, {}); $1->children.push_back(l); $$ = $1; }
           ;

/*production 4 */

Type
    : PrimitiveType             { $$ = $1; }
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

// ArrayType : TypeName '[' ']'     { $$ = $1;Node *temp = createNode("","[]",{}); $$->children.push_back(temp);}
//           | ArrayType '[' ']'    { Node* l = createNode("ARRAY", $3, {}); $1->children.push_back(l); $$ = $1; }
//           ;

/* production 8 */
ClassDeclaration 
   : CLASS IDENTIFIER ClassBody {Node *temp1=createNode("Keyword",$1,{});Node *temp2=createNode("Identifier",$2,{});$$=createNode("normalClassDeclaration","",{temp1,temp2,$3});}     
   ;
ClassBody
   : '{' ClassBodyDeclaration '}'  {Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("classBody","",{temp1,$2,temp3});} 
   | '{' '}'  {Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{}); Node *temp3=createNode("fieldDeclaration","",{});$$=createNode("classBody","",{temp1,temp2});} 
   ;
ClassBodyDeclaration 
   : ClassMemberDeclaration {$$=$1;}
//    | InstanceInitializer   {$$=$1;}
//    | StaticInitializer     {$$=$1;}
//    | ConstructorDeclaration   {$$=$1;}
   ;
ClassMemberDeclaration
    : FieldDeclaration {$$=$1;}
    // | MethodDeclaration
    // | ClassDeclaration
    // | InterfaceDeclaration
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
    // : VariableDeclaratorList ',' VariableDeclarator  {$$ = ; Node * temp2 = createNode("Separator",$2,{}); Node * temp3 = createNode("")}
    : VariableDeclarator {$$=$1;}
    ;
VariableDeclarator 
    : VariableDeclaratorId '=' VariableInitializer {Node * temp2 = createNode("=","",{}); $$=createNode("VariableDeclarator","",{$1,temp2,$3});} 
    | VariableDeclaratorId {$$=$1;}
    ;   
VariableDeclaratorId 
    : IDENTIFIER  {$$=createNode("Identifier",$1,{});}
    ;
VariableInitializer
   : Expression { $$=$1;}
   ;
Expression 
   : AssignmentExpression { $$=$1;}
   ;
AssignmentExpression
   : Assignment {$$=$1;}
// :  ConditionalExpression
   ;

Assignment 
   : LeftHandSide AssignmentOperator Expression {$$=$2;$2->children.push_back($1);$2->children.push_back($3);}
   | TypeName AssignmentOperator Expression {$$=$2;$2->children.push_back($1);$2->children.push_back($3);}
   ;

LeftHandSide 
   : FieldAccess {$$=$1;}
   ;
FieldAccess 
   : Primary '.' IDENTIFIER {Node *temp1=createNode('Separator',$2,{});Node *temp2=createNode('Identifier',$3,{});$$=createNode("fieldAccess","",{$1,temp2,temp3});}
   ;

Primary
   : PrimaryNoNewArray {$$=$1;}
//    | ArrayCreationExpression
   ;
PrimaryNoNewArray 
   : LITERAL {$$=createNode("Literal",$1,{});}
   | ClassLiteral {$$=$1;}
   | THIS {$$=createNode("Keyword",$1,{});}
   | TypeName '.' THIS {Node *temp1=createNode('Separator',$2,{}); Node *temp2=createNode('Separator',$3,{});$$=createNode("primaryNoNewArray","",{$1,temp1,temp2});}
   | '(' Expression ')' {Node *temp1=createNode('Separator',$1,{}); Node *temp3=createNode('Separator',$3,{});$$=createNode("primaryNoNewArray","",{temp1,$2,temp3});}
//    | ClassInstanceCreationExpression
   | FieldAccess {$$=$1;}
//    | ArrayAccess
   | MethodInvocation {$$=$1;}
   | MethodReference {$$=$1;}
   ;
ClassLiteral
   : TypeName '.' CLASS
   | PrimitiveType '.' CLASS
   | VOID '.' CLASS
   ;

MethodInvocation 
   : IDENTIFIER '(' ArgumentList ')'
   | IDENTIFIER '(' ')'
   | TypeName '.' IDENTIFIER '(' ArgumentList ')'
   | TypeName '.' IDENTIFIER '(' ')'
   | Primary '.' IDENTIFIER '(' ArgumentList ')'
   | Primary '.' IDENTIFIER '(' ')'
   ;

ArgumentList 
   : ArgumentList ',' Expression
   | Expression
   ;

MethodReference 
   : TypeName PROPORTION IDENTIFIER
//    | ArrayType PROPORTION IDENTIFIER
   | Primary PROPORTION IDENTIFIER
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