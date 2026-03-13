#include <stdio.h>

int primeNumbers(int n){
    int i=2;
    int num=n;

    if(i<=1){
        return 0;
    }
    while(i*i<=num){
        if(num%i==0)
        return 0;
        i++;
    }
    return 1;
}

int sumNumbers(int begin, int finish){
    int i=begin, n=finish,sum=0;

    while(i<=n){
            if(primeNumbers(i)){
                sum=sum+i;
            }
            i++;
    }
    return sum;
}

int main(int start, int end){
    int s=start,e=end;
    int alpha=s,omega=e;

    printf("Enter first number:\n");
    scanf("%d",&alpha);
    printf("Enter second number:\n");
    scanf("%d",&omega);

    int total = sumNumbers(alpha,omega);

    printf("The prime numbers range with their sum %d\n", total);

    return 0;
}

