#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
