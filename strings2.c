#include <stdio.h>

int main(){
    int i=0;
    char isName[100]="Yusuf";
    char inputName[100];
    char copyName[100];
    int correct=1;

    printf("Enter name ");
    scanf("%s",inputName);
    while(isName[i]!='\0' && inputName[i]!='\0'){
         copyName[i]=inputName[i];

        printf("Original[%d]='%c' Copy[%d]='%c'\n",i,isName[i],i,inputName[i]);

        if(isName[i]!=inputName[i]){
        correct=0;
        i++;
        break;
            }
            i++;
        }
        copyName[i]='\0';
        if(correct==1 && isName[i]=='\0' && inputName[i]=='\0'){
        printf("Correct\n");
        }
        else{
            printf("Wrong\n");
        }
        printf("String copied %s\n",copyName);

    return 0;
}