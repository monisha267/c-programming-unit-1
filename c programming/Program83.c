//program to read characters from file using fgetc()
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;

    fp = fopen("charfile.txt", "r");
    if(fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Characters in the file:\n");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}