#include <stdio.h>
int main(){
int a = 5, b = 10;
printf("Result1: %d\n", (a <b) && (b > 0));
printf("Result2: %d\n", (a > b) || (b > 0));
printf("Result3: %d\n", !(a= b));
}