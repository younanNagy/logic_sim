#include "Node.h"


Node::Node()
{
	value=0;
	name="";
}
	void Node::set_name(string n)
	{
		name=n;
		return;
	}
	void Node::set_value(short v)
	{
		value=v;
	}
	string Node:: get_name()
	{
		return name;
	}
	short Node::get_value()
	{
		return value ;
	}

	void Node::print_node()
	{
		cout<<name<<" = "<<value<<endl;
	}
	void Node::operator =(short v)
{
	value=v;
	return;
}
void Node::operator =(string n)
{
	name=n;
	return;
}