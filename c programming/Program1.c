#include<stdio.h>
int main()
  {
    char name[20];
    int age;
    float marks;
    printf("enter name, &age, &marks:");
    scanf("%s %d %f", name, &age,&marks);
    printf("Name:%s\nAge: %d\nMarks: %2f",name,age,marks);
    return 0;
}