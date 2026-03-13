#include <stdio.h>

int main(){
    int i;
    int num;

    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("********************\n");

    for(i=1; i <= num; i++){
        printf("%d\n",i);
    }

    return 0;
}
