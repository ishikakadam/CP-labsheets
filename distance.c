#include<stdio.h>
int main()
{
    float u,a,t,d,temp1,temp2;
    printf("Enter the value of initial velocity(u) in m/s : ");
    scanf("%f",&u);
    printf("Enter the value of time(t) in seconds: ");
    scanf("%f",&t);
    printf("Enter the value of acceleration(a) in m/s^2 : ");
    scanf("%f",&a);
    temp1= u*t;
    temp2= 0.5*a*t*t;
    d= temp1+temp2;
    printf("distance travelled(d) in meters = %f \n",d);
}