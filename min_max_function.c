#include <stdio.h>

int callMin(int arr[],int size){
    int min=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}
int callMax(int arr[],int size){
    int max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}
void numberMinMax(int arr[], int size){
    int a = callMin(arr,size);
    int b = callMax(arr,size);
    printf("%d is MIN\n",a);
    printf("%d is MAX\n",b);
}
int main(){
    int arr[]={12,46,75,90,30,89,114};
    int size;

    size=sizeof(arr)/sizeof(arr[0]);
    numberMinMax(arr,size);

 return 0;
}
