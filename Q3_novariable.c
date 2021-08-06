#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers \n");
	scanf("%d %d", &a,&b);
	printf("Initial value of a = %d \nInitial value of b = %d \n",a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("The swapped values will be:\n a= %d \n b= %d \n",a,b);
	return 0;
}