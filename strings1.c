#include <stdio.h>

int main(){
    int i=0;
    char isName[100]="Yusuf";
    char copyName[100];

    while(isName[i]!='\0'){
        copyName[i]=isName[i];
         printf("Original[%d]='%c' Copy[%d]='%c'\n",i,isName[i],i,copyName[i]);
         i++;
            
    }
    copyName[i]='\0';
    printf("Copied string: %s\n",copyName);

    return 0;
}