/*5. Write a C program to check whether an input number is odd or even using pointer.*/

#include <stdio.h>

void eveodd(int *n) {
  if (*n % 2 == 0) {
    puts("even");
  } else {
    puts("odd");
  }
}

void main() {
  int n;

  puts("Enter any number: ");
  scanf("%d", &n);

  eveodd(&n);
}
