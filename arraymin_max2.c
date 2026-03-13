#include <stdio.h>

int main(){
    int i,j;
    int n=4;
    int min,max;

    int number[4][4]={
        {1,2,3,4},
        {0,3,99,100},
        {-99,8,4,0},
        {1,1,2,0}
    };
    min=number[0][0];
    max=number[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(number[i][j]<min){
                    min=number[i][j];
                }
                if(number[i][j]>max){
                    max=number[i][j];
                }
            }
    }
    printf("%d is MIN\n",min);
    printf("%d is MAX\n",max);

    return 0;
}
