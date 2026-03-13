#include <stdio.h>
float findAverage(int arr[],int n);
int main(){
    int number[7];
    int n=7;
    float a;

    printf("Welcome to average finder\n");
    for(int i=0;i<n;i++){
        printf("Number %d:",i+1);
        scanf("%d",&number[i]);
    }
    a = findAverage(number,n);
    printf("%.2f",a);

  return 0;
}
float findAverage(int arr[],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return (float)sum/n;
}




