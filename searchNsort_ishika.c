#include<stdio.h>

int input[10];
int linearSearch(int x, int array[]);  // Defining the functions
int binarySearch(int x, int array[]);
void bubbleSortDec(int array[]);

void main(void)
{	
	int p = 0;
	int q;
	int x;
	while(p != 4)
	{
		printf("Enter 1 for linear Search,2 for Binary Search, 3 for Bubble Sort, 4 to exit :  ");
		scanf("%d", &p);
		
		switch (p)
		{
			case 1 : 	for(int i = 0; i < 10; i++) //Defining the Linear Search function
						{
							printf("Enter the %d element of the array : ", (i + 1));
							scanf("%d", &x);
							input[i] = x;
						}
						printf("Enter search element : "); 
                        scanf("%d", &x);
						q = linearSearch(x, input);
						break;

			case 2 : 	for(int i = 0; i < 10; i++)
						{		
							printf("Enter the %d element of the array : ", (i + 1));
							scanf("%d", &x);
							input[i] = x;
						}
						printf("Enter the number to search: ");
						scanf("%d", &x);
						q = binarySearch(x, input);
						break;

			case 3 :    for(int i = 0; i < 10; i++)
						{		
							int x;
							printf("Enter the element %d of the array : ", (i + 1));
							scanf("%d", &x);
							input[i] = x;
						}
						bubbleSortDec(input);
						q = -2;
						break;

			case 4 :	printf("Bye Bye SearchNSort! ");
						q = -2;
						break;

			default :   break;

		}
		if(q == -2)
			printf("\n");
		else if(q == -1)
			printf("The element was not found\n");
		else
			printf("%d was found in element %d of the array\n",x, q + 1 );
	}
}

int linearSearch(int x, int array[])  // Declaring the Linear Search function
{
	int j = 10;
	for(int i = 0; i < j; i ++)
	{
		if(x == array[i])
		{
			return (i);
		}
	}
	return(-1);
}

int binarySearch(int x, int array[]) //Declaring the binary search function
{
	int upper, lower, mid;
	int j = 10;
	upper = j - 1;
	lower = 0 ;
	while(lower <= upper)
	{
	mid = (lower + upper)/2;
	if(x > array[mid])
		lower = mid + 1;
	else if(x < array[mid]) 
		upper = mid - 1;
	else
		return(mid);
	}
	return(-1);
}

void bubbleSortDec(int array[]) //Declaring the bubble sort function
{
	int j = 10;
	int check = 1;
	while(check == 1)
	{
		check = 0;
		for(int i = 0; i+1 < j; i++)
		{
			if(array[i + 1] > array[i])
			{
				check = 1;
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}

	}
	printf("The elements are sorted in the decreasing order as follows\n");
	for(int i = 0; i < j; i++)
	{
		printf("%d\n", array[i]);
	}
	printf("\n");
}