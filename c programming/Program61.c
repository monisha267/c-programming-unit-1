#include <stdio.h>

void display(int *a, int n);
void bubbleAsc(int a[], int n);
void bubbleDesc(int a[], int n);
int binarySearch(int a[], int n, int key);

int main()
{
    int a[50], n, choice, key, pos;
    int i;

    do
    {
        printf("\n----- MENU -----");
        printf("\n1. Input Array");
        printf("\n2. Bubble Sort Ascending");
        printf("\n3. Bubble Sort Descending");
        printf("\n4. Binary Search");
        printf("\n5. Display Array (Using Pointer)");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter elements:\n");
            for (i = 0; i < n; i++)
                scanf("%d", &a[i]);
            break;

        case 2:
            bubbleAsc(a, n);
            printf("Array sorted in Ascending order.\n");
            break;

        case 3:
            bubbleDesc(a, n);
            printf("Array sorted in Descending order.\n");
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);
            pos = binarySearch(a, n, key);
            if (pos == -1)
                printf("Element not found.\n");
            else
                printf("Element found at position %d\n", pos + 1);
            break;

        case 5:
            display(a, n);
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}

/* Display using pointer */
void display(int *a, int n)
{
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

/* Bubble sort ascending */
void bubbleAsc(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/* Bubble sort descending */
void bubbleDesc(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/* Binary Search (array must be sorted) */
int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}