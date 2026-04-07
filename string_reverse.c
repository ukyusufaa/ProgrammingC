#include <stdio.h>

int main(){
    int i=0;
    int length=0;
    char input[100];

    printf("Enter string: ");
    scanf("%s",input);

    while(input[i]!='\0'){
        length++;
        i++;
        }
        for(i=length-1;i>=0;i--){
            printf("%c",input[i]);
        }
    return 0;
}