#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,x1,x2,det;
	printf(" ax^2 + bx + c = 0 \n");
	printf("Enter the value of coefficient a,b and c in the above equation = ");
	scanf("%f %f %f", &a, &b,&c);

    det= b*b - 4*a*c;
    if(det>0) // roots are real and unequal
    {
    	x1= (-b + sqrt(det))/(2*a);
    	x2= (-b - sqrt(det)/(2*a));
    	printf("The value of the first root = %f \nThe value of the second root = %f \n",x1,x2);
    }
    else if (det==0) // roots are real and equal
    {
    	x1=x2= (-b/(2*a)); 
    	printf("The value of the root = %f \n",x1);
    }
  
}