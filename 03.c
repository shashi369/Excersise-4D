#include <stdio.h>
/*3. Write a C program to swap two numbers using call by reference method.*/
void swp(int *a,int *b){
    *a =*a + *b;
    *b = *a - *b;
    *a = *a -*b;
}
int main(){
    int a=5,b=6;
    printf("\nValue of a=%d\n",a);
    printf("Value of b=%d\n",b);
    swp(&a,&b);
    printf("\n---VALUE AFTER SWAPPING----\n\n");
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n",b);
}