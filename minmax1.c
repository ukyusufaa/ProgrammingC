#include <stdio.h>

int main(){
    int n,i,num,min,max;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    min=max=num;

    for(i=2;i<=n;i++){
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        if(num < min) min=num;
        if(num > max) max=num;
    }
    printf("Minimum: %d\nMaximum %d\n",min,max);

    return 0;
}
