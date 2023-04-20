#include "xv86.h"

Env* curEnv;
int tmpCnt = 4;
map <string, string> tmpMap;

string returnOffset(Env* env, Symbol* sym){
	string _name = sym->name;

    int off = 0;
    while(env!=NULL && env->addTable.find(sym->name) == env->addTable.end()){
    	    off += env->width;
        env = env->prevEnv;
    }

    return convertNumToString(off + sym->offset);
}

xv86::xv86(SymTable* SymT)
{

	string FRS[] = {"$12","$13","$14","$15","$16","$17","$0","$1","$2","$3","$4","$5","$6","$7"};
	const int lenFRS = 14;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}
	ST = SymT;

}

void xv86::addLine(string line){
	code.push_back(line);
}

// to get a register that is not in use. 
string xv86::getFreeReg(){
	string reg;
	if(freeRegs.size() > 0){
		reg = freeRegs.back();
		freeRegs.pop_back();
	}
	regDesc[reg] = mp("NONE", "NONE");
	return reg;
}


string xv86::getReg(Symbol* sym, int ins, int isDst)
{
	string reg, tempVarOff, tempVarName;
	vector < pair < int, string > > :: iterator it;
	bool flag = false;
	string off = returnOffset(curEnv, sym);
	string var = sym->name;

	ss vr = mp(var, off);

	// If variable already has a register 
	if(addDesc.find(vr) != addDesc.end() && addDesc[vr]["register"] != "NONE")
	{
		// addLine("\tPuppy\n");
		if(isDst==1) 	addDesc[vr]["stack"]="false";
		reg = addDesc[vr]["register"];
		return reg;
	} 
	

	// If there is variable on the RHS that has no nextUse
	// This should be done only when the register is destination register (i.e. on the LHS)
	if(isDst==1 && !(IR[ins-1]->op == "+=" || IR[ins-1]->op == "-=" || IR[ins-1]->op == "/=" || 
		IR[ins-1]->op == "*=" || IR[ins-1]->op == "%=" || IR[ins-1]->op == ">>=" || IR[ins-1]->op == "<<=" ||
		IR[ins-1]->op == "&=" || IR[ins-1]->op == "|=" || IR[ins-1]->op == "^="))
	{
		addDesc[vr]["stack"] = "false";


		if(IR[ins-1]->opd1 != NULL)
		{
			tempVarOff = returnOffset(curEnv, IR[ins-1]->opd1);
			tempVarName = IR[ins-1]->opd1->name;
			ss tmpVar = mp(tempVarName, tempVarOff);

			if(addDesc.find(tmpVar) != addDesc.end() && (nextUseTable[ins-1].se)[tempVarName].se == INF )
			{
				reg = addDesc[tmpVar]["register"];
				regDesc[reg] = vr;
				addDesc[vr]["register"] = reg;
				addDesc[tmpVar]["register"] = "NONE";
				// addLine("\tPuppy1: " + var + " - " + addDesc[vr]["register"] + "\n");

				for(it = usedRegs.begin() ; it != usedRegs.end() ; it++)
				{
					if((*it).se == reg){ 
						(*it).fi = (nextUseTable[ins-1].se)[var].se; 
						break;
					}
				}

				flag = true;
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	
				{ 
					addDesc[tmpVar]["stack"] = off;
					addDesc[tmpVar]["register"] = "NONE";
				}
			}
		}
		
		if(flag == false && IR[ins-1]->opd2 != NULL)
		{
			tempVarOff = returnOffset(curEnv, IR[ins-1]->opd2);
			tempVarName = IR[ins-1]->opd2->name;
			ss tmpVar = mp(tempVarName, tempVarOff);

			if(addDesc.find(tmpVar) != addDesc.end() && (nextUseTable[ins-1].se)[tempVarName].se == INF )
			{
				// addLine("\tPuppy3\n");

				reg = addDesc[ tmpVar ]["register"];
				regDesc[reg] = vr;
				addDesc[vr]["register"] = reg;

				for(it = usedRegs.begin() ; it != usedRegs.end() ; it++)
				{
					if((*it).se == reg){ 
						(*it).fi = (nextUseTable[ins-1].se)[var].se; 
						break;
					}
				}

				flag = true;
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	
				{ 
					addDesc[tmpVar]["stack"] = "true";
					addDesc[tmpVar]["register"] = "NONE";
				}
			}
		}
	}


	// If there is a free"register"	
	if(flag == false && freeRegs.size() > 0)
	{

		reg = getFreeReg();
		regDesc[reg] = vr;
		usedRegs.push_back( mp( (nextUseTable[ins-1].se)[var].se, reg ) );

		addDesc[vr]["register"] = reg;	
		if(addDesc[vr]["stack"] != "true"){
			addDesc[vr]["stack"] = "false";
		}

		flag = true;
	}

	// Spilling
	if(flag == false)
	{
		// TODO: change it accordingly
		reg = spillReg(vr, ins);
		flag = true;
		if(addDesc[vr]["stack"] != "true"){
			addDesc[vr]["stack"] = "false";
		}
	}

	if(flag == false){
		exit(1);
	}

	if((isDst != 1) || (IR[ins-1]->op == "+=" || IR[ins-1]->op == "-=" || IR[ins-1]->op == "/=" || 
		IR[ins-1]->op == "*=" || IR[ins-1]->op == "%=" || IR[ins-1]->op == ">>=" || IR[ins-1]->op == "<<=" ||
		IR[ins-1]->op == "&=" || IR[ins-1]->op == "|=" || IR[ins-1]->op == "^="))
	{
		// addLine("lw " + reg + ", " + off + "($sp)");
		if(isDst==1) addDesc[vr]["stack"]="false";
	}

	if(var == "_tVar_8")	cerr << "\tDebug:" << addDesc[vr]["register"] << "\n";

	return reg;

}

