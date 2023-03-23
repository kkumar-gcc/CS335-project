%{

#include <bits/stdc++.h>
#include "genTAC.cpp"

using namespace std;

#define YYERROR_VERBOSE 1

void yyerror (const char *s);
extern "C" int yylex();
extern long long int line;

genNode *root = NULL;

genNode *createNode(string label, string value,vector <genNode *> children) {

    genNode *temp = new genNode();
    temp->value = value;
    temp->children = children;
    temp->label = label;
    
    return temp;
}

// SymTable* ST = new SymTable();
long long int line=1;
%}
%define parse.error verbose
%union{
    char *str;
    int ival;
    class genNode *node;
}

%start Start

%token <str> CONTINUE FOR CHAR FINAL STATIC VOID CLASS LONG CONST FLOAT WHILE FLOATINGPOINTLITERAL TRUELITERAL FALSELITERAL NULLLITERAL CHARACTERLITERAL IDENTIFIER STRINGLITERAL
%token <str> BOOLEAN PRIVATE IF PACKAGE THIS BREAK DOUBLE BYTE ELSE PUBLIC RETURN INT SHORT ABSTRACT
%token <ival> INTEGERLITERAL

%right <str> '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN UNSIGNED_RIGHT_ASSIGN '?' ':'
%left <str> OR_OP AND_OP '|' '^' '&' NE_OP EQ_OP LEFT_OP RIGHT_OP UNSIGNED_RIGHT_OP '+' '-' '*' '/' '%'
%nonassoc <str> '<' '>' GE_OP LE_OP INSTANCEOF
%right <str> NEW INC_OP DEC_OP '!' '~' '(' ')' '{' '}' '[' ']' '.' ',' ';' PROPORTION PTR_OP
%type <node> Literal BooleanLiteral NullLiteral StringLiteral IntegerLiteral CharacterLiteral Identifier
%type <node> CompilationUnit PackageDeclaration Start
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
%type <node> MemberName FormalParameterList FormalParameter
%type <node> ReceiverParameter MethodBody StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type <node> ExplicitConstructorInvocation Block BlockStatements BlockStatement LocalVariableDeclarationStatement LocalVariableDeclaration
%type <node> Statement StatementNoShortIf StatementWithoutTrailingSubstatement EmptyStatement LabeledStatement
%type <node> LabeledStatementNoShortIf ExpressionStatement StatementExpression IfThenStatement IfThenElseStatement
%type <node> IfThenElseStatementNoShortIf WhileStatement WhileStatementNoShortIf ForStatement ForStatementNoShortIf
%type <node> BasicForStatement SingleForInit SingleExpression SingleForUpdate BasicForStatementNoShortIf ForInit 
%type <node> ForUpdate StatementExpressionList EnhancedForStatement EnhancedForStatementNoShortIf BreakStatement

%%
Start : CompilationUnit { $$ = $1;
        printTAC($$);
      }
      ;
CompilationUnit : 
        PackageDeclaration MULTI_TypeDeclaration {
            $$ = $2;
        }
        | MULTI_TypeDeclaration { $$ = $1; }
        | PackageDeclaration { $$ = $1; }
        |  { $$ = NULL ; }
        ;
PackageDeclaration :
        PACKAGE TypeName ';' { $$ = $2;}
        ;
MULTI_TypeDeclaration :
       TypeDeclaration  { $$ = $1; }
       | MULTI_TypeDeclaration TypeDeclaration { $$ = $1; }
      ;
TypeDeclaration :
      ClassDeclaration {$$ = $1;}
      | ';' { $$=NULL; }
      ;

TypeName  
        : Identifier{	
            $$=$1;
        }
        | TypeName '.' Identifier   { $$ = $1; }
        ;                             
Identifier 
    : IDENTIFIER   { 
        string s1($1);
		Symbol* sym = ST->GetVar("_" + s1);
					
		if(sym == NULL){
			sym = ST->AddVar(s1,"None","simple",-1,"Identifier",line);
        }
        else{
            sym->line.push_back(line); 
        }
        genNode* n1 = new genNode();
                    
		n1->place = sym->name;
        n1->type= sym->type;
        n1->value = $1;
        n1->label="Identifier";
		$$ = n1;
    }
    ;
Type
    : PrimitiveType             { $$ = $1; }
    | ReferenceType             { $$ = $1; }
    ;

PrimitiveType
    : NumericType               { $$ = $1; }
    | BOOLEAN                   {
        genNode * n1 = new genNode();
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
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "byte";
        $$->type = "byte";
        $$->label = "Keyword";
        $$->value = $1;
    }
    | SHORT                     {  
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "short";
        $$->type = "short";
        $$->label = "Keyword";
        $$->value = $1; 
    }
    | INT                       { 
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "int";
        $$->type = "int";
        $$->label = "Keyword";
        $$->value = $1; 
    }
    | LONG                      {
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "long";
        $$->type = "long";
        $$->label = "Keyword";
        $$->value = $1; 
    }
    | CHAR                      {
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "char";
        $$->type = "char";
        $$->label = "char";
        $$->value = $1; 
    }
    ;

