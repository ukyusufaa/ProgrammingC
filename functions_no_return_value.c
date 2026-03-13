#include <stdio.h>

void add (float a, float b){
    float sum = a + b;
    printf("%.2f+ %.2f = %.2f\n",a,b,sum);

}
void minus (float a, float b){
    float sum = a - b;
    printf("%.2f - %.2f = %.2f\n",a,b,sum);
}
void multiply (float a, float b){
    float sum = a * b;
    printf("%.2f X %.2f = %.2f\n",a,b,sum);
}
float divide (float a, float b){
    float sum = a / b;
    printf("%.2f / %.2f = %.2f\n",a,b,sum);
}

int main(){
    int num1 = 40;
    int num2 = 20;

    add(num1,num2);
    minus(num1,num2);
    multiply(num1,num2);
    divide(num1,num2);

    return 0;
}
