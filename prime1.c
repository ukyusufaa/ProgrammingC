#include <stdio.h>

int main(){
    int i,j,k;
    int number[2][3];
    int isPrime=1;

    printf("%d elements, %d X %d\n",2*3,2,3);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            isPrime=1;
                for(k=2;k*k<=number[i][j];k++){
                    if(number[i][j]%k==0){
                    isPrime=0;
                }
            }
            if(number[i][j]<=1){
                isPrime=0;
            }
            if(isPrime==1){
                printf("%d is PRIME\n",number[i][j]);
            }
            else{
                printf("%d is NOT prime\n",number[i][j]);
                }
            }
        }
        return 0;
    }

