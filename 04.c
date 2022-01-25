/*4. Write a C program to input principle, rate and time. Calculate simple interest using pointer.*/

#include <stdio.h>

void si(float *p, float t, float r) { *p = ((*p) * t * r) / 100; }

void main() {
  float p, t, r;

  puts("Enter principle,time and rate: ");
  scanf("%f %f %f", &p, &t, &r);

  si(&p, t, r);

  printf("\nValue is Simple Interest is %.4f", p);
}
