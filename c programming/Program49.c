#include <stdio.h>
typedef struct {
    int emp_id;
    char emp_name[30];
    float salary;
} Employee;
int main()
{
    Employee e1 = {1001,"kiran",55000.50};
    printf("Employee ID: %d\n", e1.emp_id);
    printf("Employee Name: %s\n", e1.emp_name);
    printf("Employee Salary: %.2f\n", e1.salary);
    return 0;
}