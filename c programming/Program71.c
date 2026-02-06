//remove duplicate characters from a string
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];
    int i, j = 0;
    int found;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        found = 0;
        // Check if str[i] is already in result
        for (j = 0; result[j] != '\0'; j++)
        {
            if (str[i] == result[j])
            {
                found = 1;
                break;
            }
        }
        // If not found, add it to result
        if (!found)
        {
            result[j] = str[i];
            result[j + 1] = '\0';
        }
    }

    printf("String after removing duplicate characters: %s\n", result);

    return 0;
}