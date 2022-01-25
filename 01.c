/*1. Write a C program to calculate the two numbers using pointers.*/

#include <math.h>
#include <stdio.h>

void cal(int a, int b, int *add, int *sub, int *mul) {
  *add = a + b;
  *sub = abs(a - b);
  *mul = a * b;
}

void main() {
  int a, b, add = 0, sub = 0, mul = 0;

  printf("Enter any two numbers: ");
  scanf("%d %d", &a, &b);

  cal(a, b, &add, &sub, &mul);

  printf("Their sum is %d\n", add);
  printf("Their diff is %d\n", sub);
  printf("Their multiplication is %d\n", mul);
}
