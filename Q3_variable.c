#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any 2 numbers \n");
	scanf("%d %d",&a,&b);
	printf("Initial value of a = %d \nInitial value of b = %d \n",a,b);

	int c=a; //variable c stores the value of a
	a=b;
	b=c;

	printf("The swapped values will be:\n a= %d \n b= %d \n",a,b);
	return 0;
}
