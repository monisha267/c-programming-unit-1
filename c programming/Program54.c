#include <stdio.h>
struct student {
    int id;
    char name [20];
};
void display(struct student *s)
{
    printf("Student ID: %d, Name: %s\n", s->id, s->name);
}
int main ()
{
    struct student s1={101,"anu"};
    display(&s1);
    return 0;
}