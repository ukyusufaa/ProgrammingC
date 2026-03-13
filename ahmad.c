#include <stdio.h>
void showPrime(int rows,int cols,int arr[][2]);

int main(){
    int i,j;
    int number[3][2];
    int rows=3;
    int cols=2;

    printf("%d elements,%d X %d\n",rows*cols,rows,cols);
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);
    showPrime(rows,cols,number);

    return 0;
}

void showPrime(int rows,int cols,int arr[][2]){
    int i,j,k;
    int yesPrime[6];
    int noPrime[6];
    int isPrime;
    int yP=0,nP=0;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            isPrime=1;
                for(k=2;k*k<=arr[i][j];k++){
                    if(arr[i][j]%k==0){
                        isPrime=0;
                    }
                }
                if(arr[i][j]<=1){
                    isPrime=0;
                }
                if(isPrime==1){
                                yesPrime[yP]=arr[i][j];
                                yP++;
                            }
                            else{
                                noPrime[nP]=arr[i][j];
                                nP++;
                             }
                        }
                    }
                    printf("Total primes %d",yP);
                    for(i=0;i<yP;i++){
                    printf("%d\n",yesPrime[i]);
                    }
                        printf("Total non-primes %d",nP);
                        for(i=0;i<nP;i++){
                        printf("%d\n",noPrime[i]);
        }
}
