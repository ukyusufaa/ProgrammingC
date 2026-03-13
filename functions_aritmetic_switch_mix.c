#include <stdio.h>

float add(float a, float b){
    return a+b;
}
void subtract(float a, float b){
    float result=a-b;
    printf("%.2f - %.2f = %.2f", a,b,result);
}
void multiply(float a,float b){
    float result=a*b;
    printf("%.2f X %.2f= %.2f",a,b,result);
}
float divide(float a, float b){
    if(b!=0){
        return a/b;
    }
    else{
        return 0.0f;
    }
}
int main(){
    float num1,num2;
    char op;

    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    printf("Select:\nA:Add\nS:Subtract\nM:Multiply\nD:Divide\n");
    scanf(" %c",&op);

    switch(op){
    case 'A':
        case 'a':printf("ADD result %.2f",add(num1,num2));break;
    case 'S':
        case 's':subtract(num1,num2);break;
    case 'M':
        case 'm':multiply(num1,num2);break;
    case 'D':
        case 'd':printf("Divide result %.2f",divide(num1,num2));break;
    default: printf("Invalid option");




    }
return 0;
}
