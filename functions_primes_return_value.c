#include <stdio.h>

int primeNumbers(int num);

int main(int n){
    int i;

    printf("Enter a number: \n");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        if(primeNumbers(i)){
        printf("%d\n",i);
        }
    }
    printf("\n");
  return 0;
}

int primeNumbers(int num){
    int j;

    for(j=2;j*j<=num;j++){
        if(num%j==0)
            return 0;
    }
    return 1;
}