FloatingPointType
    : FLOAT                     {  
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "float";
        $$->type = "float";
        $$->label = "Keyword";
        $$->value = $1; }
    | DOUBLE  { 
        genNode * n1 = new genNode();
        $$ = n1;
        $$->place = "double";
        $$->type = "double";
        $$->label = "Keyword";
        $$->value = $1;
    }
    ;

ReferenceType 
   : TypeName   { $$ = $1; }
   | ArrayType  { $$ = $1; }
   ;
ArrayType 
    : PrimitiveType Dims { 
        genNode *n1 = new genNode();
		$$ = n1;
		$$->type=$1->type;
		$$->place=$1->place;
		$$->isArray = true;
    }
    | TypeName Dims { 
        genNode *n1 = new genNode();
		$$ = n1;
		$$->type=$1->type;
		$$->place=$1->place;
		$$->isArray = true;
    }
     ;
Dims :
    Dims '[' ']'  {
         $$ = $1;
   }
   | '[' ']' {

   } 
   ;

ArrayInitialize
    : '{' VariableInitializerList ',' '}'  { 
        $$ = $2;
		$$->isArray = true;
    }
    | '{' VariableInitializerList '}'  {
        $$ = $2;
		$$->isArray = true; 
    }
    | '{' ',' '}' { 
    }
    | '{' '}' {
        genNode* newNode = new genNode();
		$$ = newNode;
		$$->isArray = true;
		$$->nodeLen = 0;
    }
    ;

VariableInitializerList
    : VariableInitializer  {
        if($1->isArray){
			cerr << "Incorrect array initialisation at line: " << line;
			exit(1);
		}
		Symbol* temp =  ST->GetVar(ST->GenTemp());
		TAC* tac = new TAC();
		tac->op = "=";
		tac->dest = temp;
		$$->code = $1->code;
		if($1->isLit){
			tac->isInt1 = true;
			tac->l1 = $1->place;
		}
		else{
			if(!($1->isLit) && ST->GetVar($1->place)->type == "None"){
				cerr << "Symbol " << $1->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac->opd1 = ST->GetVar($1->place);
		}
		$$->varDecs.pb(tac->dest);
		$$->code.pb(tac);             
    }
    | VariableInitializerList ',' VariableInitializer      { 
        if($3->isArray){
			cerr << "Incorrect array initialisation at line: " << line;
			exit(1);
		}
		$$ = $1;
		Symbol* temp =  ST->GetVar(ST->GenTemp());
		TAC* tac = new TAC();
		tac->op = "=";
		tac->dest = temp;
		if($3->isLit){
			tac->isInt1 = true;
			tac->l1 = $3->place;
		}
		else{
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac->opd1 = ST->GetVar($3->place);
		}
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		$$->varDecs.pb(tac->dest);
		$$->code.pb(tac);
     }
    ;

ClassDeclaration :
     NormalClassDeclaration  { $$ = $1; }
     ;
     
NormalClassDeclaration 
    : MULTI_ClassModifier CLASS Identifier ClassBody  {
        ST->curEnv->type = "CLASSTYPE";
        $$ = $3;
        $$->type = "class";
		$$->code.pb(genLabelTAC($3->place));
		$$->code.insert($$->code.end(), $4->code.begin(), $4->code.end());
		ST->curEnv->name = $3->place;
		ST->EndScope();
    }
    | CLASS Identifier ClassBody { //TODO : Check Type of Class
        ST->curEnv->type = "CLASSTYPE";
        $$ = $2;
        $$->type = "class";
		$$->code.pb(genLabelTAC($2->place));
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		ST->curEnv->name = $2->place;
		ST->EndScope();
    }  
    ;
ClassBody 
    : '{' MULTI_ClassBodyDeclaration '}'  {
            ST->curEnv->type = "CLASSTYPE";
			$$ = $2; 
            $$->type = "class";
    } 
    | '{' '}'   {
        	ST->curEnv->type = "CLASSTYPE";
			genNode* n = new genNode();
			$$ = n; 
            $$->type = "class";
    }
    ;
MULTI_ClassBodyDeclaration 
     : ClassBodyDeclaration {$$=$1;}
     | MULTI_ClassBodyDeclaration ClassBodyDeclaration { 
        $$ = $1;
        $$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());
     }
     ;
ClassBodyDeclaration 
     : ClassMemberDeclaration   { $$ = $1; } // TODO: Here 
     | StaticInitializer         { $$ = $1; } // TODO: Here 
     | ConstructorDeclaration    { $$ = $1; }
     ;

ClassMemberDeclaration 
     : FieldDeclaration   { $$ = $1; }
     | MethodDeclaration   { $$ = $1; }
     | ClassDeclaration    { $$ = $1; }
     | ';' {
        $$=NULL;
     }
     ;



