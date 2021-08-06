#include<stdio.h>

int add(int x,int y) //called funtion
{
	int z=x+y;
	return z;
}

void main() //calling function
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	c = add(a,b);
	printf("%d",c);
}

#define Size 10
main(){ // Binary search implementation
   int List[Size],index, upper, lower, key, mid;
   printf("Enter Array elements:");
   for(index = 0; index<Size; index++)
       scanf("%d", &List[index]);
   printf("Enter search element");
   scanf("%d",&key);
   upper=Size-1; lower=0;
   while( lower<=upper ){
       mid =(lower + upper)/2;
       if(key > List[mid]) lower = mid+1;
       else if(key < List[mid]) upper = mid-1;
       else{
        printf("Element found at location %d in the array", mid);
        return;
       }
    }
printf("-1"); //As element is not found
}

#define SIZE 10 // Bubble sort implementation
void main(){ // Arranging the list of array numbers
  int a[SIZE], i, j, temp;
  printf(“Enter 10 numbers”);
  for(i=0; i<SIZE; i++) //Reading th array elements
  scanf(“%d”, &a[i]);
  sorted = 0; //Actual sorting
  for(i=0; i<SIZE-1 && !sorted; i++){
    sorted = 1;
    for(j=0; j<((SIZE-i)-1); j++){
       if(a[j]>a[j+1]){
            sorted = 0;
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
for(i=0; i<SIZE; i++) //To display the ordered list of numbers
   printf(“%d,”,a[i]);
}