#include <stdio.h>

int main(){
    char userPassword[]="Ahmad";
    char userTry[30];
    int userAttempt=4;

    while(userAttempt > 0){
    printf("Enter password: \n");
    scanf(" %s",&userTry);
    if(strcmp(userTry,userPassword)== 0){
    printf("Sucessful login, Welcome \n");
    break;
    }
    else{
        userAttempt--;
        if(userAttempt > 0){
            printf("Wrong password, Attempts remaining: %d \n",userAttempt);}
            else{
            printf("Account Blocked");
            }
        }

    }
    return 0;
}
