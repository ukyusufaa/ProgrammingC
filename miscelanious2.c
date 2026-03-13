#include <stdio.h>

int primeNumbers(int n){
    int i = 2;

    if(i <= 1){
        return 0;
    }
    while(i * i <= n){
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int sumNumbers(int start, int end){
    int i = start;
    int sum = 0;

    while(i <= end){
        if(primeNumbers(i)){
            sum = sum + i;
        }
        i++;
    }
    return sum;
}

int main(int start, int end){

    printf("Enter a start number: \n"); scanf("%d",&start);
    printf("Enter a end number: \n"); scanf("%d",&end);

    int total = sumNumbers(start,end);

    printf("The sum of primes range: %d\n",total);

  return 0;
}
