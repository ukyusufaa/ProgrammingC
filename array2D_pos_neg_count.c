#include <stdio.h>

int main(){
    int i,j;
    int number[3][2];
    int pos=0;
    int neg=0;
    int zero=0;

    printf("POSITIVE,\n\tNEGATIVE,\m\t\tZERO COUNTER\nEnter values\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&number[i][j]);
            }
        }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
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
        printf("Positive count = %d \n ",pos);
        printf("Negative count = %d \n ",neg);
        printf("Zero count = %d \n ",zero);

    return 0;
}

