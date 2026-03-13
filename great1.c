#include <stdio.h>
#include <string.h>

int main(){
    char userName[30]="Ahmad";
    char userPassword[30]="Ali";
    char enterName[30];
    char enterPassword[30];
    int attemptNp = 3;


    while(attemptNp > 0){
        printf("Enter username: ");
        scanf(" %s",&enterName);
        printf("Enter password: ");
        scanf(" %s",&enterPassword);
        if(strcmp(enterName,userName) == 0 && strcmp(enterPassword,userPassword) == 0){
        break;
        }

            else{
                attemptNp--;
            }
                if(attemptNp > 0){
                    printf("re-enter correct username %d attempts remaining \n",attemptNp);
                    }
                    else{
                        printf("Acount blocked");
                    }

            }



return 0;
}
