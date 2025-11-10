#include <stdio.h>
 int main()
 {
 const int maxScore = 100;
 volatile int sensorValue = 50;
 printf("Constant Value: %d\n", maxScore);
 printf("Volatile Value: %d\n", sensorValue);
 return 0;
}