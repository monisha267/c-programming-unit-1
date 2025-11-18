#include<stdio.h>
int main()
{
        int arr[]={10,25,30,45,45};
        int i,key,found=0;
        printf("Enter the element to be searched:");
        scanf("%d",&key);
        for(i=0;i<5;i++)
        {
                if(arr[i]==key)
                {
                        found=1;
                }
        }
        if(found==1)
                printf("Element %d found at index %d\n",key,i++);
        else
                printf("Element %d not found in the array\n",key);
        return 0;
}