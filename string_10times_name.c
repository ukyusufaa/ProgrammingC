#include <stdio.h>

int main(){
    int i=0;
    char name[20];
    int count=0;

    printf("Enter name: ");
    scanf("%s",name);

    while(i<10){
        printf("%s\n",name);
        i++;
    }
   
    return 0;  
}