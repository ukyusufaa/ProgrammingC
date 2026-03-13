#include <stdio.h>

int main(){
    int i,n,total;

    printf("How many numbers would you like to test for odd or even: \n");
    scanf("%d",&total);

    for(i=1;i<=total;i++){
        printf("Enter number %d: \n\t\t", i);
        scanf("%d",&n);
        if(n % 2 != 0){
            printf("Odd number\n", &n);
            }
            else{
                printf("Even number\n",&n);
            }

        }

    return 0;
}
