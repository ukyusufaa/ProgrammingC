#include <stdio.h>

int isPrime(int n);

int main(){
    int number[4][3];
    int i,j,k;
    int primes[12];
    int count = 0;
    int temp;

    printf("%d elements,%d X %d\n",4*3,4,3);
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("Elements[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",number[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(isPrime(number[i][j])){
                primes[count]=number[i][j];
                count++;
            }
        }
    }
    //sort primes (smallest to largest)
    for(i=0;i<count-1;i++){
        for(j=i+1;j<count;j++){
            if(primes[i]>primes[j]){
                temp=primes[i];
                primes[i]=primes[j];
                primes[j]=temp;
            }
        }
    }
    //print primes
    printf("Prime numbers (smallest to largest):\n");
    for(i=0;i<count;i++){
        printf("%d ",primes[i]);
    }
    return 0;
}
int isPrime(int n){
    int i;

    if(n<=1){
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}