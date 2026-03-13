#include <stdio.h>

void addSum(int *a){
    *a=*a+100;
    }
int main(){
    int x=20;

    addSum(&x);
    printf("%d",x);
return 0;
}
