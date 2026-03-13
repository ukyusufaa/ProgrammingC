#include <stdio.h>

int isMin(int min, int n){

    if(n<min){
        min=n;
    }
    return min;
}

int isMax(int max, int n){

    if(n>max){
        max=n;
    }
    return max;
}

int main(){
    int i,num,n;
    int minimum;
    int maximum;

    printf("How many numbers, please enter: ");
    scanf("%d",&n);

    printf("Enter number 1: ");
    scanf("%d",&num);
    minimum=num;
    maximum=num;
    for(i=2;i<=n;i++){
        printf("Enter number %d: ",i);
        scanf("%d",&num);

        minimum=isMin(num,minimum);
        maximum=isMax(num,maximum);
    }
    printf("%d is MIN",minimum);
    printf("%d is MAX",maximum);

 return 0;
}
