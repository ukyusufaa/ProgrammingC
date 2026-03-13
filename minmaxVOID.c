#include <stdio.h>

void printMin(int min){
     printf("%d is MIN",min);
}

void printMax(int max){
    printf("%d is MAX",max);
}

int main(){
    int i,num;
    int minimum;
    int maximum;

    for(i=0;i<3;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);

        if(i==0){
            minimum=num;
            maximum=num;
        }

        if(num < minimum){
            minimum=num;
        }
        if(num > maximum){
            maximum=num;
        }
    }
    printMin(minimum);
    printMax(maximum);

 return 0;
}
