//find the smallest and largest word in a string
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    char smallest[MAX_LENGTH], largest[MAX_LENGTH];
    char current_word[MAX_LENGTH];
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

    smallest[0] = '\0';
    largest[0] = '\0';
    i = 0;

    while (i <= len)
    {
        j = 0;
        // Extract a word
        while (str[i] != ' ' && str[i] != '\0')
        {
            current_word[j++] = str[i++];
        }
        current_word[j] = '\0';

        // Compare lengths to find smallest and largest
        if (j > 0) // Only consider non-empty words
        {
            if (smallest[0] == '\0' || j < strlen(smallest))
            {
                strcpy(smallest, current_word);
            }
            if (largest[0] == '\0' || j > strlen(largest))
            {
                strcpy(largest, current_word);
            }
        }
        i++; // Move to the next character after space
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}