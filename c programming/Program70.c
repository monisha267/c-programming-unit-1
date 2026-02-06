//print all characters at an even index positions 
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    int i;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }

    printf("Characters at even index positions:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            printf("Index %d: '%c'\n", i, str[i]);
        }
    }

    return 0;
}