#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, total = 0;
    char op;
    char input[100];

    do{
        printf("Select an operation:(+ - * / or  (Q to Quit) or (C to continue)) ");
        scanf(" %c", &op);

        if(op == 'q' || op == 'Q'){
                break;}
        else if(op == 'c' || op == 'C'){
            total = 0;
            continue;}

        printf("Enter first number or (M): ");
        scanf(" %s", &input);
        if(input[0] == 'm' || input[0] == 'M'){
            a = total;
            }
            else{
            a = atoi(input);
            }
        printf("Enter second number or(M): ");
        scanf(" %s", &input);
        if(input[0] == 'm' || input[0] == 'M'){
            b = total;
            }
            else{
            b = atoi(input);
            }
        if(op == '+'){
            total = a + b;
            printf(" %d\n", total);
            }
        else if(op == '-'){
            total = a - b;
            printf(" %d\n", total);
            }
        else if(op == '*'){
            total = a * b;
            printf(" %d\n", total);
            }
        else if(op == '/' && b != 0)
        {
           total = a / b;
           printf(" %d\n",total);
        }
        else
        {
        printf("Sorry can't divide with ZERO\n");
        }

        }while(op != 'q' && op != 'Q');
    return 0;
}
