#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    int memory;
    int total;
    char op;
    char input[30];

    do{
        printf("Please choose an 'Operator' (+ - * /) or 'Save' (S) or 'Quit' (Q): ");
        scanf(" %c", &op);

        if(op == 'Q' || op == 'q'){
            printf("Are you sure you want to Quit(Y/N)? ");
            scanf(" %c", &op);}
                if(op == 'Y' || op == 'y'){
                printf("Goodbye");
                break;
        }
        else if(op == 'S' || op == 's'){
                memory = total;
            continue;
        }

        printf("Enter the first number or select 'Recall' (R): ");
        scanf(" %s",input);
        if(input[0] == 'R' || input[0] == 'r'){
        a = total;}
        else{
            a = atoi(input);}

        printf("Enter the second number or select 'Recall' (R): ");
        scanf(" %s",input);
        if(input[0] == 'R' || input[0] == 'r'){
        b = total;}
        else{
            b = atoi(input);}

        if(op == '+'){
            total = a + b;
            printf("%d\n",total);
        }
        else if(op == '-'){
            total = a - b;
            printf("%d\n",total);
        }
        else if(op == '*'){
            total = a * b;
            printf("%d\n",total);
        }
       else if(op == '/' &&  b != 0){
            total = a / b;
            printf("Result: %d\n", total);}
       else{
            printf("ZERO DIVISION: N O T    A L L O W E D\n");}

    }while(op != 'Q' || op != 'q');

    return 0;
}
