//
//convert distance from cm to m-cm
#include <stdio.h>
#include <math.h>

void main(){

int a, var1, var2;

printf("\nEnter the distance in cm.\n");
scanf("%d",&a);


var1 = a/100;
var2 = a%100;

printf("\nThis distance in  %dm %dcm.\n",var1,var2);
}
