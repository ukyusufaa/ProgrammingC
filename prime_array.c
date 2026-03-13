#include <stdio.h>

int main(){
    int i,j;
    int isPrime=1;
    int arr[10];

    printf("Enter 10 numbers to check for prime\n");
    for(i=0;i<10;i++){
    printf("Number %d:",i+1);
    scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++){
        isPrime=1;

    for(j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(arr[i]<=1){
        isPrime=0;
        }

            if(isPrime==1){
                printf("Number %d:%d is a prime\n",i+1,arr[i]);
            }
            else{
                printf("Number %d:%d is not a prime\n",i+1,arr[i]);
                }
            }

    return 0;
}
