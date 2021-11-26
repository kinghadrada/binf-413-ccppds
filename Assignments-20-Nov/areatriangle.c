//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:20-Nov-21
//Description:A simple program to calculate area of a triangle for a given base and height
 

#include <stdio.h>

void main() {
	int base = 8 , ht = 4, area;
	area = (base * ht)/2;
	printf("The area of the triangle is %d cmsq for %d cm height and %d cm base length.\n",area, ht, base);
}
