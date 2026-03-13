#include <stdio.h>

int main(){
    int i, n, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%3 == 0){
            sum=sum+1;
        }printf("%d sum of divisible numbers  by 3 = %d\n ",i, sum);


    }

    return 0;
}
