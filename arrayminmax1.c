#include <stdio.h>

int main(){
    int i,j;
    int n=3;
    int min;
    int max;

    int number[3][3]={
        {8,2,5},
        {99,-4,6},
        {2,4,8}
    };

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 && j==0){
                min=number[i][j];
                max=number[i][j];
            }
            else{

            if(number[i][j]<min){
                min=number[i][j];
            }
            if(number[i][j]>max){
                max=number[i][j];
                }
            }
        }
    }
    printf("%d is MIN",min);
    printf("%d is MAX",max);
    return 0;
}
