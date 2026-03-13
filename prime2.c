#include <stdio.h>

int main(){
    int i,num;
    int isPrime=1;


    printf("Enter a number and lets see whether it is a prime or not : ");
    scanf("%d",&num);

    for(i=2;i*i<=num;i++){

            if(num%i==0){
            printf("is not a prime\n");
            isPrime=0;
            break;
        }
    }
    if(num<=1){
    printf("is not a prime");
    isPrime=0;
    }
    else if(isPrime==1){
    printf("is a prime\n");
    isPrime=1;
    }
    return 0;
}


