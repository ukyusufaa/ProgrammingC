#include <stdio.h>

int main(){
    int i=0;
    char inputName[20];
    char copyName[20];

    printf("Enter name: ");
    scanf("%s",inputName);

    while(inputName[i]!='\0'){
        copyName[i]=inputName[i];
        i++;
    }
    copyName[i]='\0';
    printf("string %s ",copyName);

    return 0;
}

   

  