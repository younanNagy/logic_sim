#include "XOR_Gate.h"


void XOR_Gate::calc_out()
	{
		if((in1->get_value()) == (in2->get_value()==1))
		{
			out->set_value(0);//it means set the Node value that out(pointer) points to
		}
		else
		{out->set_value(1);}
		return;
	}
