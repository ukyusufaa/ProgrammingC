#include <stdio.h>

int main(){
    int arr[4][5]={
        {0,1,2,3,5},
        {-1,-9,7,8,9},
        {10,20,30,-1,0},
        {5,0,-99,1001,-11}
    };
    int (*p)[5]=arr;

    printf("Row 0 first element: %d\n",*(*p));
    printf("Row 0 first element:%d\n",*(*(p+0)+0));
    printf("Row 0 last element:%d\n",*(*(p+0)+4));
    printf("Row 2 first element:%d\n",*(*(p+2)+0));
    printf("Row 1 fourth element: %d\n",*(*(p+1)+3));
    printf("Row 3 third element: %d\n",*(*(p+3)+2));


    return 0;
}

