#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
 int count = sizeof(arr)/sizeof(arr[0]);
    printf("total number of elements in array=%d\n", count);
    return 0;
}
