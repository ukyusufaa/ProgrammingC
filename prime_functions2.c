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

    for(i=1;i<=n;i++){
        if(calcPrime(i)){
            printf("%d ",i);
        }
    }
}
int main(){
    int num;

    printf("Enter number ");
    scanf("%d",&num);
    printf("Prime numbers up to %d are: ",num);

    showPrime(num);
}
