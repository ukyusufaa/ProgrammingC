#include <stdio.h>

void add(float a, float b){
    float sum = a + b;
    printf("%.2f + %.2f = %.2f",a,b,sum);
}
void minus(float a, float b){
    float sum = a - b;
    printf("%.2f - %.2f = %.2f",a,b,sum);
}
void multiply(float a, float b){
    float sum = a * b;
    printf("%.2f X %.2f = %.2f",a,b,sum);
}
void divide(float a, float b){
    if(b != 0){
        float sum = a /b;
        printf("%.2f / %.2f = %.2f", a,b,sum);
    }
    else{
        printf("Zero division is not allowed");
    }
}

int main(){
    float num1,num2;
    char op;

    printf("Enter first number: \n");
    scanf("%f",&num1);
    printf("Enter second number: \n");
    scanf("%f",&num2);
    printf("Choose:\nA.Add\nS.Subtract\nM.Multiply\nD.Divide\n");
    scanf(" %c",&op);

    switch(op){
    case 'A':
        case 'a': add(num1,num2); break;
    case 'S':
        case 's': minus(num1,num2); break;
    case 'M':
        case 'm': multiply(num1,num2); break;
    case 'D':
        case 'd': divide(num1,num2); break;
    default:
        printf("Invalid option");
    }

    return 0;
}
