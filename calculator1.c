#include <stdio.h>

int main(){
    char op;
    double num1, num2, result;
    char choice;
    int useMemory = 0;

    do{
        if (useMemory){
            printf("Enter next number to use with previous result %.2lf: ", result);
            scanf("%lf", &num2);
            num1 = result; //use memory
        } else{
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            }

            printf("Enter operation(+ - * /):");

            scanf(" %c", &op); //note the space before the %c

            if (op == '+') result = num1 + num2;
            else if (op == '-') result = num1 - num2;
            else if (op == '*') result = num1 * num2;
            else if (op == '/') {
                if (num2 != 0)
                    result = num1 / num2;
                else{
                    printf("Error: Division by zero\n");
                    continue; //skip rest and repeat
                }
            }else{
                printf("Invalid opreration!\n");
                continue;
                }

                printf("Result: %.2lf\n", result);
                printf("Do you want to continue using this result? (y/n): ");
                scanf(" %c", &choice);

                if (choice == 'y' || choice == 'Y')
                    useMemory = 1;
                else
                    useMemory = 0;

                printf("Do you want to exit calculator? (y/n): ");
                scanf(" %c", &choice);

            }while (choice != 'y' && choice != 'Y');

            printf("Calculator exited\n");
            return 0;

    }
