#include <stdio.h>

int main(){
    int i,num;
    int min,max;

    for(i=0;i<9;i++){
    printf("Enter number %d:",i+1);
    scanf("%d",&num);

        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
    }
    printf("%d is MIN\n",min);
    printf("%d is MAX\n",max);

    return 0;
}
