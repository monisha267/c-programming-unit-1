#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr=(int*)malloc(3*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            ptr[i]=i+1;
        }
        ptr=(int*)realloc(ptr,5*sizeof(int));
        if(ptr==NULL)
        {
            printf("Memory not reallocated.\n");
            return 1;
        }
    }

        for(int i=3;i<5;i++)
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