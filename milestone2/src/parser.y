%{

#include <iostream>
#include <string>
#include <vector>
#include "cp.h"
#include "IR.h"
using namespace std;

#define YYERROR_VERBOSE 1

void yyerror (const char *s);
extern "C" int yylex();
extern long long int line;

Node *root = NULL;

Node *createNode(string label, string value,vector <Node *> children) {

    Node *temp = new Node();
    temp->value = value;
    temp->children = children;
    temp->label = label;
    
    return temp;
}

SymTable* ST = new SymTable();
%}
%define parse.error verbose
%union{
    char *str;
    int ival;
    Node *node;
}

%start CompilationUnit

%token <str> CONTINUE FOR CHAR FINAL STATIC VOID CLASS LONG CONST FLOAT WHILE FLOATINGPOINTLITERAL TRUELITERAL FALSELITERAL NULLLITERAL CHARACTERLITERAL IDENTIFIER STRINGLITERAL
%token <str> BOOLEAN PRIVATE IF PACKAGE THIS BREAK DOUBLE BYTE ELSE PUBLIC RETURN INT SHORT ABSTRACT
%token <ival> INTEGERLITERAL

%right <str> '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN UNSIGNED_RIGHT_ASSIGN '?' ':'
%left <str> OR_OP AND_OP '|' '^' '&' NE_OP EQ_OP LEFT_OP RIGHT_OP UNSIGNED_RIGHT_OP '+' '-' '*' '/' '%'
%nonassoc <str> '<' '>' GE_OP LE_OP INSTANCEOF
%right <str> NEW INC_OP DEC_OP '!' '~' '(' ')' '{' '}' '[' ']' '.' ',' ';' PROPORTION PTR_OP
%type <node> Literal BooleanLiteral NullLiteral StringLiteral IntegerLiteral CharacterLiteral Identifier
%type <node> CompilationUnit PackageDeclaration
%type <node> TypeDeclaration TypeName Type PrimitiveType NumericType IntegralType FloatingPointType
%type <node> ContinueStatement ReturnStatement Primary PrimaryNoNewArray ClassLiteral ClassInstanceCreationExpression
%type <node> UnqualifiedClassInstanceCreationExpression FieldAccess ArrayAccess
%type <node> MethodInvocation ArgumentList MethodReference ArrayCreationExpression
%type <node> DimExprs DimExpr Expression AssignmentExpression Assignment LeftHandSide
%type <node> AssignmentOperator ConditionalExpression ConditionalOrExpression
%type <node> ConditionalAndExpression InclusiveOrExpression ExclusiveOrExpression
%type <node> AndExpression EqualityExpression RelationalExpression ShiftExpression
%type <node> AdditiveExpression MultiplicativeExpression UnaryExpression PreIncrementExpression
%type <node> PreDecrementExpression UnaryExpressionNotPlusMinus PostfixExpression
%type <node> PostIncrementExpression PostDecrementExpression CastExpression
%type <node> MULTI_TypeDeclaration MULTI_ClassModifier MULTI_ClassBodyDeclaration SINGLE_ArgumentList 
%type <node> ReferenceType ArrayType Dims ArrayInitialize VariableInitializerList ClassDeclaration
%type <node> NormalClassDeclaration ClassModifier ClassBody ClassMemberDeclaration ClassBodyDeclaration FieldDeclaration VariableDeclaratorList
%type <node> VariableDeclarator VariableDeclaratorId VariableInitializer MethodDeclaration MethodHeader
%type <node> MemberName FormalParameterList FormalParameters FormalParameter LastFormalParameter
%type <node> ReceiverParameter MethodBody StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type <node> ExplicitConstructorInvocation Block BlockStatements BlockStatement LocalVariableDeclarationStatement LocalVariableDeclaration
%type <node> Statement StatementNoShortIf StatementWithoutTrailingSubstatement EmptyStatement LabeledStatement
%type <node> LabeledStatementNoShortIf ExpressionStatement StatementExpression IfThenStatement IfThenElseStatement
%type <node> IfThenElseStatementNoShortIf WhileStatement WhileStatementNoShortIf ForStatement ForStatementNoShortIf
%type <node> BasicForStatement SingleForInit SingleExpression SingleForUpdate BasicForStatementNoShortIf ForInit 
%type <node> ForUpdate StatementExpressionList EnhancedForStatement EnhancedForStatementNoShortIf BreakStatement

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

