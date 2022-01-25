/*6. Write a C program to input a number, calculate its square and display the memory address of the inputted number and the square.*/

#include <stdio.h>

void squr(int *n) {
  printf("Memory address of inputted number is %p", n);

  int sq = (*n) * (*n);

  printf("\nSquare of number is %d", sq);
  printf("\nMemory address of square number is %p", &sq);
}
void main() {
  int n;

  puts("Enter any number: ");
  scanf("%d", &n);

  squr(&n);
}