FieldDeclaration
    : MULTI_ClassModifier Type VariableDeclaratorList ';' {
        $$=$3;
        $$->type=$2->place;
    }
    | Type VariableDeclaratorList ';' {
        $$=$2;
        $$->type=$1->place;
    }
    ;
MULTI_ClassModifier 
    : ClassModifier {$$=$1;}
    | MULTI_ClassModifier ClassModifier  { $$ = $1; }
    ;

ClassModifier 
    : PUBLIC { 			
            string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | PRIVATE {		
            string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | STATIC {		
            string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | FINAL {		
            string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    | ABSTRACT { 		
            string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->place = s1;
            $$->label = "Keyword";
            $$->value = s1;
        }
    ;
  
VariableDeclaratorList  //TODO : NEED SOME CHANGES
    : VariableDeclaratorList ',' VariableDeclarator  {
        $$ = $1;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		if($3->isArray){
			if($1->type == "None")
				$$->type = $3->type;
			else 
				if($1->type != $3->type){
					cerr << "Incompatible types in declaration at line: " << line << endl;
					exit(1);
				}
		}
		Symbol* sym = ST->GetVar($3->place);
		$$->varDecs.pb(sym);
    }
    | VariableDeclarator {
        	$$ = $1; 
			Symbol* sym = ST->GetVar($1->place);
			$$->varDecs.pb(sym);
    }
    ;

VariableDeclarator 
    : VariableDeclaratorId '=' VariableInitializer {
        genNode* n1 = new genNode();
		$$ = n1;
		$$->code = $3->code;
			
		$$->place = $1->place;
			
		TAC* tac1 = new TAC();
		Symbol* sym;
			
		sym = ST->GetVar($1->place);
		if(sym->type != "None"){
			cerr << "Error: Symbol "<< $1->place <<" is already defined. Redefinition at line num: " << line << endl;
			exit(1);
		}
		tac1->dest = sym;
		tac1->op = "=";

		if($3->isLit == true){
			tac1->isInt1 = true;
			tac1->l1 = $3->place;
			$$->code.pb(tac1);
		}
		else if($3->isArray){

			sym->baseType = "array";
			sym->type = $3->type;
			$$->isArray = true;
			for(int i=0; i<$3->varDecs.size(); i++){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = $1->place;
				tac->opd2 = $3->varDecs[i];
				tac->isInt1 = true;
				tac->l1 = convertNumToString(i);
				$$->code.pb(tac);
			}
			$$->varDecs.clear();
		}
		else{
			Symbol* sym_ = ST->GetVar($3->place);
			tac1->opd1 = sym_;
			sym -> baseType = sym_->baseType;
			$$->code.pb(tac1);
		}
    } 
    | VariableDeclaratorId {$$=$1;}
    ;   
VariableDeclaratorId 
    : Identifier Dims {
        $$ = $1; 
    } 
    | Identifier  {
        $$ = $1;
    }
    ;

VariableInitializer
   : Expression { $$=$1;}
   | ArrayInitialize { $$=$1;}
   ;


MethodDeclaration
    : MULTI_ClassModifier MethodHeader MethodBody     {
        $$ = $2;
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());	
        ST->curEnv->type = $2->place;	
		ST->EndScope();
    }     
    | MethodHeader MethodBody                       {
        $$ = $1;
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		$$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());	
         ST->curEnv->type = $1->place;	
		ST->EndScope();
    }     
    ;

MethodHeader
    : Type MemberName'(' FormalParameterList ')'      { 
        $$ = $2;
		ST->curEnv->returnType = $1->place;
		ST->curEnv->name = $2->place;
        ST->curEnv->type = $1->place;
        $$->code = $4->code;
    }
    | Type MemberName '(' ')'        { 
        $$ = $2;
		ST->curEnv->returnType = $1->place;
		ST->curEnv->name = $2->place;
    }
    | Type MemberName '(' FormalParameterList ')' Dims        { 
        $$ = $2;
		ST->curEnv->returnType = $1->place;
		ST->curEnv->name = $2->place;
		$$->code = $4->code;
    }
    | Type MemberName '(' ')' Dims         { 
        $$ = $2;
		ST->curEnv->returnType = $1->place;
		ST->curEnv->name = $2->place;
    }
    | VOID MemberName '(' FormalParameterList ')'          { 
        $$ = $2;
		ST->curEnv->name = $2->place;
		$$->code = $4->code;
    }
    | VOID MemberName '(' ')'         { 
        $$ = $2;
		ST->curEnv->name = $2->place;
    }
    | VOID MemberName '(' FormalParameterList ')' Dims        { 
        $$ = $2;
		ST->curEnv->name = $2->place;
		$$->code = $4->code;
    }
    | VOID MemberName '(' ')' Dims         { 
        $$ = $2;
		ST->curEnv->name = $2->place;
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
    : ReceiverParameter                              { $$=$1; }
    | FormalParameterList ',' FormalParameter       {
        $$ = $3;
		$$->code.insert($$->code.end(), $1->code.begin(), $1->code.end());
    }
    | FormalParameter                         { $$ = $1; }
    ;

FormalParameter  //TODO : NEED SOME MODIFICATION IN FORMAL PARAMETER
    : FINAL Type VariableDeclaratorId               {
        $$ = $3; 

		ST->curEnv->argTypeList.pb($2->place);
		ST->curEnv->argNum ++;

		$$->type = $2->place;

		TAC* tac = new TAC();
		tac->op = "readParam";
		tac->target = $3->place;

		$$->code.clear();
		$$->code.pb(tac);
    }
    | Type VariableDeclaratorId {
        $$ = $2; 
		Symbol* sym = ST->GetVar($2->place);
		sym->type = $1->place;
		$$->type = $1->place;
		ST->curEnv->argNum ++;

		TAC* tac = new TAC();
		tac->op = "readParam";
		tac->target = $2->place;

		$$->code.clear();
		$$->code.pb(tac);
    }
    ;


ReceiverParameter
    : Type THIS                                     {
        $$ = $1;
    }
    | Type Identifier '.' THIS                      {
          $$ = $2;
    }
    ;

MethodBody
    : Block                                         {$$ = $1; }
    | ';'                                           {$$ = NULL; }
    ;
StaticInitializer
    : STATIC Block                                  {
        $$ = $2;
     } 
    ;

ConstructorDeclaration
    : MULTI_ClassModifier ConstructorDeclarator ConstructorBody     { 
        $$ = $2;
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());	
        ST->curEnv->type = $2->place;	
		ST->EndScope(); 
    }
    | ConstructorDeclarator ConstructorBody  { 
        $$ = $1;
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		$$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());	
        ST->curEnv->type = $1->place;	
		ST->EndScope();
    }
    ;

ConstructorDeclarator
    : Identifier '(' FormalParameterList ')' { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        $$ = $1;
		ST->curEnv->name = $1->place;
        $$->code = $3->code;
    }
    | Identifier '(' ')'   { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        $$ = $1;
		ST->curEnv->name = $1->place;
    }
    ;

ConstructorBody
    : '{' ExplicitConstructorInvocation BlockStatements '}'                { genNode *n1 = createNode("Separator", $1, {});genNode *n4= createNode("Separator", $4, {});$$ = createNode("ConstructorBody","",{n1,$2,$3,n4}); }
    | '{' BlockStatements '}'                                              { genNode *n1 = createNode("Separator", $1, {});genNode *n3= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,$2,n3}); }
    | '{' ExplicitConstructorInvocation '}'                                { genNode *n1 = createNode("Separator", $1, {});genNode *n3= createNode("Separator", $3, {});$$ = createNode("ConstructorBody","",{n1,$2,n3}); }
    | '{' '}'                                                              { genNode *n1 = createNode("Separator", $1, {});genNode *n2= createNode("Separator", $2, {});$$ = createNode("ConstructorBody","",{n1,n2}); }
    ;

