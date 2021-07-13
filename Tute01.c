/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float a,b,avg;
  printf("Input mark 1:");
  scanf("%f",&a);
  printf("Input mark 2:");
  scanf("%f",&b);  
  avg=(a+b)/2;
  printf("Average = %.2f",avg);
  return 0;
}

