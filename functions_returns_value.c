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
    return a / b;
}

int main(){
    int num1 = 30;
    int num2 = 10;

    printf("Add result %.2f \n",add(num1,num2));
    printf("Subract result %.2f\n",minus(num1,num2));
    printf("Multiply result %.2f\n",multiply(num1,num2));
    printf("Divide result %.2f\n", divide(num1,num2));

    return 0;
}


