#include <stdio.h>

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int *p= arr;

    p+=5;//pointer moves 5 positions from arr[0] to arr[5]
    *(p-3)=100;//arr[5] minus 3 is now at position arr[2]

    printf("%d\n",*p);//pointer position arr[5], prints 6
    printf("%d\n",arr[2]);//pointer position arr[2],overwrites 3 and prints 100
    printf("%d\n",arr[3]);//pointer points arr[3],prints 4
    printf("%d\n",*(p+1));//pointer position arr[5]+1 now arr[6],prints 7
    printf("%d\n",*(p-1));//pointer position arr[5]-1 now arr[4],prints 5
    printf("%d\n",*(p-3));//pointer position arr[5]-3 now arr[2],prints 100

    return 0;
}
