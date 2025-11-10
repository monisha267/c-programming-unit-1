#include <stdio.h>
 int main()
 {
 char name[20];
 int age;
 float marks;
 printf("Enter name: ");
 scanf("%s", name);
 printf("Enter age: ");
 scanf("%d", &age);
 printf("Enter marks: ");
 scanf("%f", &marks);
 printf("\nStudent Details:\n");
 printf("Name: %s\nAge: %d\nMarks: %.2f\n", name, age, marks);
return 0;
 }
 