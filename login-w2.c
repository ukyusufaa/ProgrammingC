#include <stdio.h>

int main(){
    int setPassword = 1979;
    int setAttempts = 0;
    int userInput;

    while(setAttempts < 3){
            printf("Please Enter password: ");
            scanf("%d", &userInput);

            if(userInput == setPassword){
            printf("Welcome\n");
            break;
            }
            else{
                printf("Wrong password\n");
                setAttempts++;
                }
            }
            if(setAttempts == 3){
                    printf("Acess denied");
            }

        return 0;
}
