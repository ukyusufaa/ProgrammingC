#include <stdio.h>

int main(){

    int a, b;
    char op;
    char choice;

    do{

    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("choose an operation +, -, * /, % : ");
    scanf(" %c", &op);



        if(op == '+'){
            printf("Result = %d\n", a + b);
            }
        else if(op == '-'){
            printf("Result = %d\n", a - b);
            }
        else if(op == '*'){
            printf("Result: %d\n", a * b);
            }
        else if(op == '/'){
            if(b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Retry again\n");}
        else if(op == '%'){
            if(b != 0)
                printf("Result: %d", a % b);
            else
                printf("Retry again\n");
                }

            else{
                printf("Invalid operator!\n");
            }

            printf("\nDo you want to continue Y/N? ");
            scanf(" %c", &choice);
    }
            while(choice == 'y' ||choice == 'Y');
            printf("Goodbye\n");

            return 0;
        }

