#include <stdio.h>

int numberRev(int n);
void listRev(int arr[],int size);
float findAverage(int arr[],int size);
void listAverage(int arr[],int size);
int findMin(int arr[],int size);
int findMax(int arr[],int size);
void listMinMax(int arr[],int size);
int main(){
    int number[4];
    int i;
    int size=sizeof(number)/sizeof(number[0]);
    float avr;

    printf("Welcome to multi operation program\n");
    for(i=0;i<size;i++){
        printf("NUMBER %d:",i+1);
        scanf("%d",&number[i]);
    }
    listRev(number,size);
    listAverage(number,size);
    listMinMax(number,size);
return 0;
}
int numberRev(int n){
    int rev=0;

    while(n!=0){
    rev=rev*10+(n%10);
    n=n/10;
    }
    return rev;
}
void listRev(int arr[],int size){
    int i;

    for(i=0;i<size;i++){
        int reverse=numberRev(arr[i]);
        printf("NUMBER %d:%d reversed to %d\n",i+1,arr[i],reverse);
    }
}
float findAverage(int arr[],int size){
    int i;
    int sum=0;

    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    return (float)sum/size;
}
void listAverage(int arr[],int size){
    float avr=findAverage(arr,size);
    printf("Average is %.2f\n",avr);
}
int findMin(int arr[],int size){
    int i;
    int min=arr[0];

    for(i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            }
        }
    return min;
}
int findMax(int arr[],int size){
    int i;
    int max=arr[0];

    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void listMinMax(int arr[],int size){
    int min;
    int i;
    int max;

    min=findMin(arr,size);
    max=findMax(arr,size);
    printf("MIN %d\n",min);
    printf("MAX %d\n",max);

}


