#include <stdio.h>

int numPos(int rows,int cols,int arr[][4]);
int numNeg(int rows,int cols,int arr[][4]);
int numZero(int rows,int cols,int arr[][4]);
void printResult(int rows,int cols,int arr[][4]);

int main(){
    int i,j;
    int numbers[3][4]={
        {1,-2,3,-4},
        {0,-1,-9,10},
        {0,0,-7,9}
     };
    int rows=3;
    int cols=4;

    int arrayBytes=sizeof(numbers);
    printf("%d bytes in array\n",arrayBytes);
    int rowBytes=sizeof(numbers[0]);
    printf("%d bytes in rows\n",rowBytes);
    int elementBytes=sizeof(numbers[0][0]);
    printf("%d bytes in an element\n",elementBytes);

    rows=sizeof(numbers)/sizeof(numbers[0]);
    cols=sizeof(numbers[0])/sizeof(numbers[0][0]);

    printResult(rows,cols,numbers);

    return 0;
}
int numPos(int rows,int cols, int arr[][4]){
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
int numNeg(int rows,int cols, int arr[][4]){
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
int numZero(int rows,int cols, int arr[][4]){
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
void printResult(int rows,int cols,int arr[][4]){

    int positive=numPos(rows,cols,arr);
    int negative=numNeg(rows,cols,arr);
    int zero=numZero(rows,cols,arr);

    printf("POS numbers %d\n\t",positive);
    printf("NEG numbers %d\n\t", negative);
    printf("ZERO numbers %d\n\t",zero);
}