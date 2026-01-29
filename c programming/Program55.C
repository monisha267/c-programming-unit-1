#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            ptr[i]=i+1;
        }
        printf("The elements of the array are:\n");
        for(int i=0;i<5;i++)
        {
            printf("%d\n",ptr[i]);
        }
        free(ptr);
        return 0;
    }
}