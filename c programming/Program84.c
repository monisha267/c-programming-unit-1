//program to demonstrate union memory sharing
#include <stdio.h>
union Data {
    int i;
    float f;
    char ch;
};
int main() {
    union Data d;
    d.i = 10;
    printf("d.i = %d\n", d.i);
    d.f = 5.75;
    printf("d.f = %.2f\n", d.f);
    d.ch = 'A';
    printf("d.ch = %c\n", d.ch);

    // Notice previous values are overwritten
    printf("\nAfter all assignments:\n");
    printf("d.i = %d (garbage)\n", d.i);
    printf("d.f = %.2f (garbage)\n", d.f);
    return 0;
}