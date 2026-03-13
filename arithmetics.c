#include <stdio.h>

int main(){

    int a, b;

    printf("Welcome \n");

    printf("Enter the first number to add: ");
    scanf("%d", &a);
    printf("Enter the second number to add: ");
    scanf("%d", &b);
    printf("The numbers you entered: %d and %d\n", a,b);
    printf("The numbers added: %d + %d = %d\n", a, b, a + b);

    printf("\nEnter two numbers to subtract: ");
    scanf("%d %d", &a,&b);
    printf("The numbers you entered: %d and %d\n", a,b);
    printf("The numbers subtracted: %d - %d = %d\n", a, b, a - b);

    printf("\n Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %.2f\n", (float)a/b);
    printf("Remainder: %d\n", a % b);

    return 0;

    }
