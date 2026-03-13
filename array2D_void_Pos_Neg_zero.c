#include <stdio.h>
int main(){
    int number[6][5]={
        {0,-2,-3,0,0},
        {1,0,-3,4,-2},
        {2,-55,7,10,0},
        {0,0,0,7,-8},
        {-9,-99,100,0,-7},
        {0,1,2,-3,-5}
    };
    countIntegar(number);

    return 0;
}
void countIntegar(int number[6][5]){
    int i,j;
    int pos=0;
    int neg=0;
    int zero=0;

    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            if(number[i][j]>0){
                pos++;
            }
            else if(number[i][j]<0){
                neg++;
            }
            else{
                zero++;
            }
        }
    }
    printf("%d POSITIVES\n",pos);
    printf("%d NEGATIVES\n",neg);
    printf("%d ZEROS\n",zero);

    return 0;
}
