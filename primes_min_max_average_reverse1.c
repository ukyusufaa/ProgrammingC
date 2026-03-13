#include <stdio.h>

int isPrime(int n);
void listPrime(int arr[],int size);
int isOddEven(int n);
void listOddEven(int arr[],int size);
int isMax(int arr[], int size);
int isMin(int arr[],int size);
void listMinMax(int arr[],int size);
int revNum(int n);
void listRev(int arr[],int size);
float findAverage(int arr[],int size);
int main(){
    int number[]={2,1,0,3,7,91,87,100,102,10,9};
    int size=sizeof(number)/sizeof(number[0]);
    printf("WELCOME\nFind Prime,Odd,Even numbers\n");
    listPrime(number,size);
    listOddEven(number,size);
    listMinMax(number,size);
    listRev(number,size);
    float avr=findAverage(number,size);
    printf("%.2f",avr);
return 0;
}
int isPrime(int n){
    for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
                }
            }
            if(n<=1){
                return 0;
            }
    return 1;
}
void listPrime(int arr[],int size){
    int i;

    for(i=0;i<size;i++){
        if(isPrime(arr[i])){
            printf("%d is PRIME\n",arr[i]);
        }
        else{
            printf("%d is NOT prime\n",arr[i]);
        }
    }
}
int isOddEven(int n){

    if(n%2!=0){
        return 0;
    }
    return 1;
    }


void listOddEven(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        if(isOddEven(arr[i])){
            printf("%d is EVEN\n",arr[i]);
        }
            else{
                printf("%d is ODD\n",arr[i]);
        }
    }
}
int isMin(int arr[],int size){

    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}
int isMax(int arr[],int size){

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}
void listMinMax(int arr[], int size){

    int min=(isMin(arr,size));
    int max=(isMax(arr,size));

    printf("%d Min\n",min);
    printf("%d Max\n",max);
}
int revNumber(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}

void listRev(int arr[],int size){

    for(int i=0;i<size;i++){
        int rev=revNumber(arr[i]);
        printf("%d %d\n",arr[i],rev);
    }
}
float findAverage(int arr[],int size){
    int i;
    int sum=0;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return (float)sum/size;
}
