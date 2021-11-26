//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:20-Nov-21
//Description:An interactive program to square a number.

#include <stdio.h> 

void main() { 
	
	float num;

	printf("\n********************Square-er***********************\n");
	
	printf("Please enter a number which is to be squared.\n");
	printf("Keep in mind, the entry must be float!\n");	

	scanf("%f",&num);
			
	printf("Square of %5.2f is %5.2f.\n",num, num*num);

}

