#pragma once
#include "Gate.h"
#include <fstream>
#include "AND_Gate.h"
#include "NAND_Gate.h"
#include "NOR_Gate.h"
#include "OR_Gate.h"
#include "XNOR_Gate.h"
#include "XOR_Gate.h"

class Simulator
{
	Gate* GA[1000];
	Node* NA[2000];
	int  GS, NS;
public:
	Simulator(void);
	~Simulator(void);
	int get_GS();//get function for a private members
	int get_NS();//get function for a private members
	Node* add_node(string n);
	Node* find_node(string p);

	Gate* add_gate(string type);
	void sim();
	void print_all();
	void load(string file_name);
};

