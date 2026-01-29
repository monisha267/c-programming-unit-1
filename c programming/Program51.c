#include <stdio.h>
struct stud {
    int id;
    char name [20];
};
void display(struct stud s[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Student ID: %d, Name: %s\n", s[i].id, s[i].name);
    }
}
int main()
{
    struct stud s[3]={{101,"anu"},{102,"vasu"},{103,"ravi"}};
    display(s, 3);
    return 0;
}