ExplicitConstructorInvocation
    : THIS SINGLE_ArgumentList                                             { genNode * n1 = createNode("KEYWORD", $1, {});$$ = createNode("ExplicitConstructorInvocation","", {n1,$2}); }
    ;

SINGLE_ArgumentList
    : '(' ')' ';'                                      { genNode *n1 = createNode("Separator", $1, {});genNode *n2 = createNode("Separator", $2, {});genNode *n3 = createNode("Separator", $3, {});$$ = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
    | '(' ArgumentList ')' ';'                         { genNode *n1 = createNode("Separator", $1, {});genNode *n3 = createNode("Separator", $3, {});genNode *n4 = createNode("Separator", $4, {});$$ = createNode("SINGLE_ArgumentList","",{n1,$2,n3,n4});  }
    ;

Block
    : '{' BlockStatements '}'                { ST->BeginScope();   $$ = $2; ST->EndScope(); }
    | '{' '}'                                { ST->BeginScope();   $$ = NULL; ST->EndScope();}
    ;

BlockStatements
    : BlockStatement                         { $$ = $1; }
    | BlockStatements BlockStatement         { 
        $$ = $1;
		$$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());
    }
    ;

BlockStatement
    : LocalVariableDeclarationStatement      { $$ = $1; } /*done */
    | ClassDeclaration                       { $$ = $1; } /*done */
    | Statement                              { $$ = $1; } 
    ;

LocalVariableDeclarationStatement
    : LocalVariableDeclaration ';'           { 
        $$ = $1;
    }
    ;

