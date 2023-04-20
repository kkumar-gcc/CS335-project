#include "SymTable.h"


SymTable::SymTable(){
	curEnv = new Env();
	baseEnv = curEnv;
}

Env* SymTable::GetMainClass(){
	Env* env = baseEnv;
	fori(0, (env->children).size()){
		if((env->children)[i]->type == "CLASSTYPE"){
			for(vector <Env*> :: iterator it = (env->children).begin() ; it != (env->children).end() ; it++){
				if((*it)->type == "METHODTYPE" && (*it)->name == "main")	return (*it);
			}
		}
	}
	return NULL;
}


Symbol* SymTable::AddVar(string varName, string varType = "None", string genericType = "simple", int _width = -1,string varToken = "Identifier", int line = 0){
	return curEnv->addVar(varName, varType, genericType, _width,varToken,line);
}

string SymTable::GetMethodType(){
	return curEnv->getMethodType();
}

Symbol* SymTable::GetVar(string varName){
	return curEnv->getVar(varName);
}


Symbol* SymTable::GetVarInClass(string varName){
	return curEnv->getVarInClass(varName);
}

string SymTable::GenTemp(){
	return curEnv->genTemp();
}

Env* SymTable::BeginScope(string scopeName = "None", string scopeType = "BLOCKTYPE", string returnType = "void", string Class = "None", string Parent_Class = "None"){
	Env* newEnv = new Env(scopeName, scopeType, curEnv, returnType, Class, Parent_Class);
	(curEnv->children).pb(newEnv);

	curEnv = newEnv;


	return newEnv;
}

string SymTable::GetEnvName(){
	return curEnv->name;
}

string SymTable::GetPrevEnvName(){
	return curEnv->prevEnv->name;
}

Env* SymTable::GetMethod(string methodName){
	return curEnv->getMethod(methodName, baseEnv);
}

Env* SymTable::GetMethodInClass(string methodName, string className){
	return curEnv->getMethodFromClass(methodName, className, baseEnv);
}

Env* SymTable::FindClass(string className){
	return curEnv->findClass(className, baseEnv);
}

Env* SymTable::EndScope(){
	for(auto env : curEnv->children){
		if(curEnv->addTable.find(env->name) != curEnv->addTable.end()){
			curEnv->addTable.erase(env->name);
		}
	}

	map <string, Symbol*> ::iterator it = curEnv->addTable.begin();
	while(it != curEnv->addTable.end()){
		if((*it).se->type == "label" || (*it).se->name == curEnv->name){
			it = curEnv->addTable.erase(it);
		}
		else	it++;
	}
	
	int offset = 0;
	for(auto sym : curEnv->addTable){
		string _name = sym.se->name;
		sym.se->width = curEnv->getWidth(sym.se->type, sym.se->baseType, sym.se->width);
		sym.se->offset = offset;
		offset += sym.se->width;
	}

	curEnv->width = offset;

	///////////////////////////////////////////////////////////////////////////////////////////////

	curEnv = curEnv->prevEnv;
	// return curEnv;
}

vector <string> SymTable::SetArgTypeList(vector <string> args){
	return curEnv->setArgTypeList(args);
}

void SymTable::PrintTable(Env* env){
	curEnv->printTableEnv(env);
}

