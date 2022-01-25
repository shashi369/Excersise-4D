/*2. Write a C program to calculate the factorial of a given numbers using pointers.*/

#include <stdio.h>

void fact(int *n) {
  int i, a;

  a = *n;

  for (i = 0; a != 1; i++) {
    *n = (*n) * (a - 1);
    a--;
  }
}

void main() {
  int n;

  printf("Enter any number: ");
  scanf("%d", &n);

  fact(&n);

  printf("factorial is %d", n);
}
