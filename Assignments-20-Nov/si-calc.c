//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:20-Nov-21
//Description:Program to calculate simple interest for given P, R and t.

#include <stdio.h> 

void main() { 
	int si, pcpl = 1000, rte = 10, tim = 3;
	si = (pcpl * rte * tim)/100;	
	printf("Simple interest to be paid for a principal of Rs. 1000 loaned for 3 years at a rate of 10 percent is Rs. %d.\n", si);

}

