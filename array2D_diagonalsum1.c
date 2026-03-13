#include <stdio.h>

int main(){
    int mainSum=0;
    int secondarySum=0;
    int num=4;
    int number[4][4]={
        {1,3,4,6},
        {2,4,5,7},
        {5,7,9,8},
        {3,5,3,2}

    };
    for(int i=0;i<num;i++){
        mainSum+=number[i][i];
        }
     printf("main sum = %d\n",mainSum);
    for(int i=0;i<num;i++){
        secondarySum+=number[i][num-1-i];
        }
    printf("secondary sum = %d\n",secondarySum);
    return 0;
}
