//program to enum example weekdays
#include <stdio.h>
enum Week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main() {
    enum Week day;
    day = Wednesday;
    printf("Numeric value of Wednesday is: %d\n", day);
    return 0;
}