#include <stdio.h>

int main(){
    int number[3][3]={
        {1,3,5},
        {5,7,9},
        {8,5,3}
    };
    countBoundary(number);

    return 0;
}
void countBoundary(int number[3][3]){
    int i,j;
    int n=3;
    int sum=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("%d ",number[i][j]);
                sum+=number[i][j];
                }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
      printf("Boundary sum is %d",sum);
}
