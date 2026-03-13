#include <stdio.h>

int main(){
    int i,j;
    int n=5;
    int num[5][5]={
        {2,3,4,5,1},
        {1,3,4,5,6},
        {4,2,1,8,9},
        {3,6,1,3,4},
        {4,2,1,9,7}
    };
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==4){//i==4 is i==n-1(row4)
                printf("%d ",num[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

return 0;
}
