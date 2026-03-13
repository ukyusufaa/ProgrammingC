#include <stdio.h>
#include <string.h>

int main(){
    char username[30]="England";
    char password[30]="Yusuf";
    char uEnter[40];
    char pEnter[50];
    int Try=3;



    while(Try > 0){
        printf("Enter Username: ");
        scanf(" %s",&uEnter);
        printf("Enter password: ");
        scanf(" %s",&pEnter);
        if(strcmp(uEnter,username) == 0 && strcmp(pEnter,password) == 0){
        printf("Welcome");
        break;
        }
            else{
                Try--;
            }
            if(Try > 0 ){
                printf("Incorrect Username and password, you have %d attempts remaining\n",Try);
                }
                else{
                    printf("Account Blocked");
                }
    }
    return 0;
}
