#include<stdio.h>

#define Size 10
int main(){ // Binary search implementation
   int List[Size],index, upper, lower, x, mid;
   printf("Enter Array elements:");
   for(index = 0; index<Size; index++)
       scanf("%d", &List[index]);
   printf("Enter search element : ");
   scanf("%d",&x);
   upper=Size-1; lower=0;
   while( lower<=upper ){
       mid =(lower + upper)/2;
       if(x > List[mid]) lower = mid+1;
       else if(x < List[mid]) upper = mid-1;
       else{
        printf("Element found at location %d in the array", mid);
        return 1;
       }
    }
printf("-1 \n"); //As element is not found
}