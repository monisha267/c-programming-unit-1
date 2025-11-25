#include <stdio.h>
int main()
{
    int arr[5]={25,12,22,64,11};
    int i,j,temp;
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

printf("Sorted array in ascending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}  