#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, total = 0;
    char op;
    char input[30];
    int sprinting = 1;


        while(sprinting){
        printf("Select operation (+ - * / (q to quit or c to clear)) ");
        scanf(" %c",&op);
        if (op == 'q'  || op == 'Q'){
                printf("Goodbye");
        sprinting = 0;
        break;}
        else if(op == 'c' || op == 'C'){
            total = 0;
                continue;}

        printf("Enter first number or M: ");
        scanf(" %s", &input);


        if(input[0] == 'm' || input[0] == 'M'){
            a = total;}

        else{
            a = atoi(input);}

        printf("Enter second number or M: ");
        scanf(" %s", &input);

        if(input[0] == 'm' || input[0] == 'M'){
            b = total;}

            else{
                b = atoi(input);}

        if(op == '+')
        {
            total = a + b;
            printf("%d\n", total);
        }

        else if(op == '-')
        {
            total = a - b;
            printf("%d", total);
        }
        else if (op == '*')
        {
            total = a * b;
            printf("%d", total);
        }
        else if (op == '/')
        {
        if (b != 0);{
                total = a / b;}
        printf("%d", total);
        }
       // else
       // {
           // printf("Error: dont divide by zero");
        //}
   ////  else
   // {
        //printf("Invalid operator");
   // }

    }

return 0;
}
