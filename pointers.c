#include <stdio.h>

int main(){
    int x=10;
    int *p;

    p=&x;

    printf("Value of of x: %d\n",x);
    printf("Address of x: %p\n",&x);
    printf("Value of p: %p\n",p);
    printf("Value of p pointing to is: %d\n",*p);

    return 0;
}

