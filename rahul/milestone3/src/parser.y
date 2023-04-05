%{

#include <bits/stdc++.h>
#include "genTAC.cpp"
#define YYDEFUG 1
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
%nonassoc IFX
%nonassoc ELSE


%start Start

%token <str> CONTINUE FOR CHAR FINAL STATIC VOID CLASS LONG CONST FLOAT WHILE FLOATINGPOINTLITERAL TRUELITERAL FALSELITERAL NULLLITERAL CHARACTERLITERAL IDENTIFIER STRINGLITERAL
%token <str> BOOLEAN PRIVATE IF PACKAGE THIS BREAK DOUBLE BYTE ELSE PUBLIC RETURN INT SHORT ABSTRACT
%token <ival> INTEGERLITERAL

%right <str> '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN UNSIGNED_RIGHT_ASSIGN '?' ':'
%left <str> OR_OP AND_OP '|' '^' '&' NE_OP EQ_OP LEFT_OP RIGHT_OP UNSIGNED_RIGHT_OP '+' '-' '*' '/' '%'
%nonassoc <str> '<' '>' GE_OP LE_OP INSTANCEOF
%right <str> NEW INC_OP DEC_OP '!' '~' '(' ')' '{' '}' '[' ']' '.' ',' ';' PROPORTION PTR_OP
%type <str> AssignmentOperator
%type <node> Literal BooleanLiteral NullLiteral StringLiteral IntegerLiteral CharacterLiteral Identifier FloatLiteral
%type <node> CompilationUnit PackageDeclaration Start
%type <node> TypeDeclaration TypeName Type PrimitiveType NumericType IntegralType FloatingPointType
%type <node> ContinueStatement ReturnStatement Primary PrimaryNoNewArray ClassInstanceCreationExpression
%type <node> UnqualifiedClassInstanceCreationExpression FieldAccess ArrayAccess
%type <node> MethodInvocation ArgumentList ArrayCreationExpression
%type <node> Expression AssignmentExpression Assignment LeftHandSide
%type <node> ConditionalExpression ConditionalOrExpression
%type <node> ConditionalAndExpression InclusiveOrExpression ExclusiveOrExpression
%type <node> AndExpression EqualityExpression RelationalExpression ShiftExpression
%type <node> AdditiveExpression MultiplicativeExpression UnaryExpression PreIncrementExpression
%type <node> PreDecrementExpression UnaryExpressionNotPlusMinus PostfixExpression
%type <node> PostIncrementExpression PostDecrementExpression CastExpression
%type <node> MULTI_TypeDeclaration MULTI_ClassModifier MULTI_ClassBodyDeclaration SINGLE_ArgumentList 
%type <node> ReferenceType ArrayType Dims ArrayInitialize VariableInitializerList ClassDeclaration
%type <node> NormalClassDeclaration ClassModifier ClassBody ClassMemberDeclaration ClassBodyDeclaration FieldDeclaration VariableDeclaratorList ClassInit
%type <node> VariableDeclarator VariableDeclaratorId VariableInitializer MethodDeclaration MethodHeader
%type <node> MemberName FormalParameterList FormalParameter
%type <node> ReceiverParameter MethodBody StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type <node> ExplicitConstructorInvocation Block BlockStatements BlockStatement LocalVariableDeclarationStatement LocalVariableDeclaration BlockStart
%type <node> Statement StatementNoShortIf StatementWithoutTrailingSubstatement EmptyStatement LabeledStatement
%type <node> LabeledStatementNoShortIf ExpressionStatement StatementExpression IfThenStatement IfThenElseStatement
%type <node> IfThenElseStatementNoShortIf WhileStatement WhileStatementNoShortIf ForStatement ForStatementNoShortIf
%type <node> BasicForStatement BasicForStatementNoShortIf ForInit 
%type <node> ForUpdate StatementExpressionList  BreakStatement

%%
Start : CompilationUnit { 
	    $$ = $1;
		root = $$;
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
        : Identifier {	
            $$=$1;
        }
        | TypeName '.' Identifier   { $$ = $1; }
        ;                             
Identifier 
    : IDENTIFIER   { 
        string s1($1);
		Symbol* sym = ST->GetVar(s1);
					
		if(sym == NULL){
			sym = ST->AddVar(s1,"None","simple",-1,"Identifier",line);
        }
        else{
            sym->line.push_back(line); 
        }
        genNode* n1 = new genNode();    
		n1->place = sym->name;

		$$ = n1;
		$$->type = sym->type;
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
        $$->place = "boolean";
        $$->type = "boolean";
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
    : FLOAT                {  
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
		$$->type = $1->type;
		$$->place = $1->place;
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
    | '{' '}' {
        genNode* n = new genNode();
		$$ = n;
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
    : MULTI_ClassModifier CLASS BlockStart ClassInit Identifier ClassBody  {
        $$ = $5;
		$$->type = "class";
		$$->code.pb(genLabelTAC($5->place));
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());
		ST->curEnv->name = $5->place;
		ST->EndScope();
    }
    | CLASS BlockStart ClassInit Identifier ClassBody {
       	$$ = $4;
		$$->type = "class";
		$$->code.pb(genLabelTAC($4->place));
		$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
		ST->curEnv->name = $4->place;
		ST->EndScope();
    }  
    ;
ClassInit : {
		ST->curEnv->type = "CLASSTYPE";
		$$=NULL;
	};

ClassBody 
    : '{' MULTI_ClassBodyDeclaration '}'  {
			$$ = $2; 
    } 
    | '{' '}'   {
			genNode* n = new genNode();
			$$ = n; 
    }
    ;
MULTI_ClassBodyDeclaration 
     : ClassBodyDeclaration { $$=$1; }
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
        $$ = NULL;
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

VariableInitializer //TODO : METHOD DECLARATION
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
       	
		ST->EndScope();
    }     
    | MethodHeader MethodBody                       {
        $$ = $1;
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		$$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());	
        	
		ST->EndScope();
    }     
    ;

MethodHeader
    : Type MemberName'(' FormalParameterList ')'      { 
        $$ = $2;
		ST->curEnv->returnType = $1->place;
		ST->curEnv->name = $2->place;
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
        // $$ = $2;
		// vector <TAC*> tmp;
		// tmp.pb(genLabelTAC(ST->curEnv->name));
		// $$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		// $$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());	
        // ST->curEnv->type = $2->place;	
		// ST->EndScope(); 
    }
    | ConstructorDeclarator ConstructorBody  { 
        // $$ = $1;
		// vector <TAC*> tmp;
		// tmp.pb(genLabelTAC(ST->curEnv->name));
		// $$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		// $$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());	
        // ST->curEnv->type = $1->place;	
		// ST->EndScope();
    }
    ;

ConstructorDeclarator
    : Identifier '(' FormalParameterList ')' { 
        // ST->BeginScope();
        // ST->curEnv->type = "CONTRUCTORTYPE";
        // $$ = $1;
		// ST->curEnv->name = $1->place;
        // $$->code = $3->code;
    }
    | Identifier '(' ')'   { 
        // ST->BeginScope();
        // ST->curEnv->type = "CONTRUCTORTYPE";
        // $$ = $1;
		// ST->curEnv->name = $1->place;
    }
    ;

ConstructorBody
    : '{' ExplicitConstructorInvocation BlockStatements '}'                {  }
    | '{' BlockStatements '}'                                              {  }
    | '{' ExplicitConstructorInvocation '}'                                {  }
    | '{' '}'                                                              {  }
    ;

ExplicitConstructorInvocation
    : THIS SINGLE_ArgumentList                                             {  }
    ;

SINGLE_ArgumentList
    : '(' ')' ';'                                      {   }
    | '(' ArgumentList ')' ';'                         {   }
    ;

Block
    : BlockStart '{' BlockStatements '}'                {
		$$ = $3; ST->EndScope(); 
	}
    | BlockStart '{' '}'                                {
		 $$ = NULL; ST->EndScope();
	}
    ;

BlockStart 
    : {
		$$ = NULL; 
		ST->BeginScope();	
	}
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
    : StatementExpression ';'                 { $$ = $1; }
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
    : IF '(' Expression ')' Statement     { 
        	$$ = $3;
			string trueLabel = getNewLabel();			
			string ifEndLabel = getNewLabel();
			TAC* tac1 = new TAC();
			tac1->op = "label"; tac1->target = trueLabel;
			TAC* tac2 = new TAC();
			tac2->op = "ifgoto"; tac2->dest = ST->GetVar($3->place); tac2->target = trueLabel;
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			TAC* tac3 = new TAC();
			tac3->op = "goto"; tac3->target = ifEndLabel;
			TAC* tac4 = new TAC();
			tac4->op = "label"; tac4->target = ifEndLabel;
			$$->code.pb(tac2);
			$$->code.pb(tac3);
			$$->code.pb(tac1);
			$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
			$$->code.pb(tac4);
		} %prec IFX                          
    ;

IfThenElseStatement
    : IF '(' Expression ')' StatementNoShortIf ELSE Statement  { 
        			$$ = $3;
			TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
			TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
			TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
			string trueLabel = getNewLabel();			
			string falseLabel = getNewLabel();
			string endLabel = getNewLabel();
			tac1->op = "label"; tac1->target = trueLabel;
			tac2->op = "label"; tac2->target = falseLabel;
			tac3->op = "ifgoto"; tac3->dest = ST->GetVar($3->place); tac3->target = trueLabel;
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac4->op = "goto"; tac4->target = falseLabel;
			tac5->op = "goto"; tac5->target = endLabel;
			tac6->op = "label"; tac6->target = endLabel;

			$$->code.pb(tac3); $$->code.pb(tac4);
			$$->code.pb(tac1);
			$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
			$$->code.pb(tac5);
			$$->code.pb(tac2);
			$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
			$$->code.pb(tac6);
    }      
    ;

IfThenElseStatementNoShortIf
    : IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf    {
       		$$ = $3;
			TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
			TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
			TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
			string trueLabel = getNewLabel();			
			string falseLabel = getNewLabel();
			string endLabel = getNewLabel();
			tac1->op = "label"; tac1->target = trueLabel;
			tac2->op = "label"; tac2->target = falseLabel;
			tac3->op = "ifgoto"; tac3->dest = ST->GetVar($3->place); tac3->target = trueLabel;
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac4->op = "goto"; tac4->target = falseLabel;
			tac5->op = "goto"; tac5->target = endLabel;
			tac6->op = "label"; tac6->target = endLabel;

			$$->code.pb(tac3); $$->code.pb(tac4);
			$$->code.pb(tac1);
			$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
			$$->code.pb(tac5);
			$$->code.pb(tac2);
			$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
			$$->code.pb(tac6);
    }    
    ;

WhileStatement
    : WHILE '(' Expression ')' Statement        {
			genNode* newNode = new genNode();
			$$ = newNode;
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($3->place); tac2->target = inLoopLabel;
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			$$->code.pb(tac);
			$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
			$$->code.pb(tac2);
			$$->code.pb(tac3);
			$$->code.pb(tac1);
			$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
			$$->code.pb(tac5);
			$$->code.pb(tac4);

			updateBreak($$, endLoopLabel);
			updateContinue($$, conditionLabel);
    }                              
    ;

WhileStatementNoShortIf
    : WHILE '(' Expression ')' StatementNoShortIf                {
        			genNode* newNode = new genNode();
			$$ = newNode;
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($3->place); tac2->target = inLoopLabel;
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			$$->code.pb(tac);
			$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
			$$->code.pb(tac2);
			$$->code.pb(tac3);
			$$->code.pb(tac1);
			$$->code.insert($$->code.end(), $5->code.begin(), $5->code.end());
			$$->code.pb(tac5);
			$$->code.pb(tac4);

			updateBreak($$, endLoopLabel);
			updateContinue($$, conditionLabel);
    }                 
    ;

ForStatement                                                                
    : BasicForStatement                          {$$=$1;}
	;

ForStatementNoShortIf
    : BasicForStatementNoShortIf                 {$$=$1;}
    ;

BasicForStatement
    : BlockStart FOR '(' ';' ';' ')' Statement   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		$$->code.pb(tac);
		if($7->code.size() > 0)
			$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' ';' ')' Statement   { 
		$$ = $4;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		$$->code.pb(tac);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ';' Expression ';' ')' Statement   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($5->place); tac2->target = inLoopLabel;
		if(!($5->isLit) && ST->GetVar($5->place)->type == "None"){
			cerr << "Symbol " << $5->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		$$->code.pb(tac);

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ';' ';' ForUpdate ')' Statement   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());
		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' Expression ';' ')' Statement   { 
		$$ = $4;
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($6->place); tac2->target = inLoopLabel;
		if(!($6->isLit) && ST->GetVar($6->place)->type == "None"){
			cerr << "Symbol " << $6->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		$$->code.pb(tac);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($9->code.size() > 0)
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' Statement {
		$$ = $4;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		if($9->code.size() > 0)
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '('  ';' Expression ';' ForUpdate ')' Statement {
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($5->place); tac2->target = inLoopLabel;
		if(!($5->isLit) && ST->GetVar($5->place)->type == "None"){
			cerr << "Symbol " << $5->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($9->code.empty()){
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		}
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement   { 
		$$ = $4;
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($6->place); tac2->target = inLoopLabel;
		if(!($6->isLit) && ST->GetVar($6->place)->type == "None"){
			cerr << "Symbol " << $6->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($10->code.size() > 0)
			$$->code.insert($$->code.end(), $10->code.begin(), $10->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
    }
    ;

BasicForStatementNoShortIf
    : BlockStart FOR '(' ';' ';' ')' StatementNoShortIf   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		$$->code.pb(tac);
		if($7->code.size() > 0)
			$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' ';' ')' StatementNoShortIf   { 
		$$ = $4;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		$$->code.pb(tac);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ';' Expression ';' ')' StatementNoShortIf   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($5->place); tac2->target = inLoopLabel;
		if(!($5->isLit) && ST->GetVar($5->place)->type == "None"){
			cerr << "Symbol " << $5->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		$$->code.pb(tac);

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ';' ';' ForUpdate ')' StatementNoShortIf   { 
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		if($8->code.size() > 0)
			$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());
		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' Expression ';' ')' StatementNoShortIf   { 
		$$ = $4;
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($6->place); tac2->target = inLoopLabel;
		if(!($6->isLit) && ST->GetVar($6->place)->type == "None"){
			cerr << "Symbol " << $6->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		$$->code.pb(tac);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($9->code.size() > 0)
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' StatementNoShortIf {
		$$ = $4;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		if($9->code.size() > 0)
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
		$$->code.pb(tac2);
		$$->code.pb(tac1);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '('  ';' Expression ';' ForUpdate ')' StatementNoShortIf {
		genNode* newNode = new genNode();
		$$ = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($5->place); tac2->target = inLoopLabel;
		if(!($5->isLit) && ST->GetVar($5->place)->type == "None"){
			cerr << "Symbol " << $5->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($9->code.empty()){
			$$->code.insert($$->code.end(), $9->code.begin(), $9->code.end());
		}
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $7->code.begin(), $7->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
	| BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf   { 
		$$ = $4;
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar($6->place); tac2->target = inLoopLabel;
		if(!($6->isLit) && ST->GetVar($6->place)->type == "None"){
			cerr << "Symbol " << $6->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		$$->code.pb(tac);
		$$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());

		$$->code.pb(tac2);
		$$->code.pb(tac3);
		$$->code.pb(tac1);
		if($10->code.size() > 0)
			$$->code.insert($$->code.end(), $10->code.begin(), $10->code.end());
		$$->code.pb(tac_);
		$$->code.insert($$->code.end(), $8->code.begin(), $8->code.end());
		$$->code.pb(tac5);
		$$->code.pb(tac4);

		updateBreak($$, endLoopLabel);
		updateContinue($$, updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
    }
    ;


ForInit
    : StatementExpressionList          {$$=$1;}
    | LocalVariableDeclaration         {$$=$1;}
    ;

ForUpdate
    : StatementExpressionList          {$$=$1;}
    ;

StatementExpressionList
    : StatementExpression                               { $$ = $1; }
    | StatementExpressionList ',' StatementExpression   {
        $$ = $1;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
    }
    ;

BreakStatement
    : BREAK ';'   { 
        genNode* n = new genNode();
		$$ = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;
        n->code.pb(tac);
    }
    ;

ContinueStatement
    : CONTINUE ';'                {
        genNode* n = new genNode();
		$$ = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;
        n->code.pb(tac);
    }
    ;

ReturnStatement
    : RETURN Expression ';'       {
        $$ = $2;
		TAC* tac = new TAC();
		tac->op = "retint";
		if($2->isLit){
			tac->l1=$2->place;
			tac->isInt1 = true;
		}
		else
			tac->dest = ST->GetVar($2->place);
		if(!($2->isLit) && ST->GetVar($2->place)->type == "None"){
			cerr << "Symbol " << $2->place << " not defined, at line: " <<line;
			exit(1);
		}
		vector <TAC*> tmp;
		tmp.pb(tac);
		$$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
    }
    | RETURN ';'                  {
        genNode* n = new genNode();
		$$ = n;
		TAC* tac = new TAC();
		tac->op = "ret";
		$$->code.pb(tac);
    }
    ;

Primary
    : PrimaryNoNewArray                                                             {$$=$1;}
    | ArrayCreationExpression                                                       {$$=$1;}
    ;

PrimaryNoNewArray
    : Literal                                                                      { $$=$1; }
    | '(' Expression ')'                                                            { $$ = $2; }     
    | ClassInstanceCreationExpression                                               { $$=$1; } // TODO : CLASS INSTANCE CREATION
    | FieldAccess                                                                   { $$=$1; }
    | ArrayAccess                                                                   { $$=$1; }
    | MethodInvocation                                                              { $$=$1; }
    ;

Literal 
    : BooleanLiteral  {$$=$1;}
    | IntegerLiteral  {$$=$1;}
    | CharacterLiteral {$$=$1;}
    | StringLiteral {$$=$1;}
    | NullLiteral  {$$=$1;}
	| FloatLiteral { $$=$1; }
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

FloatLiteral 
       : FLOATINGPOINTLITERAL {
		string s1($1);
			genNode* n1 = new genNode();
			$$ = n1;
			$$->type = "float";
			$$->place = s1;
			$$->isLit = true;
            $$->label = "FloatLiteral";
            $$->value = s1;
	   }


ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression                                         { $$=$1; }
    | TypeName '.' UnqualifiedClassInstanceCreationExpression                          { $$ = $1; }
    | Primary '.' UnqualifiedClassInstanceCreationExpression                             { $$ = $1; }
    ;

UnqualifiedClassInstanceCreationExpression
    : NEW TypeName '(' ArgumentList ')' { $$ = $4; }
    | NEW TypeName '(' ArgumentList ')' ClassBody                                       {
		$$ = $4;
        $$->code.insert($$->code.end(), $6->code.begin(), $6->code.end());

	}
    | NEW TypeName '(' ')' ClassBody  {   
		$$ = $5;
	}
    | NEW TypeName '(' ')'  {

	}
    ;

FieldAccess // TODO : CHECK FIELD ACCESS
    : Primary '.' Identifier  {
		$$ = $1;
	}
    ;

ArrayAccess
    : TypeName '[' Expression ']' {
        genNode* newNode = new genNode;
		$$ = newNode;
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		Symbol* temp = ST->GetVar(ST->GenTemp());
		temp->type = ST->GetVar($1->place)->type;
		$$->place = temp->name;
		$$->type = ST->GetVar($1->place)->type;
		if(!($1->isLit) && ST->GetVar($1->place)->type == "None"){
			cerr << "Symbol " << $1->place << " not defined, at line: " <<line;
			exit(1);
		}
		TAC* tac = new TAC();
		tac->op = "getarr";
		tac->dest = temp;
		tac->array_name = $1->place;
		$$->isArray = true;
		if($3->isLit){
			tac->isInt2 = true;
			tac->l2 = $3->place;
			$$->isLit=true;
		}
		else{
			tac->opd2 = ST->GetVar($3->place);
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			$$->isLit = false;

		}
		$$->arrayName = $1->place;
		$$->arrayIndex = $3->place;
		$$->code.pb(tac);
        
    }
    | PrimaryNoNewArray '[' Expression ']'  {
       	genNode* newNode = new genNode;
		$$ = newNode;
		if($1->isLit){
			cerr<<"Error: invalid array name at line: "<<line<<endl;
			exit(1);
		}
		$$->code.insert($$->code.end(), $1->code.begin(), $1->code.end());
		$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		Symbol* temp = ST->GetVar(ST->GenTemp());
		temp->type = ST->GetVar($1->place)->type;
		if(!($1->isLit) && ST->GetVar($1->place)->type == "None"){
			cerr << "Symbol " << $1->place << " not defined, at line: " <<line;
			exit(1);
		}
		$$->place = temp->name;
		$$->type = ST->GetVar($1->place)->type;
		TAC* tac = new TAC();
		tac->op = "getarr";
		tac->dest = temp;
		tac->array_name = $1->place;
		$$->isArray = true;
		if($3->isLit){
			tac->isInt2 = true;
			tac->l2 = $3->place;
			$$->isLit=true;
		}
		else{
			tac->opd2 = ST->GetVar($3->place);
			if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
				exit(1);
			}
			$$->isLit = false;

		}
		$$->arrayName = $1->place;
		$$->arrayIndex = $3->place;
		$$->code.pb(tac);
    }
    ;

MethodInvocation
    :  TypeName '(' ')' {
		TAC* tac = new TAC();
		tac->op = "call";
		Env* methodEnv = ST->GetMethod($1->place);
		if(!methodEnv){
			cerr<<"Error: Method "<<$1->place<<" not defined in the scope, at line: "<<line<<endl;
			exit(1);
		}
		tac->target = methodEnv->name;
		tac->isInt1 = true;
		tac->l1 = convertNumToString(methodEnv->argNum);
		string str1 = ST->GenTemp();
		Symbol* sym = ST->GetVar(str1);
		sym->type = methodEnv->returnType;
		tac->dest = sym;
		$$ = $1;
		$$->place = str1;
		$$->type = methodEnv->returnType;
		$$->code.pb(tac);
    }

	| TypeName '(' ArgumentList ')' {
        TAC* tac = new TAC();
		tac->op = "call";
		tac->isInt1 = true;
		Env* methodEnv = ST->GetMethod($1->place);
		if(!methodEnv){
			cerr<<"Error: Method "<<$1->place<<" not defined in the scope, at line: "<<line<<endl;
			exit(1);
		}
		tac->target = methodEnv->name;


		tac->l1 = convertNumToString(methodEnv->argNum);
		string str1 = ST->GenTemp();


		Symbol* sym = ST->GetVar(str1);
		sym->type = methodEnv->returnType;
		tac->dest = sym;
		$$ = $1;
		if($3->code.size() > 0)	$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
		$$->place = str1;
		$$->type = methodEnv->returnType;
		$$->code.pb(tac);
    }
	;

ArgumentList
    : ArgumentList ',' Expression                                                      {
       if(!($3->isLit) && ST->GetVar($3->place)->type == "None"){
				cerr << "Symbol " << $3->place << " not defined, at line: " <<line;
			exit(1);
			}
			$$ = $1;
			TAC* tac = new TAC();
			tac->op = "param";
			tac->target = $3->place;
			$$->code.pb(tac);
	}
    | Expression         {
		if(!($1->isLit) && ST->GetVar($1->place)->type == "None"){
				cerr << "Symbol " << $1->place << " not defined, at line: " <<line;
				exit(1);
			}
			$$ = $1; 
			TAC* tac = new TAC();
			tac->op = "param";
			tac->target = $1->place;
			$$->code.pb(tac);
	}                                               
    ;

ArrayCreationExpression
   : NEW PrimitiveType '[' Expression ']'  {
    	genNode* n = new genNode();
		$$ = n;
		$$->isArray = true;
		$$->type = $2->type;
		$$->nodeLen = stoi($4->place);
   }
   | NEW TypeName '[' Expression ']' {
    	genNode* n = new genNode();
		$$ = n;
		$$->isArray = true;
		$$->type = $2->type;
		$$->nodeLen = stoi($4->place);
   }
   ;

Expression
   : AssignmentExpression                                                               {$$=$1;}
   ;

AssignmentExpression
   : ConditionalExpression                                                              {$$=$1;}                    
   | Assignment                                                                         {$$=$1;}
   ;

Assignment
   : LeftHandSide AssignmentOperator Expression  { 
 			// assignment_operator is a string
			$$ = $1;	
			$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar($1->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  $1->place << " not defined, at line num: "<<line << endl;
				exit(1);
			}
			if($3->isLit==false){		
				Symbol* sym2 = ST->GetVar($3->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< $3->place << " not defined, at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
			}
			gen2OpCode($$, $2, $1, $3, line);
			if($1->isArray == true){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = $1->arrayName;
				if($1->isLit){
					tac->isInt1 = true;
					tac->l1 = $1->arrayIndex;
				}
				else{
					tac->opd1 = ST->GetVar($1->arrayIndex);
				}
				tac->opd2 = sym1;
				$$->code.pb(tac);
			}			
   }
   | TypeName AssignmentOperator Expression                 { 
    				// assignment_operator is a string
			$$ = $1;	
			$$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar($1->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  $1->place << " not defined, at line num: "<<line << endl;
				exit(1);
			}
			if($3->isLit==false){		
				Symbol* sym2 = ST->GetVar($3->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< $3->place << " not defined, at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
			}
			gen2OpCode($$, $2, $1, $3, line);
			if($1->isArray == true){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = $1->arrayName;
				if($1->isLit){
					tac->isInt1 = true;
					tac->l1 = $1->arrayIndex;
				}
				else{
					tac->opd1 = ST->GetVar($1->arrayIndex);
				}
				tac->opd2 = sym1;
				$$->code.pb(tac);
			}			
   }
   ;

LeftHandSide
   : FieldAccess                                                                        { $$=$1; }
   | ArrayAccess                                                                        { $$=$1; }
   ;

AssignmentOperator
   : '='                                                                                { $$ = $1;}
   | MUL_ASSIGN                                                                         {$$ = $1;}
   | DIV_ASSIGN                                                                         {$$ = $1;}
   | MOD_ASSIGN                                                                         {$$ = $1;}
   | ADD_ASSIGN                                                                         {$$ = $1;}                                                                               
   | SUB_ASSIGN                                                                         {$$ = $1;}
   | LEFT_ASSIGN                                                                        {$$ = $1;}
   | RIGHT_ASSIGN                                                                       {$$ = $1;}
   | UNSIGNED_RIGHT_ASSIGN                                                              {$$ = $1;}
   | AND_ASSIGN                                                                         {$$ = $1;}  
   | XOR_ASSIGN                                                                         {$$ = $1;}
   | OR_ASSIGN                                                                          {$$ = $1;}
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
        $$ = $1;
		getPostUnaryOpCode("++", $$, $1, line);
   }
   ;

PostDecrementExpression
   : PostfixExpression DEC_OP                                                           {
        $$ = $1;
		getPostUnaryOpCode("--", $$, $1, line);
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
    ST->PrintTable(ST->baseEnv);
	printTAC(root);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}