#include <stdio.h>

void numSMLRG(int rows,int cols,int arr[][2]);
int main(){
    int i,j;
    int number[4][2];
    int rows=4;
    int cols=2;

    printf("%d elemnts,%d X %d\n",rows*cols,rows,cols);
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    int totalBytes=sizeof(number);
    printf("Array bytes %d\n",totalBytes);
    int rowBytes=sizeof(number[0]);
    printf("Row bytes %d\n",rowBytes);
    int elementBytes=sizeof(number[0])/sizeof(number[0][0]);
    printf("Element bytes %d\n",elementBytes);
    
    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);
    numSMLRG(rows,cols,number);

    return 0;
}
void numSMLRG(int rows,int cols,int arr[][2]){
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
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}