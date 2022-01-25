/*7. Write a C program to input a number and display its multiplication table using pointer.*/

#include <stdio.h>

void mult(int *n) {
  int i;

  for (i = 1; i <= 10; i++) {
    printf("\n%d * %d = %d", *n, i, (*n) * i);
  }
}

void main() {
  int n;

  printf("Enter any number: ");
  scanf("%d", &n);

  mult(&n);
}
