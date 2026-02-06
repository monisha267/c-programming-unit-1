//check whether a string follows palindrome ignoring spaces
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    char cleaned[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove spaces and convert to lowercase
    for(i = 0; i < strlen(str); i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    // Check for palindrome
    int len = strlen(cleaned);
    int isPalindrome = 1;
    for(i = 0; i < len / 2; i++) {
        if(cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("The string is a palindrome (ignoring spaces).\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}