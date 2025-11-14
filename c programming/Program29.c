#include<stdio.h>
int main()
{
     int x=10;
     printf("initial x=%d\n",x);
     x+=5;
     printf("x+5 %d\n",x);
     x-=3;
     printf("x-=3 %d\n",x);
     x*=2;
     printf("x*=2 %d\n",x);
     x/=4;
     printf("x/=4 %d\n",x);
     x%=3;
     printf("x%%=3 %d\n",x);
     return 0;
}