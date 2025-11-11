#include<stdio.h>
int main()
{
    int a,b,c;
    c=(a=5,b=10,a+b);
    printf("c=%d",c);
    return 0;
}