#include <stdio.h>

int main(){
    int num;
    int i = 1;

    printf("Enter a number: \n");
    scanf("%d",&num);

    while(num >= i){
    printf("%d\n",i);
    i++;
    }
    return 0;
}
