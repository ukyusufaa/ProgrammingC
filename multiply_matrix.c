#include <stdio.h>

int main(){
    int i,j,k;
    int num1[2][2]={
        {1,3},
        {2,3}
    };
    int num2[2][2]={
        {2,3},
        {4,1}
    };
    int num3[2][2]={0};

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                num3[i][j]+=num1[i][k]*num2[k][j];
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",num3[i][j]);
        }
        printf("\n");
    }

    return 0;
}