#include <stdio.h>

int numSmallToBig(int rows,int cols,int arr[2][3]){
    int i,j,k,l;
    int temp;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            for(k=0;k<rows;k++){
                for(l=0;l<cols;l++){
                    if(arr[i][j]<arr[k][l]){
                        temp=arr[i][j];
                        arr[i][j]=arr[k][l];
                        arr[k][l]=temp;

                    }
                }
            }
        }
    }
    return 0;
}
void printArray(int rows,int cols,int arr[2][3]){
    int i,j;
    numSmallToBig(rows,cols,arr);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int i,j;
    int number[2][3];
    int rows=2;
    int cols=3;

    printf("%d elements,%dX%d\n",rows*cols,rows,cols);

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    int totalBytes=sizeof(number);
    int rowBytes=sizeof(number[0]);
    int elementBytes=sizeof(number[0][0]);

    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    //numSmallToBig(rows,cols,number);
    printArray(rows,cols,number);

    printf("Total Bytes in array %d\n",totalBytes);
    printf("Bytes per row %d\n",rowBytes);
    printf("Bytes per element %d\n",elementBytes);

    return 0;
}
