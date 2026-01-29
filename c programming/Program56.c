#include <stdio.h>
#include <stdlib.h>
int main()
{
    int*arr;
    arr=(int*)calloc(5,sizeof(int));
    if(arr==NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            printf("%d",arr[i]);
            free(arr);
            return 0;
        }
    }
}