LocalVariableDeclaration
    : Type VariableDeclaratorList            { 
        if($2->type != "None" && equal_compatible($2->type, $1->type) == "None"){
			cerr << "Incompatible types in declaration at line: " << line << endl;
			exit(1);
		}
		$$ = $2;
		string typeName = $1->place;
		int siz = $$->varDecs.size();
		fori(0, siz){
			($$->varDecs)[i]->type = typeName;
		}
		$$->type = typeName;
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
    : ';'                                    {  }
    ;

LabeledStatement
    : Identifier ':' Statement               { 
        $$ = $1;
        $$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
    }
    ;

LabeledStatementNoShortIf
    : Identifier ':' StatementNoShortIf       { 
        $$ = $1;
        $$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
    }
    ;

ExpressionStatement
    : StatementExpression ';'                 { genNode *n2 = createNode("Separator", $2, {});$$ = createNode("ExpressionStatement","",{$1,n2}); }
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
    : IF '(' Expression ')' Statement     { genNode *n1 = createNode("KEYWORD", $1, {}); genNode *n2 = createNode("Separator", $2, {}); genNode *n4 = createNode("Separator", $4, {}); $$=createNode("IfThenStatement","",{n1,n2,$3,n4,$5});}                           
    ;

IfThenElseStatement
    : IF '(' Expression ')' StatementNoShortIf ELSE Statement  { genNode *n1 = createNode("KEYWORD", $1, {}); genNode *n2 = createNode("Separator", $2, {}); genNode *n4 = createNode("Separator", $4, {}); genNode *n6 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenELseStatement","",{n1,n2,$3,n4,$5,n6,$7});}      
    ;

IfThenElseStatementNoShortIf
    : IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf    { genNode *n1 = createNode("KEYWORD", $1, {}); genNode *n2 = createNode("Separator", $2, {}); genNode *n4 = createNode("Separator", $4, {}); genNode *n6 = createNode("KEYWORD", $6, {}); $$=createNode("IfThenElseStatementNoShortIf","",{n1,n2,$3,n4,$5,n6,$7});}    
    ;

WhileStatement
    : WHILE '(' Expression ')' Statement        {genNode *n1 = createNode("KEYWORD", $1, {}); genNode *n2 = createNode("Separator", $2, {}); genNode *n4 = createNode("Separator", $4, {}); $$=createNode("WhileStatement","",{n1,n2,$3,n4,$5});}                              
    ;

WhileStatementNoShortIf
    : WHILE '(' Expression ')' StatementNoShortIf                {genNode *n1 = createNode("KEYWORD", $1, {}); genNode *n2 = createNode("Separator", $2, {}); genNode *n4 = createNode("Separator", $4, {}); $$=createNode("WhileStatementNoShortIf","",{n1,n2,$3,n4,$5});}                 
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
    : FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' Statement   { genNode *n1 = createNode("KEYWORD", $1, {});genNode *n2 = createNode("Separator", $2, {});genNode *n4 = createNode("Separator", $4, {});genNode *n6 = createNode("Separator", $6, {});genNode *n8 = createNode("Separator", $8, {}); $$=createNode("BasicForStatement","",{n1,n2,$3,n4,$5,n6,$7,n8,$9}); }
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
    : FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' StatementNoShortIf    {genNode *n1 = createNode("KEYWORD", $1, {});genNode *n2 = createNode("Separator", $2, {});genNode *n4 = createNode("Separator", $4, {});genNode *n6 = createNode("Separator", $6, {});genNode *n8 = createNode("Separator", $8, {});  $$=createNode("BasicForStatementNoShortIf","",{n1,n2,$3,n4,$5,n6,$7,n8,$9}); }
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
    | StatementExpressionList ',' StatementExpression   {$$ = $1; $$->children.push_back($3);genNode *temp1=createNode("Separator",$2,{});$$->children.push_back(temp1);}
    ;

EnhancedForStatement
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement          { genNode *n1 = createNode("KEYWORD", $1, {});genNode *n2 = createNode("Separator", $2, {});genNode *n5 = createNode("Separator", $5, {});genNode *n7 = createNode("Separator", $7, {}); $$=createNode("EnhancedForStatement","",{n1,n2,$3,$4,n5,$6,n7,$8}); }
    ;

EnhancedForStatementNoShortIf
    : FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf       { genNode *n1 = createNode("KEYWORD", $1, {});genNode *n2 = createNode("Separator", $2, {});genNode *n5 = createNode("Separator", $5, {});genNode *n7 = createNode("Separator", $7, {});  $$=createNode("EnhancedForStatementNoShortIf","",{n1,n2,$3,$4,n5,$6,n7,$8});}
    ;

BreakStatement
    : BREAK IDENTIFIER ';'        {genNode* n1=createNode("Keyword",$1,{});genNode* n2=createNode("Identifier",$2,{});genNode* n3=createNode("Separator",$3,{});$$=createNode("BreakStatement","",{n1,n2,n3});}
    | BREAK ';'                   {genNode* n1=createNode("Keyword",$1,{}); genNode* n2=createNode("Separator",$2,{});$$=createNode("BreakStatement","",{n1,n2});}
    ;

ContinueStatement
    : CONTINUE IDENTIFIER ';'     {genNode* n1=createNode("Keyword",$1,{});genNode* n2=createNode("Identifier",$2,{});genNode* n3=createNode("Separator",$3,{});$$=createNode("ContinueStatement","",{n1,n2,n3});}
    | CONTINUE ';'                {genNode* n1=createNode("Keyword",$1,{}); genNode* n2=createNode("Separator",$2,{});$$=createNode("ContinueStatement","",{n1,n2});}
    ;

ReturnStatement
    : RETURN Expression ';'       {genNode* n1=createNode("Keyword",$1,{});genNode* n3=createNode("Separator",$3,{});$$=createNode("BreakStatement","",{n1,$2,n3});}
    | RETURN ';'                  {genNode* n1=createNode("Keyword",$1,{}); genNode* n2=createNode("Separator",$2,{});$$=createNode("BreakStatement","",{n1,n2});}
    ;

Primary
    : PrimaryNoNewArray                                                             {$$=$1;}
    | ArrayCreationExpression                                                       {$$=$1;}
    ;

PrimaryNoNewArray
    : Literal                                                                      {$$=$1;}
    | ClassLiteral                                                                  {$$=$1;}
    | THIS                                                                          {$$=createNode("KEYWORD",$1,{});}
    | TypeName '.' THIS                                                             {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp1 = createNode("Separator",$2,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$1,temp,temp1});}                                                             
    | '(' Expression ')'                                                            {//genNode *temp = createNode("Separator",$3,{});genNode *temp1 = createNode("Separator",$1,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$2,temp,temp1});
                                                                                       $$ = $2; }     
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
			genNode* n1 = new genNode();
			$$ = n1;
			$$->type = "bool";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "TrueLiteral";
            $$->value = s1;
		}
		| FALSELITERAL { 	
			string s1($1);
			genNode* n1 = new genNode();
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
			genNode* n1 = new genNode();
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
			genNode* n1 = new genNode();
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
			genNode* n1 = new genNode();
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
			genNode* n1 = new genNode();
			$$ = n1;
			$$->type = "null";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "NullLiteral";
            $$->value = s1;
		}
		;



