#include <stdio.h>

void changeValue(int arr[3][5]){

    int (*p)[5]=arr;
    *(*(p+0)+0)=99;
    *(*(p+2)+3)=-9;

}

int main(){
    int arr[3][5]={
        {1,2,3,4,5},
        {-1,4,0,-9,-21},
        {0,1002,234,456,-2111}
    };
    changeValue(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }

return 0;
}
