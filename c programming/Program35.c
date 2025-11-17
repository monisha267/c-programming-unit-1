#include <stdio.h>
int main(){
int n, i = 1, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
do
{
    sum = sum + i;
    i++;
}
while(i<= n);
printf("Sum = %d", sum);
return 0;
}