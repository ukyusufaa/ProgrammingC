#include <stdio.h>

int calcMain(int size,int arr[][4]);
int calcSecondary(int size,int arr[][4]);
void printResult(int x,int y);

int main(){
    int i,j;
    int number[4][4];
    int size=4;
    

    printf("%d elements,%d X %d",4*4,4,4);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",number[i][j]);
        }
        printf("\n");
    }
    size=sizeof(number)/sizeof(number[0]);
   

    int x = calcMain(size,number);
    int y = calcSecondary(size,number);
    printResult(x,y);

    return 0;
}
int calcMain(int size,int arr[][4]){
    int sumMain=0;
    int i;

    for(i=0;i<size;i++){
        sumMain+=arr[i][i];
    }
    return sumMain;
}

int calcSecondary(int size,int arr[][4]){
    int i;
    int sumSecondary=0;

    for(i=0;i<size;i++){
        sumSecondary+=arr[i][size-1-i];
    }
    return sumSecondary;
}
void printResult(int a, int b){
    printf("%d is main sum",a);
    printf("%d is secondary sum",b);
}