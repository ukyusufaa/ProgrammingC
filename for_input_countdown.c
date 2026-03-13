#include <stdio.h>

int main(){
    int num;
    int i;

    printf("Enter a number : \n");
    scanf("%d",&num);

    for(i=num; i>=1; i--){
        printf("%d\n",i);
    }
return 0;
}
