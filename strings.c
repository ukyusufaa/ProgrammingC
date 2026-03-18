#include <stdio.h>

int main(){
    int i=0;
    char isName[]={'Y','u','s','u','f','\0'};
    char inputName[19];
    int correct=1;

    printf("Please enter name: ");
    scanf("%s",inputName);

    while(isName[i]!='\0' && inputName[i]!='\0'){
        printf("compare[%d]='%c' with[%d]='%c'\n",i,isName[i],i,inputName[i]);
                if(isName[i]!=inputName[i]){
                    correct=0;
                    break;
                }
                i++;
            }
            if(isName[i]!='\0'||inputName[i]!='\0'){
                correct=0;
            }
            if(correct==1){
                printf("Sucessful");
            }
            else{
                printf("Unsucessful");
            }

    return 0;
}