ClassLiteral
    : TypeName Dims '.' CLASS                                                       {genNode *temp = createNode("KEYWORD",$4,{});genNode *temp1 = createNode("Separator",$3,{});
                                                                                      $$ = createNode("CLASS_LITERAL","",{$1,$2,temp,temp1});}
    | TypeName '.' CLASS                                                            {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp1 = createNode("Separator",$2,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp,temp1});}
    | PrimitiveType Dims '.' CLASS                                                  {genNode *temp = createNode("KEYWORD",$4,{});genNode *temp1 = createNode("Separator",$3,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,$2,temp,temp1});}
    | PrimitiveType '.' CLASS                                                   {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp1 = createNode("Separator",$2,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{$1,temp,temp1});}
    | VOID '.' CLASS                                                                {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp2= createNode("Separator",$2,{});
                                                                                     genNode *temp1 = createNode("KEYWORD",$1,{});
                                                                                     $$ = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
    ;

ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression                                         {$$=$1;}
    | TypeName '.' UnqualifiedClassInstanceCreationExpression                          {genNode *temp1 = createNode("Separator",$2,{});$$=createNode("CLASS_INSTANCE","",{$1,$3,temp1});}
    | Primary '.' UnqualifiedClassInstanceCreationExpression                             {genNode *temp1 = createNode("Separator",$2,{});$$=createNode("CLASS_INSTANCE","",{$1,$3,temp1});}
    ;

UnqualifiedClassInstanceCreationExpression
    : NEW TypeName '(' ArgumentList ')'                                                 {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                        genNode *temp1 = createNode("Separator",$3,{});genNode *temp2 = createNode("Separator",$5,{});$$ = createNode("unqualifiedClassInstance","",{temp,$2,$4,temp1,temp2});}
    | NEW TypeName '(' ArgumentList ')' ClassBody                                       {genNode *temp = createNode("KEYWORD",$1,{});genNode *temp1 = createNode("Separator",$3,{});genNode *temp2= createNode("Separator",$5,{});
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,$4,$6,temp1,temp2});}
    | NEW TypeName '(' ')' ClassBody                                                    {genNode *temp = createNode("KEYWORD",$1,{});genNode *temp1 = createNode("Separator",$3,{});genNode *temp2 = createNode("Separator",$4,{});
                            
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,temp1,$5,temp2});}
    | NEW TypeName '(' ')'                                                              {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                        genNode *temp1 = createNode("Separator",$3,{});genNode *temp2 = createNode("Separator",$4,{});
                                                                                        $$ = createNode("unqualifiedClassInstance","",{temp,$2,temp1,temp2});}
    

FieldAccess
    : Primary '.' IDENTIFIER                                                           {genNode *temp = createNode("Identifier",$3,{});genNode *temp1 = createNode("Separator",$2,{});
                                                                                        $$ = createNode("FIELDACC","",{$1,temp,temp1});}
    ;

ArrayAccess
    : TypeName '[' Expression ']'                          {genNode *n2 = createNode("Separator",$2,{});genNode *n4 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,n2,$3,n4});}
    | PrimaryNoNewArray '[' Expression ']'                                             {genNode *n2 = createNode("Separator",$2,{});genNode *n4 = createNode("Separator",$4,{});$$=createNode("ARRAY","",{$1,n2,$3,n4});}
    ;

