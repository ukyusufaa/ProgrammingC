#include <stdio.h>

float add (float a, float b){
    return a + b;
}
float minus (float a, float b){
    return a - b;
}
float multiply (float a, float b){
    return a * b;
}
float divide (float a, float b){
    if(b == 0){
        printf("Zero divison not allowed");
        return 0.0f;
    }
    return a / b;
}

int main(){
    int num1 = 40;
    int num2 = 20;

    (add(num1,num2));
    minus(num1,num2));
    multiply(num1,num2));
    divide(num1,num2));

    return 0;
}
