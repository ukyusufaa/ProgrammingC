#include <stdio.h>

int main(){

    int a, b;
    char op;
    char choice;
    char c;

    do{
    printf("Enter a number: "); scanf(" %d", &a);
    printf("Enter a number: "); scanf(" %d", &b);


        printf("Select your operators:('+','-','*','/','%%', 'C')\n"); scanf(" %c", &op);
        if(op == '+'){
            printf("Result: %d\n", a + b);
            }
        else if(op == '-'){
            printf("Result: %d\n", a - b);
            }
        else if(op == '*'){
            printf("Result: %d\n", a * b);
            }
        else if(op == '/'){
                if(b != 0)
            printf("Result: %.2f\n",(float) a / b);
                else
                    printf("This is incorrect");
                    }
       else if (op == '%'){
           if(b != 0)
            printf("Result: %.2f\n", a % b);
                else
                    printf("incorrect input\n");
                   }
            if(op == 'c' || op == 'C'){
                    a = 0;
                    b = 0;
            printf(" Data cleared\n");}

            printf("Do you want to continue? Y/N\n");
            scanf(" %c", &choice);
            }

        while(choice == 'y' || choice == 'Y');

        return 0;
    }
