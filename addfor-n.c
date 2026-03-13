#include <stdio.h>

int main(){
    int i, n, total=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
            total = total * i;
    }
        printf("Total = %d\n", total);

return 0;
}
