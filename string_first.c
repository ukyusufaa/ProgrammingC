#include <stdio.h>

int main(){
    int i=0;
    char name[]="Yusuf";

    while(name[i]!='\0'){
        printf("%c\n",name[i]);
        i++;
    }
    return 0;
}