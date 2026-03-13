#include <stdio.h>

int main(){
    int A[2][2]={
        {1,4},
        {2,4}
        };
    int B[2][2]={
        {3,4},
        {1,3}
        };
    int C[2][2]={0};

    addMatrix(A,B,C);

    return 0;
}
void addMatrix(int A[2][2],int B[2][2],int C[2][2]){
    int i,j;
    int n=2;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",C[i][j]);
            }
        printf("\n");
        }
    }

