#include <stdio.h>

int main(){
    int i,j,n;
    int isPrime;

    printf("Enter a number and lets see how many prime numbers lead up to it: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        isPrime=1;
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        printf("%d\n",i);
    }
 }
    return 0;
}