TypeName : Identifier
                {	
                    $$=$1;
                    // Node *n1=createNode("Identifier",$1,sym->type,{}); $$ = createNode("expressionName","", {n1}); 
                }
           | TypeName '.' Identifier   {

            //  Node* n2 = createNode("Identifier", $3,sym->type, {}); Node* n3 = createNode("Separator", $2, {}); $1->children.push_back(n3); $1->children.push_back(n2); $$ = $1; 
            }
        ;                             
Identifier 
    : IDENTIFIER   { 
                    string s1($1);
					Symbol* sym = ST->GetVar("_" + s1);
					
					if(sym == NULL){
						sym = ST->AddVar(s1);
					}
                    Node* n1 = new Node();
					n1->place = sym->name;
                    n1->type= sym->type;
                    n1->value = $1;
                    n1->label="Identifier";
					$$ = n1;
                }
Type
    : PrimitiveType             { $$ = $1; }
    | ReferenceType             { $$ = $1; }
    ;

PrimitiveType
    : NumericType               { $$ = $1; }
    | BOOLEAN                   {
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "bool";
        $$->type = "bool";
        $$->label = "Keyword";
        $$->value = $1;
    }
    ;

NumericType
    : IntegralType              { $$ = $1; }
    | FloatingPointType         { $$ = $1; }
    ;

IntegralType
    : BYTE                      { 
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "byte";
        $$->type = "byte";
        $$->label = "Keyword";
        $$->value = $1;
      }
    | SHORT                     {  
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "short";
        $$->type = "short";
        $$->label = "Keyword";
        $$->value = $1; 
        }
    | INT                       { 
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "int";
        $$->type = "int";
        $$->label = "Keyword";
        $$->value = $1; 
        }
    | LONG                      {
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "long";
        $$->type = "long";
        $$->label = "Keyword";
        $$->value = $1; 
        }
    | CHAR                      {
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "char";
        $$->type = "char";
        $$->label = "char";
        $$->value = $1; 
    }
    ;

FloatingPointType
    : FLOAT                     {  
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "float";
        $$->type = "float";
        $$->label = "Keyword";
        $$->value = $1; }
    | DOUBLE                    { 
        Node * n1 = new Node();
        $$ = n1;
        $$->place = "double";
        $$->type = "double";
        $$->label = "Keyword";
        $$->value = $1;}
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
   | '[' ']'       {Node *temp1 = createNode("Separator",$1,{}); Node *temp2 = createNode("Separator",$2,{});  ;$$ = createNode("DIMS","",{temp1,temp2}); } 
   ;

ArrayInitialize
    : '{' VariableInitializerList ',' '}'                  { Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{});Node *temp4=createNode("Separator",$4,{}); $$=createNode("ArrayInitialize","",{temp1,$2,temp3,temp4}); }
    | '{' VariableInitializerList '}'                      { Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("ArrayInitialize","",{temp1,$2,temp3}); }
    | '{' ',' '}'                                           { Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("ArrayInitialize","",{temp1,temp2,temp3}); }
    | '{' '}'                                              { Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{});$$ = createNode("ArrayInitialize_EMP", "", {temp1,temp2}); }
    ;

VariableInitializerList
    : VariableInitializer                                  { $$ = createNode("VariableInitializerList", "", {$1}); }  
    | VariableInitializerList ',' VariableInitializer      { $$ = $1;Node *n2=createNode("Separator",$2,{}); $$->children.push_back(n2);$$->children.push_back($3); }
    ;

ClassDeclaration :
     NormalClassDeclaration  { $$ = $1; }
     ;
   
NormalClassDeclaration 
     : MULTI_ClassModifier CLASS Identifier ClassBody  {
            $$ = $3;
			$$->type = "class";
			ST->curEnv->name = $3->place;
			ST->EndScope();
        // Node *temp2=createNode("Keyword",$2,{});Node *temp3=createNode("Identifier",$3,{});$$=createNode("normalClassDeclaration","",{$1,temp2,temp3,$4});
        }
     | CLASS Identifier ClassBody {
        $$=$2;
        $$->type ="class";
        ST->curEnv->name=$2->place;
        ST->EndScope();
        // Node *temp1=createNode("Keyword",$1,{});Node *temp2=createNode("Identifier",$2,{});$$=createNode("normalClassDeclaration","",{temp1,temp2,$3});
        }  
     ;

