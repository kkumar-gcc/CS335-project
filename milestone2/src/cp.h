#ifndef CP_H
#define CP_H
#include<bits/stdc++.h>

using namespace std;
class Node
{

public:
  string label;
  string value;


  string place;
	string type;
	bool isLit;
	bool isArray;
	int nodeLen;
	string arrayName;
	string arrayIndex; 
  // string e_label;
  vector<Node *> children;

  Node(){
		place = "None";
		type = "None";
		isLit = false;
		isArray = false;
		nodeLen = 0;
	}
  
};

#endif