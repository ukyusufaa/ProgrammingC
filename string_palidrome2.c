#include <stdio.h>

int main(){
    int i=0,length=0,count=0;
    int isPalidrome=1;
    int start,end;
    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]!='\0'){
        i++;
    }
    length=i;

    start=0;
    end=length-1;

    printf("comparing positions 1 (%c) and 4 (%c)\n",str[1],str[4]);
    if(str[1]==str[4]){
        printf("Match at positions 1 and 4\n");
    }
    else{
        printf("Mismatch at positions 1 and 4\n");
    }

    while(start<end){
            if(str[start]!=str[end]){
                printf("\t\t\tMismatch[%d] and [%d], %c != %c\n",start,end,str[start],str[end]);
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
            printf("\tPalidrome\n");
            }
            else{
                printf("\tNot palidrome\n");
        }
        printf("Total matching charcters %d\n",count);

    return 0;
}