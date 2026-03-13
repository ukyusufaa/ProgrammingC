#include <stdio.h>

int main(){
    int a, b;

    printf("Welcome\n");
    printf("*************\n");

    printf("\tEnter two numbers: \n");
    scanf("%d%d", &a,&b);

    printf("The numbers added = %d\n", a + b);
    printf("The numbers subtracted = %d\n", a - b);
    printf("The numbers multiplied = %d\n", a * b);
    printf("The numbers divided = %d\n", a / b);
    printf("The Modulus of the numbers: %d\n", a % b);
    printf("Increment 1 for a: %d\n", a, a++);
    printf("Decrement 1 for b: %d\n", b, b--);
    return 0;

    }
