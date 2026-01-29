#include <stdio.h>
struct student {
    int id;
    char name [20];
};
int main()
{
    struct student s={101,"anu"};
    struct student *ptr=&s;
    printf("Student ID: %d, Name: %s\n", ptr->id, ptr->name);
    return 0;

}