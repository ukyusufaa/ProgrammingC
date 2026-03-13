#include <stdio.h>

int main(){
    int i, n, sum=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum*i;
    printf("Product of numbers from 1 to %d = %d\n",n,sum);
    }

    return 0;
}
