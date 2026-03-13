#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    int memory = 0;
    int total = 0;
    char op;
    char input[30];

    do{
        printf("Select an operator + - * / or (Q to quit) or (S to save) : ");
        scanf(" %c", &op);
        if(op == 'Q' || op == 'q'){
            printf("Are you sure you want to quit?(Y/N): ");
            scanf(" %c", &op);}
            if(op == 'Y' || op == 'y'){
                printf("Good Bye");
                    break;}

        else if(op == 'S' || op == 's'){
            memory = total;
                continue;
                }

        printf("Enter first number or R(Recall): ");
        scanf(" %s", &input);
            if(input[0] == 'R' || input[0] == 'r'){
                a = memory;
                }
            else{
                a = atoi(input);
                }
        printf("Enter second number R(Recall: ");
        scanf(" %s", &input);
            if(input[0] == 'R' || input[0] == 'r'){
            b = memory;
            }
            else{
            b = atoi(input);
            }
        if(op == '+'){
            total = a + b;
        printf("%d\n", total);
        }
        else if(op == '-'){
            total = a - b;
        printf("%d\n", total);
        }
        else if(op == '*'){
            total = a * b;
        printf("%d\n", total);
        }
        else if(op == '/' && b != 0){
                total = a / b;
            printf("%d\n" , total);
            }
            else{
                printf("cannot divide by ZERO\n");
            }

    }while(op != 'Q' && op != 'q');

    return 0;
}
