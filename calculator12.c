#include <stdio.h>
#include <stdlib.h>

int main(){
 double a,b,memory=0,result=0;
 char op,choice;
 char feed[20];

 printf("Welcome to the Calculator Program\n");
 printf("**********************************\n");
 printf("*********************************\n");

 do{
    printf("Enter an operator\n");
    printf("Add(+)\n");
    printf("Subtract(-)\n");
    printf("Multiply(*)\n");
    printf("Divide(/)\n");
    printf("***************\n");
    printf("Save(m)\n");
    printf("Recall(r)\n");
    printf("Clear(c)\n");
    scanf(" %c", &op);

    if(op == 'c'){
        result=0;
        printf("Cleared\n");
        continue;
    }
    else if(op == 'm' ){
        memory=result;
        printf("result saved to memory %.2lf\n",memory);
        continue;

    }
    else if(op == 'r'){
        printf("result recalled %.2lf\n",memory);
        continue;

    }
    printf("Enter the first number or(m) memory number\n");
    scanf("%s",feed);
    if(feed[0] == 'm'){
        a=memory;
        }
        else{
            a=atof(feed);
        }
    printf("Enter the second number or (m) memory number\n");
    scanf("%s",feed);
    if(feed[0] == 'm'){
        b=memory;
        }
        else{
            b=atof(feed);
        }
    if(op == '+'){
        result = a + b;
        printf("Added result %.2lf\n",result);
    }
    else if(op == '-'){
        result = a - b;
        printf("Subraction result %.2lf\n",result);
    }
    else if(op == '*'){
        result = a * b;
        printf("Mulplication result %.2lf\n", result);
    }
    else if(op == '/' && b != 0){
        result = a / b;
        printf("Division result %.2lf", result);
    }
        else{
            printf("STOP no ZERO division\n");
        }

    printf("Do you want to continue Yes(Y) or No(No)?\n");
    scanf(" %c",&choice);

 }while(choice == 'Y' || choice == 'y');


return 0;
}
