#include <stdio.h>

int main(){
    int i=0;
    char name[100];
    int count=0;

    printf("Enter name:");
    scanf("%s",name);

    while(name[i]!='\0'){
        if(name[i]=='a' || name[i]=='e'|| name[i]=='i' || name[i]=='o'||name[i]== 'u'){
            count++;
           }
        i++;
    }
    printf("Vowels =%d\n",count);

    return 0;
}