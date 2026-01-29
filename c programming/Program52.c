#include <stdio.h>
struct student {
    int id;
    char name [20];
};
int main ()
{
    struct student s[2]={{101,"anu"},{102,"vasu"}};
    for (int i=0;i<2;i++)
    printf("Student ID: %d, Name: %s\n", s[i].id, s[i].name);
    return 0;
}