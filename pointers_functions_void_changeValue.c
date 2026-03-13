#include <stdio.h>

void changeValue(int *p){
    *p+=6;//+6,element 1 is now 7
    *(p+4)+=10;//+10, element 5 is now 15
    *(p+5)=1;// element 6, changes to 1
    p=p+3;//pointer moves to element 4....
    *p=110;//and changes to 110
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    changeValue(arr);

    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

return 0;
}