MethodInvocation
    : IDENTIFIER '(' ArgumentList ')'                                                  {genNode *temp = createNode("Identifier",$1,{});genNode *temp1 = createNode("Separator",$2,{});genNode *temp2 = createNode("Separator",$4,{});
                                                                                        $$=createNode("methodInvocation","",{temp,temp1,$3,temp2});}
    | IDENTIFIER '(' ')'                                                               {genNode *temp = createNode("Identifier",$1,{});genNode *temp2 = createNode("Separator",$2,{});genNode *temp3 = createNode("Separator",$3,{});
                                                                                       
                                                                                        $$=createNode("methodInvocation","",{temp,temp2,temp3});}
    | TypeName '.' IDENTIFIER '(' ArgumentList ')'
                                                                                       {genNode *temp3 = createNode("Identifier",$3,{});genNode *temp2 = createNode("Separator",$2,{});genNode *temp4 = createNode("Separator",$4,{});genNode *temp6 = createNode("Separator",$6,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,$5,temp6});}
    | TypeName '.' IDENTIFIER '(' ')'
                                                                                        {genNode *temp3 = createNode("Identifier",$3,{});genNode *temp2= createNode("Separator",$2,{});genNode *temp4= createNode("Separator",$4,{});genNode *temp5 = createNode("Separator",$5,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,temp5});}
    | Primary '.' IDENTIFIER '(' ArgumentList ')'                                        {genNode *temp3 = createNode("Identifier",$3,{});genNode *temp2 = createNode("Separator",$2,{});genNode *temp4 = createNode("Separator",$4,{});genNode *temp6 = createNode("Separator",$6,{});
                                                                                        $$=createNode("methodInvocation","",{$1,temp2,temp3,temp4,$5,temp6});}
    | Primary '.' IDENTIFIER '(' ')'                                                    {genNode *temp3 = createNode("Identifier",$3,{});genNode *temp2= createNode("Separator",$2,{});genNode *temp4= createNode("Separator",$4,{});genNode *temp5 = createNode("Separator",$5,{});
                                                                                        $$ = createNode("methodInvocation","",{$1,temp2,temp3,temp4,temp5});}
   ;

ArgumentList
    : ArgumentList ',' Expression                                                      {genNode *temp = createNode("Separator",$2,{}); $1->children.push_back(temp); $1->children.push_back($3);$$ = $1;}
    | Expression                                                                       {$$ = createNode("ARGLIST","", {$1}); }
    ;

MethodReference
   : TypeName PROPORTION IDENTIFIER          {genNode *temp = createNode("Identifier",$3,{});genNode *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | ArrayType PROPORTION IDENTIFIER                                                    {genNode *temp = createNode("Identifier",$3,{});genNode *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | Primary PROPORTION IDENTIFIER                                                      {genNode *temp = createNode("Identifier",$3,{});genNode *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   |  TypeName PROPORTION NEW                                     {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   | ArrayType PROPORTION NEW                                                           {genNode *temp = createNode("KEYWORD",$3,{});genNode *temp1 = createNode("KEYWORD",$2,{});
                                                                                         $$ = createNode("METHOD_REF","",{$1,temp,temp1});}
   ;

ArrayCreationExpression
   : NEW PrimitiveType DimExprs Dims                                                    {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW PrimitiveType DimExprs                                                         {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});}                                      
   | NEW TypeName DimExprs Dims                                  {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW TypeName DimExprs                                       {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3});}
   | NEW PrimitiveType Dims ArrayInitialize                                            {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   | NEW TypeName Dims ArrayInitialize                          {genNode *temp = createNode("KEYWORD",$1,{});
                                                                                         $$ = createNode("ARRAY_CREATION","",{temp,$2,$3,$4});}
   ;

DimExprs
   : DimExpr                                                                            {$$ = createNode("DIMEXPR","", {$1}); }
   | DimExprs DimExpr                                                                   {$1->children.push_back($2); $$ = $1; }
   ;

DimExpr
   : '[' Expression ']'                                                                 {genNode *temp2=createNode("Separator",$1,{});genNode *temp1=createNode("Separator",$3,{});$$ = createNode("DimExpr","", {temp1,temp2,$2});}
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
   | ConditionalOrExpression '?' Expression ':' ConditionalExpression                   {
    	genNode* newNode = new genNode();
		$$ = newNode;
		getCECode($$, $1, $3, $5, line);
   }
   ;

ConditionalOrExpression
    : ConditionalAndExpression                                                          {$$=$1;}
   | ConditionalOrExpression OR_OP ConditionalAndExpression                             {
    	genNode* n= new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "||", $1, $3, line);
   }
   ;

ConditionalAndExpression
   : InclusiveOrExpression                                                              {$$=$1;}                                                                                                                                                                                                                           
   | ConditionalAndExpression AND_OP InclusiveOrExpression                              {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "&&", $1, $3, line);
   }                                                                                                                                                               
   ;

InclusiveOrExpression
   : ExclusiveOrExpression                                                              {$$=$1;}                                        
   | InclusiveOrExpression '|' ExclusiveOrExpression                                    {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "|", $1, $3, line);
   }                                                                        
   ;

