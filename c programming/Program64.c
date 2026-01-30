// program to count the frequency of each character in a string
#include <stdio.h>
#include <string.h>
#define MAX 256
int main() {
    char str[100];
    int freq[MAX] = {0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Calculate frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Display frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}