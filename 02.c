#include <stdio.h>
/*2. Write a C program to calculate the factorial of a given numbers using pointers.*/
void fact(int *n){
    int i,a;
    a=*n;
    for(i=0;a!=1;i++){
        *n=(*n)*(a-1);
        a--;
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    fact(&n);
    printf("factorial is %d",n);
}