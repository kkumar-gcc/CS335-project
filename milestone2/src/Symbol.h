#include "config.h"

class Symbol{
public:
	string name;
	string baseType;
	// array, simple
	string type;
	bool isKeyword;
	int width;
	int offset;
	map<string, string> attr;
    
    Symbol(string symName, string Type, int Width = 0, string BaseType = "simple", int Offset = 0)
    {
        string newName = "_" + symName;
        name = newName;
        type = Type;
        isKeyword = false;
        width = Width;
        offset = Offset;
        baseType = BaseType;
    }
   
};