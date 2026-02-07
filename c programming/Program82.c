// program to write characters to file using fputc()
#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("charfile.txt", "w");

    if(fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }
    fputc('A', fp);
    fputc('\n', fp);
    fputc('B', fp);
    fclose(fp);
    printf("Characters written successfully.\n");
    return 0;
}