ClassBody 
     : '{' MULTI_ClassBodyDeclaration '}'  {
            ST->curEnv->type = "CLASSTYPE";
			$$ = $2; 
        // Node *temp1=createNode("Separator",$1,{});Node *temp3=createNode("Separator",$3,{}); $$=createNode("classBody","",{temp1,$2,temp3});
     } 
     | '{' '}'   {
        	ST->curEnv->type = "CLASSTYPE";
			Node* n = new Node();
			$$ = n; 
        // Node *temp1=createNode("Separator",$1,{});Node *temp2=createNode("Separator",$2,{}); Node *temp3=createNode("fieldDeclaration","",{});$$=createNode("classBody","",{temp1,temp2});
     }
     ;
MULTI_ClassBodyDeclaration 
     : ClassBodyDeclaration {$$=$1;}
     | MULTI_ClassBodyDeclaration ClassBodyDeclaration 
     { 
            $$ = $1;
		
        // $$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());
        // $$=$1; $$->children.push_back($2);
     }
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
    : MULTI_ClassModifier Type VariableDeclaratorList ';' {
        Node * temp4 =createNode("Separator",$4,{});$$=createNode("fieldDeclaration","",{$1,$2,$3,temp4});
    }
    | Type VariableDeclaratorList ';' {
        /*need some changes here */
        Node * temp3 =createNode("Separator",$3,{});$$=createNode("fieldDeclaration","",{$1,$2,temp3});
    }
    ;
MULTI_ClassModifier 
    : ClassModifier {$$=$1;}
    | MULTI_ClassModifier ClassModifier  {  }
    ;

