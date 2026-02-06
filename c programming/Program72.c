//print all substrings of a given string
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings of the given string are:\n");
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}