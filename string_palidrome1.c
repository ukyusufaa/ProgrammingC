#include <stdio.h>

int main(){
    int i=0,length=0,count=0;
    int start,end;
    int isPalidrome=1;
    char strEnter[100];

    printf("Enter string ");
    scanf("%s",strEnter);

    while(strEnter[i]!='\0'){
        i++;
    }
    length=i;

    start=0;
    end=length-1;

    while(start<end){
        if(strEnter[start]!=strEnter[end]){
            printf("Mismatch[%d] and [%d], %c != %c\n",start,end,strEnter[start],strEnter[end]);
            isPalidrome=0;
            break;
        }
        else{
            count++;
        }
        start++;
        end--;
        }

        if(isPalidrome==1){
            printf("Palidrome\n");
        }
        else{
            printf("Not palidrome\n");
        }
        printf("Total matching characters %d\n",count);

    return 0;
}