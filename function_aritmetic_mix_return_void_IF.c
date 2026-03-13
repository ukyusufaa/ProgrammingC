#include <stdio.h>

float add(float a,float b){
    return a+b;
}
void subtract(float a,float b){
    float result=a-b;
    printf("%.2f - %.2f = %.2f",a,b,result);
}
float multiply(float a,float b){
    return a*b;
}
void divide(float a,float b){
    if(b!=0){
        float result=a/b;
       printf("%.2f /%.2f = .%2f",a,b,result);
    }
    else{
        printf("Cannot divide by zero\n");
    }
}
int main(){
    float num1,num2;
    int op;

    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    printf("Select an option:\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n");
    scanf("%d",&op);

    if(op==1){
        printf("Add result is %.2f",add(num1,num2));
        }
        else if(op==2){
            subtract(num1,num2);
        }
        else if(op==3){
            printf("Multiply result is %.2f",multiply(num1,num2));
        }
        else if(op==4){
            divide(num1,num2);
        }

    return 0;
}


















