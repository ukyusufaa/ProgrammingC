#include <stdio.h>

int main(){
    int i;
    int num;

    printf("Enter a number: \n");
    scanf("%d",&num);
    i=num;
    while(i>=1){

        printf("%d\n",i);
        i--;
    }

    return 0;
    }
