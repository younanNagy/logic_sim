#include "AND_Gate.h"


void AND_Gate::calc_out()
{
		if((in1->get_value()==1)&&(in2->get_value()==1))
		{
			out->set_value(1);//it means set the Node value that out(pointer) points to
		}
		else
		{out->set_value(0);}
		return;
	}
	//OR we can use out->set_value(in1->get_value()&&in2->get_value(); but the last one is clearer 
