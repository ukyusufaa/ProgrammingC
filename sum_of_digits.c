#include <stdio.h>

int main(){
    int num;
    int digit;
    int sum = 0;

    printf("Enter a number: \n");
    scanf("%d",&num);

    while(num > 0){

        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits entered:%d\n", sum);

    return 0;
    }



