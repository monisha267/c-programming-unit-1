#include <stdio.h>
int main()
{
int n, i = 1, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
while(i<= n)
{
sum = sum + i;
i++;
}
printf("Sum = %d", sum);
return 0;
}