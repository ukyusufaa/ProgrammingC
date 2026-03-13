#include <stdio.h>

int main(){
    int a,b,result;
    char op;

    printf("Choose an operator(+-*/):\n");
    scanf("%c",&op);

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    if(op=='+'){
            result = a + b;
    printf("Added result: %d\n", result);
    }
    else if(op=='-'){
            result = a - b;
    printf("Subtracted result: %d\n", result);
    }
    else if(op=='*'){
        result = a * b;
    printf("Multiplied result: %d\n", result);
    }
    else if(op=='/'){
        if(b!=0){
            result = a / b;
        printf("Divided total: %d\n", result);
    }
    else{
        printf("cannot divide by Zero");
        }
    }

    return 0;
}
