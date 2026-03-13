#include <stdio.h>

float add(float a, float b){
    return a + b;
}
float minus(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    if(b != 0){
        return a / b;
    }
    else{
        printf("Zero division is an error");
        return 0.0f;
    }
}

int main(){
    int num1,num2,op;

    printf("Enter first number: \n");
    scanf("%d",&num1);
    printf("Enter second number: \n");
    scanf("%d",&num2);
    printf("Choose:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d",&op);

    switch(op){
    case 1:printf("Add result: %.2f\n",add(num1,num2)); break;
    case 2:printf("Subrract result: %.2f\n",minus(num1,num2)); break;
    case 3:printf("Multiply result: %.2f\n",multiply(num1,num2));break;
    case 4:printf("Divide result: %.2f\n", divide(num1,num2)); break;
    default:printf("Invalid selection");

    }
    return 0;
}

