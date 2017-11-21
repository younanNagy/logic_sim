#include "Gate.h"


Gate::Gate()
{
	in1=NULL;
	in2=NULL;
	out=NULL;
}
void Gate::set_in1(Node* a)
	{
		in1=a;
		return;
	}
	void Gate::set_in2(Node* c)
	{
		in2=c;
		return;
	}
	void Gate::set_out(Node* b)
	{
		out=b;
		return;
	}
	Node* Gate::get_in1()
	{return in1;}
	Node* Gate::get_in2()
	{return in2;}
	Node* Gate::get_out()
	{return out;}
	//the pure virtual function calc_out() has no impl thus it is not here ^_^
