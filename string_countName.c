#include <stdio.h>

int main(){
    int i=0;
    char name[100];
    int count=0;

    printf("Enter name: ");
    scanf("%s",name);

    while(name[i]!='\0'){
        if(name[i]>='a'&& name[i]<='z'){
            name[i]=name[i]-32;
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}