#include <stdio.h>
int main()
{
	int x,days, months, years;
	printf("Enter the total number of days = \n");
	scanf("%d", &x);

	years = x / 365;
	months= (x % 365)/30;
	days= x % 30;

	printf(" Years= %d \n Months= %d \n Days= %d \n", years,months,days);
	return 0;
}
