#include <stdio.h>

int main(){
    int rows=3;
    int cols=2;
    int number[3][2]={
        {2,1},
        {7,1},
        {9,8}
    };
    int i,j;
    int transpose[2][3];

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            transpose[j][i]=number[i][j];
            }
        }
        for(i=0;i<cols;i++){
            for(j=0;j<rows;j++){
                printf("%d",transpose[i][j]);
            }
            printf("\n");
        }
}
