
//
//Course: C, CPP and DS (BINF-413) 
//Taught By:A Murali
//Code By:Satyakam
//Last Compiled:30-Nov-21
//Description:Program to calculate distance and slope from the coordinates of two points.

#include <stdio.h>
#include <math.h>

void main() {

double x1, x2, y1, y2,var1, var2, var3, var4, var5, dist, slope;

printf("\nPlease enter the coordinates of the first point. Enter floats only.\n");
scanf("%lf %lf",&x1, &y1);

printf("Please enter the coordinates of the second point. Enter floats only.\n");
scanf("%lf %lf",&x2, &y2);

var1 = x2 - x1;
var2 = y2 - y1;

var3 = pow(var1, 2.0);
var4 = pow(var2, 2.0);

var5 = var3 + var4;

dist = sqrt(var5);
slope = var2/var1;

printf("\nThe distance between the points is %5.2lf.\n",dist);
printf("\nThe slope of the line formed by the two points is %5.2lf.\n",slope);

}

