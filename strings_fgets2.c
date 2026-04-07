#include <stdio.h>

int main(){
    int i=0;
    int length=0;
    char input[100];

    printf("Enter string: ");
    fgets(input,sizeof(input),stdin);

   while(input[i]!='\0'){
    i++;
    }

    i--;

    while(i>=0){
        printf("%c",input[i]);
        i--;
    }
    return 0;
}
    