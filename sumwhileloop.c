#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;

    while(i <= 10){
    sum = sum + i;
    printf("sum = %d\n", sum);
        i++;
    }
       return 0;
    }
