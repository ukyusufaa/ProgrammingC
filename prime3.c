#include <stdio.h>

int main(){
    int i,j,n;
    int isPrime=1;

    printf("Welcome to Prime number program\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime numbers to number %d are: ",n);

    for(i=2;i<=n;i++){
        isPrime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
            }
        }
    if(isPrime==1){
        printf("%d\n",i);
        }
    }
return 0;
}
