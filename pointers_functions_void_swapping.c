#include <stdio.h>

void swapValue(int *a, int *b){
    int swap;

    swap=*a;
    *a=*b;
    *b=swap;
}
int main(){
    int x=50;
    int y=100;

    swapValue(&x,&y);
    printf("X=%d\nY=%d",x,y);

return 0;
}
