#include <stdio.h>
int checkPrime(int n);
void showPrime(int arr[], int size);
int checkOddEven(int n);
void showOddEven(int arr[], int size);
int main(){
    int i;
    int number[7];

    printf("Welcome\nList primes or otherwise\n");
    printf("*********\n");
    for(i=0;i<7;i++){
        printf("\tNUMBER %d:",i+1);
        scanf("%d",&number[i]);
    }
    showPrime(number, 7);
    showOddEven(number,7);

return 0;
}
int checkPrime(int n){
    int i;

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
            }
        }
        if(n<=1){
            return 0;
        }
    return 1;
}
void showPrime(int arr[], int size){
     int i;

     for(i=0;i<size;i++){
        if(checkPrime(arr[i])){
            printf("Number %d:%d IS A PRIME\n",i+1,arr[i]);
            }
            else{
                printf("Number %d:%d is NOT a prime\n",i+1,arr[i]);
                }
            }
        }
int checkOddEven(int n){
    int i;

    for(i=2;i<=n;i++){
        if(n%2==0){
            return 0;
        }
         return 1;
        }
    }

void showOddEven(int arr[], int size){
    int i;

    for(i=0;i<size;i++){
        if(checkOddEven(arr[i])){
            printf("NUMBER %d:%d is an odd number\n",i+1,arr[i]);
        }
        else{
            printf("NUMBER %d:%d is an even number\n",i+1,arr[i]);
        }
    }
}

