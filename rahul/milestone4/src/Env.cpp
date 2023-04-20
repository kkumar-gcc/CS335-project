#include "Env.h"

Env::Env(string _name = "None", string _type = "BLOCKTYPE", Env *prev_env = NULL, string _return_type = "Void", string _class = "None", string _parentClass = "None"){
	type = _type;
	returnType = _return_type;
	name = _name;
	prevEnv = prev_env;
	Class = _class;
	ParentClass = _parentClass;
	width = 0;
	offset = 0;
	maxWidth = 0;
	argNum = 0;
	inClass = false;
}

string Env::getMethodType(){
	Env* tmpEnv = this;
	while(tmpEnv != NULL && tmpEnv->type != "CLASSTYPE"){
		if(tmpEnv->type == "METHODTYPE")	return tmpEnv->returnType;
		tmpEnv = tmpEnv->prevEnv;
	}
	return "None";
}

string Env::genTemp(string varType = "None", string genericType = "simple", int _width = 0,string varToken = "Identifier", int lineNum = 0){

	string place = "tVar_"+ to_string(tempCounter);
	tempCounter += 1;

	_width = getWidth(varType, genericType, _width);

	Symbol* symbol = new Symbol(place, varType, _width, genericType, offset,varToken,{lineNum});
	place = symbol->name;
	addTable[place] = symbol;
	symbol->isTemp = true;

	offset += _width;
	width += _width;

	return place;
}

int Env::getWidth(string varType, string genericType, int _width = -1){

	map <string, int> typeMap;

	typeMap["int"] = 4;
	typeMap["long"] = 8;
	typeMap["char"] = 4;
	typeMap["boolean"] = 4;
	typeMap["void"] = 0;
	typeMap["null"] = 0;

	if(genericType == "simple") {  return typeMap[varType]; }
	else{
		if(genericType == "array") {	return _width*typeMap[varType];	}
		else { return _width; }
	}

}

Symbol* Env::addVar(string varName, string varType = "None" , string genericType = "simple", int _width = -1,string varToken = "Identifier", int lineNum = 0){

	_width = getWidth(varType, genericType, _width);

	Symbol* symbol = new Symbol(varName, varType, _width, genericType, offset,varToken,{lineNum});
	addTable[symbol->name] = symbol;

	offset += _width;
	width += _width;

	return symbol;
}

Symbol* Env::getVar(string varName){

	Symbol* temp = NULL;
	Env* tmpEnv = this;

	/////////// There needs to be such restriction as methods must be able to declare local variables of the same name ////////////

	while(tmpEnv != NULL/* && tmpEnv->type != "CLASSTYPE"*/){
		if(tmpEnv->addTable.find(varName) != tmpEnv->addTable.end()){
			temp = tmpEnv->addTable[varName];
			// cerr << "\tDebug: Found";
			if(tmpEnv->type == "CLASSTYPE"){
				// cerr << " in Class";
				tmpEnv->inClass = true;
			}
			// cerr << "\n";
			break;
		}
		if(tmpEnv->type == "CLASSTYPE")	{	
			break;
		}
		tmpEnv = tmpEnv->prevEnv;
	}

	return temp;
}

Symbol* Env::getVarInClass(string varName){
	Env* Class = getClassEnv();
	if(Class != NULL){ 		
		if(Class->varList.find(varName)  != Class->varList.end())	return Class->varList[varName];
	}
	// cerr << "\tDebug: " << varName << " GetVarInClass\n";
	return NULL;
}

vector <string> Env::setArgTypeList(vector <string> args){
	argTypeList = args;
	return argTypeList;
}

Env* Env::findClass(string className, Env* baseEnv){
	Env* env = baseEnv->children[0];
	fori(0, env->children.size()){
		if((env->children)[i]->type == "CLASSTYPE" && (env->children)[i]->name == className)	return (env->children)[i];
	}
	return NULL;
}

Env* Env::getClassEnv(){
	Env* tmpEnv = this;
	while(tmpEnv != NULL && tmpEnv->type != "CLASSTYPE"){
		tmpEnv = tmpEnv->prevEnv;
	}
	return tmpEnv;
}

Env* Env::getMethod(string methodName, Env* baseEnv){
	Env* tmpEnv = getClassEnv();

	int siz = (tmpEnv->children).size();
	fori(0, siz){
		if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}

	if(ParentClass != "None"){
		tmpEnv = findClass(ParentClass, baseEnv);

		siz = (tmpEnv->children).size();
		fori(0, siz){
			if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}

	return NULL;
}

Env* Env::getMethodFromClass(string methodName, string className, Env* baseEnv){
	Env* tmpEnv = findClass(className, baseEnv);
	
	fori(0, (tmpEnv->children).size()){
		if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}

	if(ParentClass == "None"){
		tmpEnv = findClass(ParentClass, baseEnv);
		fori(0, (tmpEnv->children).size()){
			if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}

	return NULL;
}

void Env::printTableEnv(Env* env){

	int t = 0;
	cout << env->type << " " << env->name << " " << endl;

	for (map<string, Symbol *>::iterator it = (env->addTable.begin()); it != (env->addTable.end()); it++)
	{
		cout << (((*it).se)->name) << " " << (((*it).se)->type) << " ";
		for (auto element : (((*it).se)->line))
		{
			cout << element << " ";
		}
		cout << (((*it).se)->token) << " " << endl;
	}
	cout << "\n";

	int siz = (env->children).size();

	fori(0, siz)
	{
		if (siz >= 0)
		{
			t++;
			cout << "scope" << t << endl;
			printTableEnv((env->children)[i]);
		}
	}
}