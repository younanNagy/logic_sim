#include "Simulator.h"
using namespace std;

Simulator::Simulator(void)
{
	GS=0;NS=0;
}


Simulator::~Simulator(void)
{
	for(int i=0;i<NS;i++)
		{
			delete NA[i];
			NA[i]=NULL;
		}
		for(int i=0;i<GS;i++)
		{
			delete GA[i];
			GA[i]=NULL;
		}
}

//-------------------------------------------------------------------------------//add node
Node* Simulator::add_node(string n)
	{
		NA[NS]=new Node();//NA[NS] is the first unused pointer
		*NA[NS]=n;//operator over load
		NS++;
		return NA[NS-1];
	}
//---------------------------------------------------------------------------//find node
	Node* Simulator::find_node(string p)
	{
		if(NS!=0)
		{
			for(int i=0;i<NS;i++)
			{
				if(NA[i]->get_name()==p)
				{
					return NA[i];
				}
			}
			return add_node(p);
		}
		else
		{
			return add_node(p);
		}
	}
//---------------------------------------------------------------------------------------------//add_gate
		Gate* Simulator:: add_gate(string type)
	{//switch is not valid on strings
		if(type=="AND")
		{GA[GS]=new AND_Gate();}

		else if(type=="OR")
		{GA[GS]=new OR_Gate();}

		else if(type=="NAND")
		{GA[GS]=new NAND_Gate();}

		else if(type=="NOR")
		{GA[GS]=new NOR_Gate();}

		else if(type=="XOR")
		{GA[GS]=new XOR_Gate();}
		
		else if(type=="XNOR")
		{GA[GS]=new XNOR_Gate();}
		else
		{return NULL;}
		GS++;
		return GA[GS-1];
	}
//-------------------------------------------------------------------------------------------------//simulate
	void Simulator::sim()
	{
		for(int i=0;i<GS;i++)
		{GA[i]->calc_out();}
	}
//----------------------------------------------------------------------------------------//print all function
	void Simulator::print_all()
	{
		for(int i=0;i<NS;i++)
		{NA[i]->print_node();}
	}

//--------------------------------------------------------------------------------------//load function
    void Simulator::load(string file_name)
	{
		ifstream infile;
		infile.open(file_name,ios::in);
		if(!infile.is_open())//make sure the the file exist
   {
	   cout<< "msh l2eh ya ngm"<<endl;


   }
   else

   {
		while(!infile.eof())//file.eof() it is a check the end of the file
		{
			string s;
			infile>>s;
			if (s=="END")
			{
				infile.close();
		        return;
			}
			if (s=="SET")
			{
				string n; short v;
				infile>>n>>v;
				find_node(n)->set_value(v);//finde a node and set its value .finde_node()returns apointer to node
			}
			else if (s=="SIM")
			{sim();}
			else if(s=="OUT")//for printing
			{
				string all;
				infile>>all;
				if(all=="ALL")
				{print_all();}
				else 
				{find_node(all)->print_node();}

			}
			else
			{
				string node1,node2,output;
				infile>>node1>>node2>>output;
				Gate*p=add_gate(s);
				p->set_in1(find_node(node1));
				p->set_in2(find_node(node2));
				p->set_out(find_node(output));
			}
			
		}
	
		infile.close();
		return;
	}
	}