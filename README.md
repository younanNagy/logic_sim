# logic_sim
logic_simulator with c++ using a text file as an input

# text file form
+ AND A B E //initialize your logic gates and their nodes from left to right
+ OR B C I
+ XOR C D G
+ XNOR E I Z
+ NAND Z Z F
+ NOR F G H
+ SET A 0 //Set input nodes
+ SET B 1
+ SET C 0
+ SET D 1
+ SIM  //Simulate the circuit
+ OUT A //print a specific node
+ END //end the program