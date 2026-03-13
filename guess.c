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
    if(b!=0){
        return a / b;
        }
        else{
            printf("NOT ALLOWED\n");
            return 0.0f;
        }
}
int main(){
    float num1,num2;
    int choice;

    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    printf("Please select an option:\n1:Add\n2:Subtract\n3:Multiply\n4:Divide\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:printf("ADDED RESULT %.2f",add(num1,num2));break;
    case 2:printf("SUBTRACTED RESULT %.2f",minus(num1,num2));break;
    case 3:printf("MULTIPLICATION RESULT %.2f",multiply(num1,num2));break;
    case 4:printf("DIVISION RESULT %.2f",divide(num1,num2));break;
    default:printf("Invalid choice ");
    }
    return 0;
}