ExclusiveOrExpression
   : AndExpression                                                                      {$$=$1;}                              
   | ExclusiveOrExpression '^' AndExpression                                            {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "^", $1, $3, line);
   }                                                               
   ;

AndExpression
   : EqualityExpression                                                                 {$$=$1;}                                  
   | AndExpression '&' EqualityExpression                                               {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "&", $1, $3, line);
   }                                                           
   ;

EqualityExpression
   : RelationalExpression                                                               {$$=$1;}
   | EqualityExpression EQ_OP RelationalExpression                                      {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "==", $1, $3, line);
    }
   | EqualityExpression NE_OP RelationalExpression                                      {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "!=", $1, $3, line);
    }
   ;

RelationalExpression
   : ShiftExpression                                                                    {$$=$1;}
   | RelationalExpression '<' ShiftExpression                                           {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "<", $1, $3, line);
   }
   | RelationalExpression '>' ShiftExpression                                           {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, ">", $1, $3, line);
    }
   | RelationalExpression LE_OP ShiftExpression                                         {
    	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "<=", $1, $3, line);
   }
   | RelationalExpression GE_OP ShiftExpression                                         {
     	genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, ">=", $1, $3, line);
    }
//    | RelationalExpression INSTANCEOF ReferenceType                                      {$$=createNode("operator",$2,{$1,$3});} //TODO: CHECK HERE FOR INSTANCEOF OP
   ;

ShiftExpression
   : AdditiveExpression                                                                 {$$=$1;}
   | ShiftExpression LEFT_OP  AdditiveExpression                                        {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "<<", $1, $3, line);
    }
   | ShiftExpression RIGHT_OP AdditiveExpression                                        {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, ">>", $1, $3, line);
   }
//    | ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression                               {$$=createNode("operator",$2,{$1,$3});} //TODO: CHECK HERE FOR UNSIGNED RIGHT OP
   ;

AdditiveExpression
   : MultiplicativeExpression                                                           {$$=$1;}
   | AdditiveExpression '+' MultiplicativeExpression                                    {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "+", $1, $3, line);
    }
   | AdditiveExpression '-' MultiplicativeExpression                                    {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "-", $1, $3, line);
    }
   ;

MultiplicativeExpression
   : UnaryExpression                                                                    {$$=$1;}
   | MultiplicativeExpression '*' UnaryExpression                                       {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "*", $1, $3, line);
    }                 
   | MultiplicativeExpression '/' UnaryExpression                                       {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "/", $1, $3, line);
    }
   | MultiplicativeExpression '%' UnaryExpression                                       {
        genNode* n = new genNode();
		$$ = n;
		$$->code = $1->code;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		gen2OpCode($$, "%", $1, $3, line);
    }
   ;

UnaryExpression
   : PreIncrementExpression                                                             {$$=$1;}
   | PreDecrementExpression                                                             {$$=$1;}
   | '+' UnaryExpression                                                                {
       $$ = $2;
   }
   | '-' UnaryExpression                                                                {
    	genNode* n = new genNode();
		$$ = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode($$, "-", zeroNode, $2, line);
   }
   | UnaryExpressionNotPlusMinus                                                        {$$=$1;}
   ;

PreIncrementExpression
   : INC_OP UnaryExpression                                                             {
    	$$ = $2;
		getPreUnaryOpCode("++", $$, $2, line);
   }
   ;

PreDecrementExpression
   : DEC_OP UnaryExpression                                                             {
    	$$ = $2;
		getPreUnaryOpCode("--", $$, $2, line);
   }
   ;

UnaryExpressionNotPlusMinus
   : PostfixExpression                                                                  {$$=$1;}
   | '~' UnaryExpression                                                                {
   }
   | '!' UnaryExpression                                                                {

   }
   | CastExpression                                                                     {$$=$1;}
   ;

PostfixExpression
   : Primary                                                                            {$$=$1;}
   | TypeName                                                                           {$$=$1;}
   | PostIncrementExpression                                                            {$$=$1;}
   | PostDecrementExpression                                                            {$$=$1;}
   ;

PostIncrementExpression
   : PostfixExpression INC_OP                                                           {
        // $$ = $1;
		// getPreUnaryOpCode("--", $$, $2, line);
   }
   ;

PostDecrementExpression
   : PostfixExpression DEC_OP                                                           {
    // genNode * temp = createNode("operator",$2,{});
    //                                                                                      $$=createNode("unaryOperator","",{$1,temp});
   }
   ;

CastExpression
   : '(' PrimitiveType ')' UnaryExpression                                              {

   }
   ;




%%

int main (void) {
    yyparse();

    // generateDotFile();
    cout<< "\n\n\n";
    ST->PrintTable(ST->baseEnv);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}