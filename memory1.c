#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, result, memory = 0;
    char op;
    char input[30];

    do{
        printf("Enter operator (+, Q for Quit)");
        scanf(" %c", &op);

        printf("Enter first number(or M for memory) ");
        scanf("%s", &input);
        if(input[0] == 'M' || input[0] == 'm')
            a = memory;
        else
            a = atoi(input);

        printf("Enter second number(or M for memory) ");
        scanf("%s", &input);
        if(input[0] == 'M' || input[0] == 'm')
            b = memory;
        else
            b = atoi(input);

        if (op == '+' ) result = a + b;

        printf("Result %d\n", result);
        memory = result;
        }
        while(op != 'Q' || op != 'q');

        return 0;
    }

