#include <stdio.h>
int calcPrime(int n);
void printPrime(int rows,int cols,int arr[][4]);
int main(){

    int i,j;
    int number[3][4];
    int rows=3;
    int cols=4;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&number[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",number[i][j]);
        }
        printf("\n");
    }
    int arrayBytes=sizeof(number);
    printf("Total array bytes are %d\n",arrayBytes);
    int rowBytes=sizeof(number[0]);
    printf("One row bytes %d\n",rowBytes);
    int elementBytes=sizeof(number[0][0]);
    printf("Bytes per element %d\n",elementBytes);

    rows=sizeof(number)/sizeof(number[0]);
    cols=sizeof(number[0])/sizeof(number[0][0]);

    printPrime(rows,cols,number);
    
    return 0;
}
int calcPrime(int n){
    int i;

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    if(n<=1){
        return 0;
    }
    return 1;
}
void printPrime(int rows,int cols,int arr[][4]){
    int i,j;
    int yPrime[12];
    int yCount=0;
    int temp1;


    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(calcPrime(arr[i][j])){
                yPrime[yCount]=arr[i][j];
                yCount++;
                }
            }
        }
        for(i=0;i<yCount-1;i++){
            for(j=i+1;j<yCount;j++){
                if(yPrime[i]>yPrime[j]){
                    temp1=yPrime[i];
                    yPrime[i]=yPrime[j];
                    yPrime[j]=temp1;
                }
            }
        }
        
    for(i=0;i<yCount;i++){
        printf("%d\n",yPrime[i]);
    }
}
  


    