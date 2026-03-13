#include <stdio.h>

int main(){
    int n;
    int i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
    sum += i;
    }
    printf("Enter a number  %d\n", sum);


 return 0;
}
