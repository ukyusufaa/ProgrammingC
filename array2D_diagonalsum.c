#include <stdio.h>

int main(){
    int mainSum=0;
    int secondaySum=0;
    int n=3;
    int number[3][3]={
        {1,0,1},
        {2,7,9},
        {4,5,7}
    };
    for(int i=0;i<n;i++){
        mainSum+=number[i][i];
        printf("%d\n",number[i][i]);
            }
            printf("main sum = %d\n",mainSum);

    for(int i=0;i<n;i++){
       secondaySum+=number[i][n-1-i];
       printf("%d\n",number[i][n-1-i]);
            }
            printf("secondary sum = %d\n",secondaySum);

    return 0;
}
