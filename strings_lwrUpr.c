#include <stdio.h>

int main(){
    int i =0;
    char name[20];

    printf("Enter name: ");
    scanf("%s",name);
    while(name[i]!='\0'){
        if(name[i]>='a'&& name[i]<='z'){
        name[i]=name[i]-32;
        }
        i++;
        // printf("%s",name); //loops through the letters of name one by one changingthe letters
    }
     printf("%s",name);
    return 0;
}