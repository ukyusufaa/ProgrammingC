#include <stdio.h>
int main(){
    int number[2][3]={
        {2,7,9},
        {2,5,8}
    };
    numSum(number,2);
    return 0;
}
void numSum(int arr[][3],int size){
    int i,j;
    int sum=0;
    for(i=0;i<size;i++){
        for(j=0;j<3;j++){
            sum+=arr[i][j];
        }
        printf("%d",sum);
        printf("\n");
    }
}

