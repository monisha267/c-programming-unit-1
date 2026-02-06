//program to find a ASCII value of a character in a string
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

    printf("ASCII values of characters in the string:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("Character: '%c' ASCII Value: %d\n", str[i], (int)str[i]);
    }

    return 0;
}