#include <stdio.h>

int main(){
    int number[3][3]={
        {1,0,1},
        {2,7,9},
        {4,5,7}
    };
   sumSums(number);

    return 0;
}
void sumSums(int number[3][3]){
        int mainSum=0;
        int secondarySum=0;
        int n=3;
     for(int i=0;i<n;i++){
        mainSum+=number[i][i];
        printf("%d\n",number[i][i]);
            }
            printf("main sum = %d\n",mainSum);

    for(int i=0;i<n;i++){
       secondarySum+=number[i][n-1-i];
       printf("%d\n",number[i][n-1-i]);
            }
            printf("secondary sum = %d\n",secondarySum);


}
