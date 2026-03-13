#include <stdio.h>

void primeNumbers(int n);

int main(int num){

    printf("Enter a number: \n");
    scanf("%d",&num);
    primeNumbers(num);
   return 0;
}

void primeNumbers(int n){
    int i,j,isPrime;

    for(i=2;i<=n;i++){
        isPrime=1;
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        printf("%d",i);
    }
 }
 printf("\n");
}
