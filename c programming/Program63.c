// program to allocate and free dynamic memory
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Allocate memory dynamically
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Display elements
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    // Free allocated memory
    free(arr);
    return 0;
}
