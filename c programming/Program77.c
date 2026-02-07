//program to read data from a file
#include <stdio.h>
int main() 
{
FILE *fp;
char ch;
fp = fopen("data.txt", "r"); // Opens file for reading
if(fp == NULL)
 { 
 printf("File not found!\n");
  return 1;
 }
while((ch = fgetc(fp)) != EOF)
putchar(ch); 
fclose(fp);
}