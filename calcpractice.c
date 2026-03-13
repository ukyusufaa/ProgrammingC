#include <stdio.h>

int main(){
    char op;
    double num1, num2, result;
    char choice;
    int useMemory = 0;

    do{
        if (useMemory){
        printf("Enter next number to use with previous result %.2lf ", result);
        scanf("%lf", &num2);
        num1 = result;
        }
        else{
            printf("Enter first number: \n");
            scanf("%lf", & num1);
            printf("Enter a second number: \n");
            scanf("%lf", &num2);
            }
            printf("Select an operator: (+ - * /) \n");
            scanf(" %c", &op);

            if (op == '+') result = num1 + num2;
            else if (op == '-') result = num1 - num2;
            else if (op == '*') result = num1 * num2;
            else if(op == '/'){
                if (num2 != 0)
                    result = num1 / num2;

            else{
            printf("This is zero is not allowed, try again:\n ");
            continue;
            }
            }else{
                printf("This is an invalid operation:\n ");
                continue;
            }
            printf("Result: %.2lf\n ", result);
            printf("Do you want to continue using this result (Y/N)?\n ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
                useMemory = 1;
            else
                useMemory = 0;

            printf("Do you want to exit calculator (Y/N)? ");
            scanf(" %c", &choice);
            }
            while (choice != 'y' && choice != 'Y');

            printf("Calculator exited \n");
             return 0;

    }
