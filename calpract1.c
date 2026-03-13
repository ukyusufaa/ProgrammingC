#include <stdio.h>

int main(){

    char op;
    double num1, num2, result;
    char choice;
    int useMemory = 0;

    do{
        if(useMemory){
        printf("Enter another number to continue from here on %.2lf", result);
        scanf("%lf", &num2);
        num1 = result;
        }
          else{
            printf("Enter first number\n ");
            scanf("%lf", &num1);
            printf("Enter second number \n ");
            scanf("%lf", &num2);
            }

        printf("Select an operator + - * / ");
        scanf("%c", &op);

        if (op == +) num1 + num2 = result;
        else if (op == -) num1 - num2 = result;
        else if (op == *) num1 * num2 = result;
        else if (op == /){
            num2 != 0;
            printf("Zero is not accepted");
            continue;
            }
            printf("This is an invalid operator");
            continue;

            printf("Do you want to continue(Y/N)? ");
            scanf("%c", &choice;

            if(choice == 'y' || choice == 'Y');
            useMemory = 1;
            else
                useMemory = 0;

            printf("Do you want to exit(Y/N)?");
    }
            while(choice != 'y' && choice != 'Y');

            printf("Good Bye");


        return 0;
    }
