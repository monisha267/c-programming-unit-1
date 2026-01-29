#include<stdio.h>
struct student{
    int id;
    char name[20];
};
int main()
{
    struct student s1={201,"ravi"};
    struct student s2={202,"sita"};
    printf("Student 1 ID: %d, Name: %s\n",s1.id,s1.name);
    printf("Student 2 ID: %d, Name: %s\n",s2.id,s2.name);
    return 0;
}
