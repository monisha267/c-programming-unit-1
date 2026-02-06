// c program to rotate a string left by N positions
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void rotate_left(char *str, int n) {
    int len = strlen(str);
    n = n % len; // Handle cases where n > len
    char temp[MAX_LENGTH];

    // Copy first n characters to temp
    strncpy(temp, str, n);
    temp[n] = '\0';

    // Shift the remaining characters to the front
    for (int i = 0; i < len - n; i++) {
        str[i] = str[i + n];
    }

    // Append the characters from temp to the end
    strcat(str, temp);
}