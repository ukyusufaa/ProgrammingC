#include <stdio.h>

int isMin(int n, int min){

    if(n<min){
       min=n;
    }
    return min;
}

int isMax(int n, int max){

    if(n>max){
        max=n;
    }
    return max;
}

int main(){

    int i,num;
    int a=0;
    int b=0;

    for(i=0;i<7;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);

            a=isMin(num,a);
            b=isMax(num,b);

    }
    printf("%d is MIN",a);
    printf("%d is MAX",b);

    return 0;
}
