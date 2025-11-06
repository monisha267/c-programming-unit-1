#include<stdio.h>
int main()
{
    float principal,rate,time,simple_interest;
    printf("enter principal amount:");
    scanf("%f", &principal);
    printf("enter rate of interest:");
    scanf("%f", &rate);
printf("enter time in years:");
scanf("%f", &time);
simple_interest= (principal*rate*time)/100;
printf("simple interest=%.2f\n",simple_interest);
return 0;
}