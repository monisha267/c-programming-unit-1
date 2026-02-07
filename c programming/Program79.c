//program to open a file and close it using fopen() and fclose()
#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("example.txt", "w");  // create or open file for writing
    if(fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }
    printf("File opened successfully using fopen().\n");
    fclose(fp); // closing the file
    printf("File closed successfully using fclose().\n");
    return 0;
}