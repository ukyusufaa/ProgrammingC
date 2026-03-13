#include <stdio.h>

int posInteger(int arr[2][4],int rows,int cols){
    int i,j;
    int pos=0;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]>0){
                pos++;
            }
        }
    }
    return pos;
}
int negInteger(int arr[2][4],int rows,int cols){
    int i,j;
    int neg=0;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]<0){
                neg++;
            }
        }
    }
    return neg;
}
int zeroInteger(int arr[2][4],int rows,int cols){
    int i,j;
    int zero=0;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]==0){
                zero++;
            }
        }
    }
    return zero;
}
int main(){
    int i,j;
    int rows=2;
    int cols=4;
    int number[2][4];

    printf("Enter %d elements,%dX%d\n",rows*cols,rows,cols);

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    int totalBytes=sizeof(number);
    int rowBytes=sizeof(number[0]);
    int singleElementBytes=sizeof(number[0][0]);

    rows=sizeof(number)/sizeof (number[0]);
    cols=sizeof(number[0])/sizeof (number[0][0]);

    int positives=posInteger(number,rows,cols);
    int negatives=negInteger(number,rows,cols);
    int zeros=zeroInteger(number,rows,cols);

    printf("Total bytes in array is %d\n",totalBytes);
    printf("Bytes in a rows is %d\n",rowBytes);
    printf("Bytes in per element %d\n",singleElementBytes);

    printf("%d total positive integers\n",positives);
    printf("%d total negative integers\n",negatives);
    printf("%d total zero integers\n",zeros);


    return 0;
}
