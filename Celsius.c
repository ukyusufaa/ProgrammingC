#include <stdio.h>

int main(){
    double farenhiet;
    double celsius;

    printf("Enter farenheit temperature:\n");
    scanf("%lf",&farenhiet);

    celsius =(farenhiet - 32) * 5.0 / 9.0;

    printf("converted into %lf celsius",celsius);

    return 0;
    }
