#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in append mode
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1; // Exit if file opening fails
    }

    printf("Enter text to append: ");
    fgets(data, sizeof(data), stdin); // Read input from user

    // Write input to file
    fputs(data, fp);

    fclose(fp); // Close the file
    printf("Data appended successfully!\n");

    return 0;
}