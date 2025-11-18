#include <stdio.h> //binary serach
int main()
{
    int arr[6]={5,12,18,25,32,40};
    int low=0,high=5,mid,key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element %d found at index %d\n",key,mid+1);
            return 0;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    printf("Element %d not found in the array\n",key);
    return 0;
}