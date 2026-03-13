#include <stdio.h>

int main(){
    int number[3][7]={
        {1,3,4,3,6,7,1,44},
        {1,2,3,4,5,6,7},
        {100012,7,8,2,1,3,1}
    };
    listMinMax(number);

    return 0;
}
void listMinMax(int number[3][7]){
    int i,j;
    int min=number[0][0];
    int max=number[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<7;j++){
            if(number[i][j]<min){
                min=number[i][j];
            }
            else if(number[i][j]>max){
                max=number[i][j];
            }
        }
    }
    printf("%d is MIN number\n",min);
    printf("%d is MAX number\n",max);
}
