#include <stdio.h>

int main(){
    int i = 1;

    do{
        printf("%d X 7 = %d\n", i, i * 7);
        i++;
    }
    while(i <= 20);

    return 0;
}
