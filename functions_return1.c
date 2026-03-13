#include <stdio.h>

int mainDiagonalSum(int arr[3][3],int size){
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i][i];
    }
    return sum;
}
int secondaryDiagonalSum(int arr[3][3],int size){
    int sum =0;

    for(int i=0;i<size;i++){
        sum+=arr[i][size-1-i];
    }
    return sum;
}
int main(){
    int number[3][3]={
        {1,0,1},
        {2,7,9},
        {4,5,7}
    };
    int size=sizeof(number)/sizeof(number[0]);

        int mainSum=mainDiagonalSum(number,size);
        int secondarySum=secondaryDiagonalSum(number,size);

        printf("main sum = %d\n",mainSum);
        printf("secondary sum = %d\n",secondarySum);

    return 0;
}
