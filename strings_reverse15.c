#include <stdio.h>

int main(){
    int i=0,length=0;
    char input[100];
    char rev[100];

    printf("Enter string: ");
    fgets(input,sizeof(input),stdin);

    while(input[i]!='\0'){
        length++;
        i++;
        }
        if(input[length-1]=='\n'){
            input[length-1]='\0';
            length--;
        }
        i=0;
        while(i<length){
            rev[i]=input[length-1-i];
            i++;
        }
        rev[i]='\0';
        printf("Reversed string is: %s",rev);
        
    return 0;
}