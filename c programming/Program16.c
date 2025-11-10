#include <stdio.h>
 int main()
 {
 int num;
 float price;
 char grade;
 printf("Enter an integer, a float and a character: ");
 scanf("%d %f %c", &num, &price, &grade);
 printf("\nInteger: %d\n", num);
 printf("Float: %.2f\n", price);
 printf("Character: %c\n", grade);
 return 0;
}