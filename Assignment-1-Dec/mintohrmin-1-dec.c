//
//convert min to hours-min
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("\nEnter the time in minutes.\n");
scanf("%d",&a);

b = a/60;
c = a%60;



printf("\nEntered time is same as %dhours  %dminutes.\n",b,c);
} 
