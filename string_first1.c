#include <stdio.h>

int main(){
    int i=0;
    char name[23];

    printf("Enter name: ");
    scanf("%s",name);
    while(name[i]!='\0'){
        printf("%c\n",name[i]);
        i++;
    }
    return 0;
}