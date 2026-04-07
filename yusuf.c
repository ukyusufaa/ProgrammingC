#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 7

int main(){
    char pswd[]="PeterLeadbetter";
    char password[30];
    int attempts=5;
    int correct;
    int i;

    while(attempts>0)
    {
        correct=1;
        i=0;

        printf("PASSWORD: ");
        scanf("%s",password);

        while(pswd[i] != '\0' && password[i] != '\0')
        {
            if(pswd[i]!=password[i])
            {
                correct=0;
                break;
            }
            i++;
        }
        if(pswd[i] != '\0' || password[i] != '\0')
        {
            correct=0;
        }
        if(correct==1)
        {
            printf("WELCOME");
            break;
        }
        else{
            attempts--;
            printf("Incorrect Password, %d Attempts remaining\n",attempts);
        }
        if(attempts==0)
        {
            printf("Blocked");
        }
    }

    return 0;
}