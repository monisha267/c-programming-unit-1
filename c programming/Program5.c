#include <stdio.h>
int main()
 {
float length, breadth, area, perimeter;
printf("Enter length and breadth: ");
scanf("%f %f", &length, &breadth);
area= length * breadth;
perimeter = 2 * (length + breadth);
printf("Area = %.2f\nPerimeter = %.2f", area, perimeter);
return 0;
}