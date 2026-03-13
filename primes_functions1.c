#include <stdio.h>

int calcPrime(int n){
    int j;

    for(j=2;j*j<=n;j++){
        if(n%j==0){
            return 0;
        }
    }
    if(n<=1){
        return 0;
    }
    return 1;
}
void showPrime(int n){
    int i;

        if(calcPrime(n)){
            printf("%d is prime",n);
            }
            else{
                printf("%d not prime",n);
        }
}
int main(){
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    showPrime(num);
}
