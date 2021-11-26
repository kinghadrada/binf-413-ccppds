//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:20-Nov-21
//Description:An interactive program to calculate simple interest.

#include <stdio.h> 

void main() { 
	
	float si, pcpl, rte, tim;

	printf("\n********************SI Calculator***********************\n");
	printf("Please enter the principal (in Rs.) followed by a space and the rate followed by another space and the loan time (in years).\n");
	printf("Keep in mind, the entries must be floats!\n");	

	scanf("%f %f %f", &pcpl, &rte, &tim);
	
	si = (pcpl * rte * tim)/100;
	
		
	printf("Simple interest to be paid for a principal of Rs.%7.2f loaned for %7.2f years at a rate of %7.2f percent is Rs. %7.2f.\n", pcpl, tim, rte, si);

}

