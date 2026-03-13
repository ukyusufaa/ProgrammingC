#include <stdio.h>

int main(){
    int i,j;
    int n=4;
    int number[4][4];
    int mainSum=0;
    int secondarySum=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<n;i++){
        mainSum+=number[i][i];
        secondarySum+=number[i][n-1-i];
    }
    printf("main sum %d\n",mainSum);
    printf("secondary sum %d\n",secondarySum);

    return 0;
}
