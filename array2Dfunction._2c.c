#include <stdio.h>

void numSum(int rows,int cols,int arr[rows][cols]);
int main(){
 int number[4][3]={
     {2,3,4},
     {7,1,0},
     {9,1,2},
     {7,4,2}
 };
 numSum(4,3,number);
    return 0;
}
void numSum(int rows, int cols, int arr[rows][cols]){
    int i,j;


    for(i=0;i<rows;i++){
        int sum=0;
        for(j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        printf("%d",sum);
        printf("\n");
    }
}
