#include <stdio.h>
#include <string.h>

int main(){

    char setPassword[20] = "Mariam";
    char userTry[30];
    int setAttempts = 3;

    while(setAttempts > 0){
        printf("Enter Password: ");
        scanf(" %s", &userTry);
        if (strcmp(userTry, setPassword) == 0)
        {
            printf("Welcome");
            break;
        }
        else
       {
            setAttempts--;
           if(setAttempts > 0)
            {
               printf("Incorrect password, Attempts remaining:  %d\n",setAttempts);
            }
            else
           {
               printf("Incorrect password\n");
               printf("Account Blocked\n");
            }

       }

    }return 0;
}



