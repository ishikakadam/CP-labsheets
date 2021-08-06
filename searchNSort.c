#include<stdio.h>
int main() // Linear search implementation
{
  int List[10],index,x; //Taking 10 elements in an array
  printf("Enter Array elements:");
  for(index = 0; index<10; index++)
      scanf("%d",&List[index]);
  printf("Enter search element : ");
  scanf("%d", &x);
  for(index=0;index<10; index++){
     if(x==List[index]){
       printf("Element found at %d location in the array \n",index);
    return 1;
    }
  }
  printf("-1 \n"); // if x is not found in the array
}

