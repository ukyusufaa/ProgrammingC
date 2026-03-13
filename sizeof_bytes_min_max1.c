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
    int minimum;
    int maximum;
    int number[4][3]={
        {1,2000,3},
        {3,4000,5},
        {1,-99,0},
        {-10,1001,1}
    };

    int totalBytes =sizeof(number);
    int rowBytes = sizeof(number[0]);
    int singleElementByte=sizeof(number[0][0]);

    int rows=sizeof(number)/sizeof(number[0]);
    int cols=sizeof(number[0])/sizeof(number[0][0]);

    minimum=findMin(number,rows,cols);
    maximum=findMax(number,rows,cols);

    printf("%d total bytes of entire array\n",totalBytes);
    printf("%d bytes of one whole row\n",rowBytes);
    printf("%d bytes of just one single element\n",singleElementByte);

    printf("%d is MIN integer\n",minimum);
    printf("%d is MAX integer\n",maximum);

    return 0;
}
