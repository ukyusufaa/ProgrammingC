#include <stdio.h>

int main(){
    int i,j;
    int number[4][3]={
        {1,2,3},
        {6,90,100},
        {-8,0,8},
        {-3,-9,9}
    };
    int num;
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",number[i][j]);
        }
        printf("\n");
    }
    printf("Enter a number");
    scanf("%d",&num);
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(number[i][j]==num){
                printf("Element[%d][%d]",i,j);
                }
                
            }
         }
    return 0;
}