ClassModifier 
    : PUBLIC { 			
            string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | PRIVATE {		
            string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | STATIC {		
            string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | FINAL {		
            string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | ABSTRACT { 		
            string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    ;
  
VariableDeclaratorList 
    : VariableDeclaratorList ',' VariableDeclarator  {
        $$ = $1;$$->children.push_back($3);Node * temp2 = createNode("Separator",$2,{}); $$->children.push_back(temp2); 
    }
    | VariableDeclarator {
        $$=$1;
    }
    ;

VariableDeclarator 
    : VariableDeclaratorId '=' VariableInitializer {Node * temp2 = createNode("=","",{});$$=createNode("VariableDeclarator","",{$1,temp2,$3});} 
    | VariableDeclaratorId {$$=$1;}
    ;   
VariableDeclaratorId 
    : Identifier Dims {$$=createNode("VariableDeclaratorId","",{$1,$2});} 
    | Identifier  {$$=$1;}
    ;

VariableInitializer
   : Expression { $$=$1;}
   | ArrayInitialize { $$=$1;}
   ;


MethodDeclaration
    : MULTI_ClassModifier MethodHeader MethodBody     {
         $$=createNode("MethodDeclaration","",{$1,$2,$3}); 
    }     
    | MethodHeader MethodBody                       {
            $$ = $1;
			// vector <TAC*> tmp;
			// tmp.pb(genLabelTAC(ST->curEnv->name));
			// $$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
			// $$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());		
			ST->EndScope();
        // $$=createNode("MethodDeclaration","",{$1,$2}); 
    }     
    ;

MethodHeader
    : Type MemberName'(' FormalParameterList ')'      { 
         	$$ = $2;
			ST->curEnv->returnType = $1->place;
			ST->curEnv->name = $2->place;
            // $$->code = $4->code;

        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | Type MemberName '(' ')'        { 
         	$$ = $2;
			ST->curEnv->returnType = $1->place;
			ST->curEnv->name = $2->place;
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | Type MemberName '(' FormalParameterList ')' Dims        { 
         	$$ = $2;
			ST->curEnv->returnType = $1->place;
			ST->curEnv->name = $2->place;
			// $$->code = $4->code;
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | Type MemberName '(' ')' Dims         { 
         	$$ = $2;
			ST->curEnv->returnType = $1->place;
			ST->curEnv->name = $2->place;
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | VOID MemberName '(' FormalParameterList ')'          { 
         	$$ = $2;
			ST->curEnv->name = $2->place;
			// $$->code = $4->code;
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | VOID MemberName '(' ')'         { 
         	$$ = $2;
			ST->curEnv->name = $2->place;

        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | VOID MemberName '(' FormalParameterList ')' Dims        { 
         	$$ = $2;
			ST->curEnv->name = $2->place;
			// $$->code = $4->code;
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    | VOID MemberName '(' ')' Dims         { 
         	$$ = $2;
			ST->curEnv->name = $2->place;
            
        // Node *temp1=createNode("Identifier",$1,{});Node *temp2=createNode("Separator",$2,{});Node *temp4=createNode("Separator",$4,{});$$ = createNode("MethodDeclarator", "", {temp1,temp2,$3,temp4});
    }
    ;

MemberName
    : Identifier {
         ST->BeginScope();
         ST->curEnv->type = "METHODTYPE";

         $$ = $1;
    }
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
    | Type IDENTIFIER '.' THIS                      { Node *n4 = createNode("THIS", $4, {}); Node *n3 = createNode("Separator", $3, {}); Node *n2 = createNode("Identifier", $2, {}); $$ = createNode("ReceiverParameter", "", {$1, n2, n3,n4}); }
    ;

MethodBody
    : Block                                         {$$ = $1; }
    | ';'                                           {$$ = createNode("EMP", "", {}); }
    ;
StaticInitializer
    : STATIC Block                                  { Node * n1 = createNode("KEYWORD", $1, {});$$ = createNode("StaticInitializer","", {n1,$2}); } 
    ;

ConstructorDeclaration
    : MULTI_ClassModifier ConstructorDeclarator ConstructorBody            { $$ = $2; $$->children.insert($$->children.begin(),$1);$$->children.push_back($3);  }
    | ConstructorDeclarator ConstructorBody                                { $$ = $1; $$->children.push_back($2); }
    ;

ConstructorDeclarator
    : IDENTIFIER '(' FormalParameterList ')'                                { Node *n1 = createNode("Identifier", $1, {});Node *n2= createNode("Separator", $2, {});Node *n4= createNode("Separator", $4, {});$$ = createNode("ConstructorDeclarator","",{n1,n2,$3,n4}); }
    | IDENTIFIER '(' ')'                                                   { Node *n1 = createNode("Identifier", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n3 = createNode("Separator", $3, {});$$ = createNode("ConstructorDeclarator","",{n1,n2,n3}); }
    ;

ConstructorBody
    : '{' ExplicitConstructorInvocation BlockStatements '}'                { Node *n1 = createNode("Separator", $1, {});Node *n4= createNode("Separator", $4, {});$$ = createNode("ConstructorBody","",{n1,$2,$3,n4}); }
    | '{' BlockStatements '}'                                              { Node *n1 = createNode("Separator", $1, {});Node *n3= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,$2,n3}); }
    | '{' ExplicitConstructorInvocation '}'                                { Node *n1 = createNode("Separator", $1, {});Node *n3= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,$2,n3}); }
    | '{' '}'                                                              { Node *n1 = createNode("Separator", $1, {});Node *n2= createNode("Separator", $2, {});$$ = createNode("ConstructorBody","",{n1,n2}); }
    ;

ExplicitConstructorInvocation
    : THIS SINGLE_ArgumentList                                             { Node * n1 = createNode("KEYWORD", $1, {});$$ = createNode("ExplicitConstructorInvocation","", {n1,$2}); }
    ;

SINGLE_ArgumentList
    : '(' ')' ';'                                      { Node *n1 = createNode("Separator", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n3 = createNode("Separator", $3, {});$$ = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
    | '(' ArgumentList ')' ';'                         { Node *n1 = createNode("Separator", $1, {});Node *n3 = createNode("Separator", $3, {});Node *n4 = createNode("Separator", $4, {});$$ = createNode("SINGLE_ArgumentList","",{n1,$2,n3,n4});  }
    ;

Block
    : '{' BlockStatements '}'                { Node *n1 = createNode("Separator", $1, {});Node *n3= createNode("Separator", $3, {});$$ = createNode("Block","",{n1,$2,n3}); }
    | '{' '}'                                 { Node *n1 = createNode("Separator", $1, {});Node *n2= createNode("Separator", $2, {});$$ = createNode("Block","",{n1,n2}); }
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
    : LocalVariableDeclaration ';'           { Node *n2 = createNode("Separator", $2, {});$$ = createNode("LocalVariableDeclarationStatement","",{$1,n2}); }
    ;

LocalVariableDeclaration
    : Type VariableDeclaratorList            { 
        
        $$ = createNode("LocalVariableDeclaration", "", {$1, $2}); 
    }
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
    : StatementExpression ';'                 { Node *n2 = createNode("Separator", $2, {});$$ = createNode("ExpressionStatement","",{$1,n2}); }
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
    : IF '(' Expression ')' Statement     { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n4 = createNode("Separator", $4, {}); $$=createNode("IfThenStatement","",{n1,n2,$3,n4,$5});}                           
    ;

IfThenElseStatement
    : IF '(' Expression ')' StatementNoShortIf ELSE Statement  { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n4 = createNode("Separator", $4, {}); Node *n6 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenELseStatement","",{n1,n2,$3,n4,$5,n6,$7});}      
    ;

IfThenElseStatementNoShortIf
    : IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf    { Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n4 = createNode("Separator", $4, {}); Node *n6 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenElseStatementNoShortIf","",{n1,n2,$3,n4,$5,n6,$7});}    
    ;

WhileStatement
    : WHILE '(' Expression ')' Statement        {Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n4 = createNode("Separator", $4, {}); $$=createNode("WhileStatement","",{n1,n2,$3,n4,$5});}                              
    ;

WhileStatementNoShortIf
    : WHILE '(' Expression ')' StatementNoShortIf                {Node *n1 = createNode("KEYWORD", $1, {}); Node *n2 = createNode("Separator", $2, {}); Node *n4 = createNode("Separator", $4, {}); $$=createNode("WhileStatementNoShortIf","",{n1,n2,$3,n4,$5});}                 
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
    : FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' Statement   { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n4 = createNode("Separator", $4, {});Node *n6 = createNode("Separator", $6, {});Node *n8 = createNode("Separator", $8, {}); $$=createNode("BasicForStatement","",{n1,n2,$3,n4,$5,n6,$7,n8,$9}); }
    ;

SingleForInit
    :          {$$=createNode("singleForInit","",{});}
    | ForInit              {$$=$1;}
    ;

SingleExpression
    :           {$$=createNode("singleExpression","",{});}
    | Expression           {$$=$1;}
    ;

SingleForUpdate
    :           {$$=createNode("singleForUpdate","",{});}
    | ForUpdate            {$$=$1;}
    ;

BasicForStatementNoShortIf
    : FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' StatementNoShortIf    {Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n4 = createNode("Separator", $4, {});Node *n6 = createNode("Separator", $6, {});Node *n8 = createNode("Separator", $8, {});  $$=createNode("BasicForStatementNoShortIf","",{n1,n2,$3,n4,$5,n6,$7,n8,$9}); }
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
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement          { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n5 = createNode("Separator", $5, {});Node *n7 = createNode("Separator", $7, {}); $$=createNode("EnhancedForStatement","",{n1,n2,$3,$4,n5,$6,n7,$8}); }
    ;

EnhancedForStatementNoShortIf
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf       { Node *n1 = createNode("KEYWORD", $1, {});Node *n2 = createNode("Separator", $2, {});Node *n5 = createNode("Separator", $5, {});Node *n7 = createNode("Separator", $7, {});  $$=createNode("EnhancedForStatementNoShortIf","",{n1,n2,$3,$4,n5,$6,n7,$8});}
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

Primary
    : PrimaryNoNewArray                                                             {$$=$1;}
    | ArrayCreationExpression                                                       {$$=$1;}
    ;

PrimaryNoNewArray
    : Literal                                                                      {$$=$1;}
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

Literal 
    : BooleanLiteral  {$$=$1;}
    | IntegerLiteral  {$$=$1;}
    | CharacterLiteral {$$=$1;}
    | StringLiteral {$$=$1;}
    | NullLiteral  {$$=$1;}
    ;

BooleanLiteral 
        : TRUELITERAL {	
			string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "bool";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "TrueLiteral";
            $$->value = s1;
		}
		| FALSELITERAL { 	
			string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "bool";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "FalseLiteral";
            $$->value = s1;
		}
		;

IntegerLiteral 
        : INTEGERLITERAL{
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "int";
			$$->place = to_string($1);
			$$->isLit = true;
            $$->label = "IntegerLiteral";
            $$->value = to_string($1);
		}
		;

CharacterLiteral 
        : CHARACTERLITERAL	{
			string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "char";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "CharacterLiteral";
            $$->value = s1;
		}
		;

StringLiteral 
        : STRINGLITERAL	{
			string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "string";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "StringLiteral";
            $$->value = s1;
		}
		;

NullLiteral 
        :  NULLLITERAL	{
			string s1($1);
			Node* n1 = new Node();
			$$ = n1;
			$$->type = "null";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "NullLiteral";
            $$->value = s1;
		}
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
    | TypeName '.' UnqualifiedClassInstanceCreationExpression                          {Node *temp1 = createNode("Separator",$2,{});$$=createNode("CLASS_INSTANCE","",{$1,$3,temp1});}
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
    : TypeName '[' Expression ']'                          {Node *n2 = createNode("Separator",$2,{});Node *n4 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,n2,$3,n4});}
    | PrimaryNoNewArray '[' Expression ']'                                             {Node *n2 = createNode("Separator",$2,{});Node *n4 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,n2,$3,n4});}
    ;

MethodInvocation
    : IDENTIFIER '(' ArgumentList ')'                                                  {Node *temp = createNode("Identifier",$1,{});Node *temp1 = createNode("Separator",$2,{});Node *temp2 = createNode("Separator",$4,{});
                                                                                        $$=createNode("methodInvocation","",{temp,temp1,$3,temp2});}
    | IDENTIFIER '(' ')'                                                               {Node *temp = createNode("Identifier",$1,{});Node *temp2 = createNode("Separator",$2,{});Node *temp3 = createNode("Separator",$3,{});
                                                                                       
                                                                                        $$=createNode("methodInvocation","",{temp,temp2,temp3});}
    | TypeName '.' IDENTIFIER '(' ArgumentList ')'
                                                                                       {Node *temp3 = createNode("Identifier",$3,{});Node *temp2 = createNode("Separator",$2,{});Node *temp4 = createNode("Separator",$4,{});Node *temp6 = createNode("Separator",$6,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,$5,temp6});}
    | TypeName '.' IDENTIFIER '(' ')'
                                                                                        {Node *temp3 = createNode("Identifier",$3,{});Node *temp2= createNode("Separator",$2,{});Node *temp4= createNode("Separator",$4,{});Node *temp5 = createNode("Separator",$5,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,temp5});}
    | Primary '.' IDENTIFIER '(' ArgumentList ')'                                        {Node *temp3 = createNode("Identifier",$3,{});Node *temp2 = createNode("Separator",$2,{});Node *temp4 = createNode("Separator",$4,{});Node *temp6 = createNode("Separator",$6,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,$5,temp6});}
    | Primary '.' IDENTIFIER '(' ')'                                                    {Node *temp3 = createNode("Identifier",$3,{});Node *temp2= createNode("Separator",$2,{});Node *temp4= createNode("Separator",$4,{});Node *temp5 = createNode("Separator",$5,{});
                                                                                        $$ = createNode("methodInvocation","",{$1,temp2,temp3,temp4,temp5});}
   ;

ArgumentList
    : ArgumentList ',' Expression                                                      {Node *temp = createNode("Separator",$2,{}); $1->children.push_back(temp); $1->children.push_back($3);$$ = $1;}
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
   | NEW PrimitiveType Dims ArrayInitialize                                            {Node *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW TypeName Dims ArrayInitialize                          {Node *temp = createNode("KEYWORD",$1,{});
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
   | TypeName                                                                           {$$=$1;}
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

void dfs(Node* node, int node_num) {
    // Generate the label for the current node
    string temp;
    if (!node->value.empty() && (node->value)[0] == '"') {
        temp = "\\" + node->value.substr(0, node->value.size() - 1) + "\\\"";
    } else {
        temp = node->value;
    }
    string label = node->label + (node->value.empty() ? "" : ("__" + temp));
    // Generate the dot code for the current node
    cout << node_num << " [label=\"" << label << "\", shape=ellipse]" << endl;

    // Recursively generate the dot code for each child node
    for (auto child : node->children) {
        int child_num = ++counter;
        cout << node_num << " -> " << child_num << endl;
        dfs(child, child_num);
    }
}


void generateDotFile() {
    if (root == nullptr) {
        return;
    }

    cout << "digraph G {" << endl;
    cout << "  node [shape=ellipse, style=filled, fillcolor=white]" << endl;

    unordered_map<Node*, string> node_names;

    int node_counter = 0;
    function<string(Node*)> dfs = [&](Node* node) {
        if (node_names.count(node)) {
            return node_names[node];
        }

        string node_name = "node_" + to_string(node_counter++);
        node_names[node] = node_name;
        string temp;
        if ((node->value)[0] == '"') {
            temp = "\\" + node->value.substr(0, node->value.size() - 1) + "\\\"";
        } else {
            temp = node->value;
        }
        string node_label = node->value.empty() ? node->label : node->label + "__" + temp;
        cout << node_name << " [label=\"" << node_label << "\"]" << endl;

        for (auto child : node->children) {
            string child_name = dfs(child);
            cout << node_name << " -> " << child_name << endl;
        }

        return node_name;
    };

    dfs(root);

    cout << "}" << endl;
}





int main (void) {
    yyparse();

    // generateDotFile();

    ST->PrintTable(ST->curEnv);

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}