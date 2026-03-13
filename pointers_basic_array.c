#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,72};

    int *p=arr;

    *(p+1)=100;

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",*(p+3));
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+5));
    printf("%d\n",*(p+6));
    printf("%d\n",*(p+9));
    printf("%d\n",*(p+7));



    return 0;
}
