#include<stdio.h>
int main()
{
	int a,b,c,d,max1,max2,sum;
	int i=1;
	printf("Enter the numbers: \n");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	switch(i)
	{
		case 1: if(a>b)
					{
						if(c>a)
							max1=c;
						else
							max1=a;			
					}
				else
					{
						if(c>b)
							max1=c;
						else
							max1=b;
					}		
	
		case 2: if(b>c)
					{
						if(d>b)
							max2=d;
						else
							max2=b;
					}
				else
					{
						if(d>c)
							max2=d;
						else
							max2=c;
					}
				break;
	}	
	sum=max1+max2;
	printf("\nSum of maximum 2 values = %d\n",sum);
	return(0);
}