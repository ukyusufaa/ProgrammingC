#include <stdio.h>
int findMin(int arr[][3],int rows,int cols){
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
int findMax(int arr[][3],int rows,int cols){
    int i,j;
    int max;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(i==0 && j==0){
                max=arr[i][j];
            }
            else{
                if(arr[i][j]>max){
                    max=arr[i][j];
                }
            }
        }
    }
    return max;
}
int main(){
    int i,j;
    int rows=3;
    int cols=5;
    int number[3][5];

    printf("Enter %d elements for a %dX%d array\n",rows*cols,rows,cols);

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&number[i][j]);
        }
    }

    int totalBytes =sizeof(number);
    int rowBytes = sizeof(number[0]);
    int singleElementByte=sizeof(number[0][0]);

    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    int minimum=findMin(number,rows,cols);
    int maximum=findMax(number,rows,cols);

    printf("%d total bytes of entire array\n",totalBytes);
    printf("%d bytes of one whole row\n",rowBytes);
    printf("%d bytes of just one single element\n",singleElementByte);

    printf("%d is MIN integer\n",minimum);
    printf("%d is MAX integer\n",maximum);

    return 0;
}
