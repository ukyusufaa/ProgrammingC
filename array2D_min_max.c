#include <stdio.h>

int main(){
    int i,j;
    int rows=3;
    int cols=2;
    int number[3][2]={
        {2,0},
        {0,9},
        {3,6}
    };
    int min,max;
    min=max=number[0][0];

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(number[i][j]< min){
                min=number[i][j];
                }
            if(number[i][j]>max){
                max=number[i][j];
                }
            }
        }
        printf("min %d\n",min);
        printf("max %d\n",max);
    return 0;
}

