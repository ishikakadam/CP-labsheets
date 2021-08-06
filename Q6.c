#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any integer value: \n");
	scanf("%d",&n);

	if (n>0)
	{
		i=n,sum=n;
		while(i<2*n)
			sum= sum + (++i);
	}
	else if(n<0)
	{
		i=2*n,sum= 2*n;
		while(i>3*n)
			sum= sum + (--i);
	}
	else
	{
		printf("Enter a non zero number");
	}
	printf("\n The sum of integers is %d \n", sum);
}