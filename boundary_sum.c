#include <stdio.h>

void calcBoundary(int size,int arr[][4]);
int main(){
    int number[4][4]={
        {1,2,3,4},
        {3,2,4,4},
        {2,3,4,7},
        {9,9,8,7}
    };
    int size=4;

    size=sizeof(number)/sizeof(number[0]);

    calcBoundary(size,number);

    return 0;
}
void calcBoundary(int size,int arr[][4]){
    int i,j;
    int sumBoundary=0;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==0||i==size-1||j==0||j==3){
                printf("%d",arr[i][j]);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}

