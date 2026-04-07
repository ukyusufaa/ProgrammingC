#include <stdio.h>

int main(){
    int i,j,k,l;
    int number[4][2];
    int yesPrime[8];
    int noPrime[8];
    int isPrime;
    int yp=0,np=0;

    printf("%d element,%d X %d\n",4*2,4,2);
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
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
                    yesPrime[yp]=number[i][j];
                    yp++;
                }
                else{
                    noPrime[np]=number[i][j];
                    np++;
                }
            }
        }

        printf("%d number of primes found\n",yp);
        for(l=0;l<yp;l++){
            printf("PRIME %d\n",yesPrime[l]);
            }

            printf("%d number non primes found\n",np);
            for(l=0;l<np;l++){
                printf("NOT a prime %d\n",noPrime[l]);
                }
    return 0;
}
        