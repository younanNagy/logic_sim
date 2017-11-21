#pragma once
#include "Node.h"
class Gate
{
protected: //so I can use these members in the Inheritor classes
	Node* in1; //pointer to Node 
	Node* in2;
	Node* out;
public:
	Gate();
	void set_in1(Node* a);
	void set_in2(Node* a);
	void set_out(Node* a);
	Node* get_in1();
	Node* get_in2();
	Node* get_out();
	virtual void calc_out()=0;//pure virtual function makes this class is abstract one
};