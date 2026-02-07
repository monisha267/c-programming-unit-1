//program to demonstrate #define macro
#include <stdio.h>
#define PI 3.14
int main() {
    float r = 5, area;
    area = PI * r * r;
    printf("Area of Circle = %.2f\n", area);
    return 0;
}