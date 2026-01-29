#include <stdio.h>

int main()
{
    int a[50], n, i, j, temp;
    int flag, pass;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(pass = 1; pass <= n - 1; pass++)
    {
        flag = 0;   // assume no swapping

        for(i = 0; i < n - pass; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;   // swap happened
            }
        }

        if(flag == 0)
        {
            printf("\nArray already sorted. Terminated at pass %d\n", pass);
            break;
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}