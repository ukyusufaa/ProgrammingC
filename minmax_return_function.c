#include <stdio.h>

int calcMin(int min, int num){

    if(num<min){
        min=num;
    }
    return min;
}
int calcMax(int max, int num){

    if(num>max){
        max=num;
        }
    return max;
}

int main(){
    int i;
    int num;
    int minimum;
    int maximum;
    for(i=0;i<4;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        if(i==0){
            minimum=num;
            maximum=num;
        }
        else{
            a=calcMin(num,minimum);
            b=calcMax(num,maximum);
        }
    }

    printf("%d is MIN\n",a);
    printf("%d is MAX\n",b);
    return 0;
}