string xv86::spillReg(ss vr, int ins)
{
	vector < pair < int, string > >::iterator far, it; 
	vector <ss> varsPresent;
	vector <ss>:: iterator itt;
	string spilledReg, reg;
	int farthest;
	bool flag;

	if(IR[ins-1]->dest != NULL)	varsPresent.pb(mp(IR[ins-1]->dest->name, returnOffset(curEnv, IR[ins-1]->dest)));
	if(IR[ins-1]->opd1 != NULL)	varsPresent.pb(mp(IR[ins-1]->opd1->name, returnOffset(curEnv, IR[ins-1]->opd1)));
	if(IR[ins-1]->opd2 != NULL)	varsPresent.pb(mp(IR[ins-1]->opd2->name, returnOffset(curEnv, IR[ins-1]->opd2)));

	far = usedRegs.end();
	farthest = 0;

	for(it = usedRegs.begin() ; it  != usedRegs.end() ; it++)
	{
		flag = true;
		if((*it).fi > farthest)
		{
			for(itt = varsPresent.begin() ; itt != varsPresent.end() ; itt++)
			{
				if((*itt) == regDesc[(*it).se])	flag = false;
			}

			if(flag == true) { far = it; }
		}
	}

	spilledReg = (*far).se;

	// varName : spilled register offset
	ss tmpVr = regDesc[spilledReg];
    addDesc[tmpVr]["stack"] = "true";

	reg = spilledReg;
	regDesc[reg] = vr;

	(*far).fi = (nextUseTable[ins-1].se)[vr.fi].se;
	addDesc[vr]["register"] = reg;

	return reg;
}

void xv86::printCode()
{

	vector <string> ::iterator it;
	for(it = code.begin(); it != code.end() ; it++){
		cout<<(*it)<<"\n";
	}
}

// to clear the registers at the end of blocks, 
// and move them to memory locations. 
void xv86::flushAll()
{
	vector< pair<int, string> >::iterator it;
	string reg;
	ss vr;
	for(it=usedRegs.begin(); it!=usedRegs.end(); it++){
		reg = (*it).se;
		vr = regDesc[reg];

		if(addDesc[vr]["stack"] != "true")
		{
			addDesc[vr]["stack"] = "true";
		}
		addDesc[vr]["register"] = "NONE";
	}

	tmpCnt = 4;
	tmpMap.clear();
	usedRegs.clear();
	regDesc.clear();

	string FRS[] = {"$t1","$t2","$t3","$t4","$t5","$t6","$t7","$0","$1","$2","$3","$4","$5","$6","$7"};
	const int lenFRS = 15;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}

}