#include<stdio.h>
int main()
{
    int arr[5]={5,10,15,20,25};
    int*ptr=arr;
    printf("ptr=%p,*ptr=%d",ptr,*ptr);
    ptr++;
    printf("after ptr++;:ptr=%p,*ptr=%d",ptr,*ptr);
    ptr+2;
    printf("after ptr+2;:ptr=%p,*ptr=%d",ptr,*ptr);
    return 0;
}
