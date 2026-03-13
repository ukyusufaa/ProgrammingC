#include <stdio.h>

int main(){
    int i;
    int num;

    printf("Enter a number: \n");
    scanf("%d",&num);
    i=num;

    do{
        printf("%d\n",i);
               i--;
    }while(i>=1);
   return 0;
}
