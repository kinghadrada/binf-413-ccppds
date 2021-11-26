//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:20-Nov-21
//Description:An interactive program to calculate area of a triangle.

#include <stdio.h> 

void main() { 
	float base, ht, area;

	printf("\n********************Triangle Area Calculator***********************\n");
	printf("Please enter the base length (in cms) followed by a space and the height (in cms) of a triangle\n");
	printf("Keep in mind, the entries must be floats!\n");
	scanf("%f %f", &base, &ht);

	area = (base * ht)/2;

	printf("This triangle has an area of %5.2f cmsq.\n", area);

}

