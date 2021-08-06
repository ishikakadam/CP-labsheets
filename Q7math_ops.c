#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,expr1,expr2;
	printf("Enter the value of x and y(non zero) \n");
	scanf("%f %f", &x,&y);
	printf("The values entered by the user:\n x = %f \n y = %f \n",x,y);

	expr1=(exp(x)*sin(1.0472) + 5.6*pow(10,-5))/(3*cos(0.5236)); // pi=3.142 | 60degrees= 60*pi/180=1.0472 | 30degrees= 30*pi/180= 0.5236
	expr2= sin((atan(0.33)+ 3.142)/(2*y)); // pi=3.142

	printf("The value of expr1: %f \nThe value of expr2: %f \n",expr1,expr2);
	return 0;
}