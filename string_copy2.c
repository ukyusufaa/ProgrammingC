#include <stdio.h>

int main(){
    int i=0;
    char isName[]="Yusuf";
    char inputName[20];
    char copyName[20];

    printf("Enter name: ");
    scanf("%s",inputName);

    while(isName[i]!='\0' && inputName[i]!='\0'){
        copyName[i]=inputName[i];
        i++;
    }
        if(isName[i]!=inputName[i]){
            printf("No Match");
            }
            else{
        copyName[i]='\0';
        printf("%s copied string",copyName);
    }
      
    return 0;
    }