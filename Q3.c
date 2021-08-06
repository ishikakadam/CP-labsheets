#include <stdio.h>
int main()
{
    int a, b, c, d, sum, l1=0, l2=0; 
    printf("Enter any four integers: \n"); 
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a>b && a>c) || (a>b && a>d) || (a>c && a>d))         
    { 
        if((b>c && b>d) || (b>a && b>c) || (b>d && b>a))
            {
                sum=a+b;      
                printf("%d + %d = %d \n",a,b, sum);
            }
        
        else if((c>b && c>d) || (c>a && c>b) || (c>d && c>a)) 
            {
             sum=a+c;      
             printf("%d + %d = %d \n",a,c, sum);
            }

        else                                             
        printf("%d + %d = %d \n",a,d, (a+d));
    }

    else if((b>c && b>d) || (b>a && b>c) || (b>d && b>a))       
    {
        if((c>b && c>d) || (c>a && c>b) || (c>d && c>a))        
        printf("%d + %d = %d \n",c,b, (c+b));

        else                                              // d is the other largest number 
        printf("%d + %d = %d \n",b,d, (b+d));
    }
    else                                                  // c and d are the largest numbers
    printf("\n %d + %d = %d \n",c,d, (c+d));
}