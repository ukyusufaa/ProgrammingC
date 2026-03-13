#include <stdio.h>

void sortArray(int rows,int cols,int arr[3][4]){
    int i,j,k,l;
    int temp;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            for(k=0;k<rows;k++){
                for(l=0;l<cols;l++){
                    if(arr[i][j]>arr[k][l]){
                        temp=arr[i][j];
                        arr[i][j]=arr[k][l];
                        arr[k][l]=temp;
                    }
                }
            }
        }
    }
}
void printArray(int rows,int cols,int arr[3][4]){
    int i,j;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int i,j;
    int number[3][4];
    int rows=3;
    int cols=4;

    printf("%d Elements,%dX%d\n",rows*cols,rows,cols);
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    int totalBytes=sizeof(number);
    int rowBytes=sizeof(number[0]);
    int elementBytes=sizeof(number[0][0]);

    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    sortArray(rows,cols,number);
    printArray(rows,cols,number);

    printf("%d total bytes in array\n",totalBytes);
    printf("%d bytes in row\n",rowBytes);
    printf("%d bytes per element\n",elementBytes);

return 0;
}
