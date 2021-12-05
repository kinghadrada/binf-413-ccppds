//
//convert distance from cm to km-m-cm
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("\nEnter the distance in cm.\n");
scanf("%d",&a);

b = a/100000;
c = (a%100000)/100;
d = a%100;



printf("\nThis distance is same as %dkm  %dm %dcm.\n",b,c,d);
} 
