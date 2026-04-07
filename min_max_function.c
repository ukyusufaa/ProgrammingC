#include <stdio.h>

int numberMin(int rows,int cols,int arr[][3]);
int numberMax(int rows,int cols,int arr[][3]);
void printResult(int rows,int cols,int arr[][3]);
int main(){
    int i,j;
    int number[2][3];
    int rows=2;
    int cols=3;

    printf("%d elements, %d X %d\n",rows*cols,rows,cols);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    int  totalBytes=sizeof(number);
    int rowBytes=sizeof(number[0]);
    int elementBytes=sizeof(number[0][0]);

    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    printf("%d Bytes in array\n",totalBytes);
    printf("%d Bytes per row\n",rowBytes);
    printf("%d Bytes per element\n",elementBytes);

    printResult(rows,cols,number);

    return 0;
}
int numberMin(int rows, int cols,int arr[][3]){
    int i,j;
    int min;
    min=arr[0][0];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
int numberMax(int rows,int cols,int arr[][3]){
    int i,j;
    int max;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(i==0 && j==0){
                max=arr[i][j];
            }
            else{
                if(arr[i][j]> max){
                    max=arr[i][j];
                }
            }
        }
    }
    return max;
}
void printResult(int rows,int cols,int arr[2][3]){
    int min=numberMin(rows,cols,arr);
    int max=numberMax(rows,cols,arr);

    printf("MIN is %d\n",min);
    printf("MAX is %d\n",max);
    
}
