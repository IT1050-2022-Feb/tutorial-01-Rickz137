/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>
// Start
int main() {
  float mark1, mark2, avg;

  printf("Enter Marks[1]:");
  scanf("%f", &mark1);

  printf("Enter Marks[2]:");
  scanf("%f", &mark2);
  
  avg = (mark1 + mark2) / 2.0;

  printf("Average : %.2f", avg);

  return 0;
}
