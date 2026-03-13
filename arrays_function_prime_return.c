#include <stdio.h>

int primeNumber(int n);

int main(){
    int i;
    int arg[10];


    printf("Enter 10 Numbers\n");
    for(i = 0; i < 10; i++)
    {
        printf("Number %d:",i+1);
        scanf("%d",&arg[i]);
    }
    printf("These are the prime numbers: \n");
    for(i = 0; i < 10; i++)
    {
        if(primeNumber(arg[i]))
        printf("Number %d:%d\n",i+1,arg[i]);
    }

return 0;
}

int primeNumber(int n){
    int j;

    if(n <= 1)
        return 0;

    for(j = 2; j * j <= n; j++){
        if(n % j == 0){
            return 0;
        }
    }
    return 1;
}
