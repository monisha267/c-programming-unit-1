#include <stdio.h>
struct date 
{
    int date;
    int month;
    int year;
};
struct student {
    int id;
    char name[20];
    struct date dob;
};
int main() {
    struct student s1={12,"priya",{15,8,1995}};
    printf("Student Name: %s\n", s1.name);
    printf("Date of Birth: %02d/%02d/%d\n", s1.dob.date, s1.dob.month, s1.dob.year);
    return 0;
}