#include "Simulator.h"
#include <fstream>
#include <conio.h>
int main(int argc,char* argv[])
{

 	Simulator s;
	s.load("circuit.txt");
	getch();
	return 0;
}