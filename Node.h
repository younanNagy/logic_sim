#ifndef NODE_H//or #pragma once

#define NODE_H
# include <string>
# include <iostream>
using namespace std;

class Node
{
short value;
string name;
public:
	Node();
	void set_name(string n);
	void set_value(short v);
	string get_name();
	short get_value();
	void print_node();
	void operator = (short v);
	void operator = (string n);
};
#endif