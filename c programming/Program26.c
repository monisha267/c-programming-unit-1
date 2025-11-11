#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("largest number=%d\n",a);
    }
    else if(b>a&&b>c)
    {
        printf("largest number=%d\n",b);
    }
    else
    {
        printf("largest number=%d\n",c);
    }
    return 0;
}