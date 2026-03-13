#include <stdio.h>

void printResult(int rows,int cols,int arr[][4]);
int main(){
    int i,j;
    int number[3][4];
    int rows=3;
    int cols=4;
   
    printf("%d elements,%d X %d\n",rows*cols,rows,cols);
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    printResult(rows,cols,number);
    
}
void printResult(int rows,int cols,int arr[][4]){
    int i,j;
    int num;
    int found=0;

    printf("Enter number to check its index");
    scanf("%d",&num);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]==num){
                printf("Element[%d][%d]",i,j);
                found=1;
            }
        }
    }
    if(found==0){
        printf("%d not found\n",num);
    }
}
