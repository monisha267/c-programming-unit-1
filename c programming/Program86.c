//program to demonstrate conditional compilation
#include <stdio.h>
#define DEBUG  // comment this line to disable debug messages
int main() {
    int a = 10, b = 5, sum;
    sum = a + b;
#ifdef DEBUG
    printf("Debug: a = %d, b = %d\n", a, b);
#endif
    printf("Sum = %d\n", sum);
    return 0;
}