#include <stdio.h>
int main(){
    int i,j;
    int n=4;
    int number[4][4]={
        {1,2,3,4},
        {4,3,2,1},
        {9,9,8,7},
        {7,7,7,5}
    };
    printf("Upper Deck Triangle Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<=j && number[i][j]%2==0){
                printf("%d ",number[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Lower Deck Triangle Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j && number[i][j]%2!=0){
                printf("%d ",number[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
