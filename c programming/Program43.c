#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50};
    int n=5;
    int value=35,i;
    for(i=n-1;i>=0;i--)
    arr[i+1]=arr[i];
    arr[i+1]=value;
    n++;
    printf("Array after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}

    