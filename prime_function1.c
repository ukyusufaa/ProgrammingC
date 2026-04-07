#include <stdio.h>

void printPrime(int rows,int cols,int arr[][2]);
int main(){
    int i,j;
    int number[3][2];
    int rows=3;
    int cols=2;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    printPrime(rows,cols,number);

    return 0;
}
void printPrime(int rows,int cols,int arr[][2]){
    int i,j,k;
    int yPrime[6];
    int nPrime[6];
    int yp=0,np=0;
    int isPrime;

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
                yPrime[yp]=arr[i][j];
                yp++;
            }
            else{
                nPrime[np]=arr[i][j];
                np++;
            }
        }
    }
    printf("%d total primes found\n",yp);
    for(i=0;i<yp;i++){
        printf("%d\n",yPrime[i]);
    }
    printf("%d total non-primes found\n",np);
    for(i=0;i<np;i++){
        printf("%d\n",nPrime[i]);
    }
}