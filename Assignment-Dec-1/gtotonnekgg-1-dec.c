//
//convert mass in grams to tonnes-kg-g
//ton = 1016.0469 kg and tonne or metric ton = 1000 kg
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("\nEnter some mass in grams.\n");
    scanf("%d",&a);

b = a/1000000;
c = (a%1000000)/1000;
d = a%1000;



printf("\nEntered weight is same as %dt  %dkg %dg.\n",b,c,d);
} 
