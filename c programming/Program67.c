// count number of uppercase,digits and special characters in a string using pointers
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    char *ptr;
    int uppercase_count = 0, digit_count = 0, special_count = 0;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }

    ptr = str; // Initialize pointer to the start of the string

    while (*ptr != '\0')
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            uppercase_count++;
        }
        else if (*ptr >= '0' && *ptr <= '9')
        {
            digit_count++;
        }
        else if (!((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= '0' && *ptr <= '9')))
        {
            special_count++;
        }
        ptr++; // Move to the next character
    }

    printf("Number of uppercase letters: %d\n", uppercase_count);
    printf("Number of digits: %d\n", digit_count);
    printf("Number of special characters: %d\n", special_count);

    return 0;
}