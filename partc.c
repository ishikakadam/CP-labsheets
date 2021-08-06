#include<stdio.h>
#define SIZE 10 // Bubble sort implementation
void main(){ // Arranging the list of array numbers
  int a[SIZE], i, j, temp;
  printf("Enter 10 numbers");
  for(i=0; i<SIZE; i++) //Reading the array elements
  scanf("%d", &a[i]);
  for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE-1-i; j++){
           if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
}
for(i=0; i<SIZE; i++) //To display the ordered list of numbers
   printf("%d",a[i]);
}