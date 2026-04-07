#include <stdio.h>

int main(){
    int i=0;
    int spaces=0;
    char input[100];

    printf("Enter string: ");
    fgets(input,sizeof(input),stdin);

    while(input[i]!='\0'){
        if(input[i]==' '){
            spaces++;
        }
        i++;
    }
    printf("Total spaces in sentence: %d\n",spaces);
    i--;
    while(i>=0){
        printf("%c",input[i]);
        i--;
    }

    return 0;
}
    