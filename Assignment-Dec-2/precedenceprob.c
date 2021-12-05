#include <stdio.h>



int main(){
	float x1, x2, x3, a=2.0, b=12.0, c=2.0;

	x1 = (3*a) - (b/6) + (c*c) - 5;
	
	x2 = 3*a - b/(6+c*c) - 5;
	
	x3 = 3*a - b/(6 + c*c + 1) - 5;

	printf("\n%5.2f\n",x1);
	
	printf("\n%5.2f\n",x2);
	
	printf("\n%5.2f\n",x3);



}
