// program to read a string and replace all vowels with '*'
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main()
{
    char str[MAX_LENGTH];
    int i, length;
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);
    length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }
    for (i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = '*';
        }
    }
    printf("Modified string: %s\n", str);

    return 0;
}