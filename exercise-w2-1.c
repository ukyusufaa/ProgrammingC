#include <stdio.h>

int main(){
    int secretNumber = 79;
    int setAttempts = 0;
    int userNumber;
    int run = 1;

    while(run){
        printf("Guess the number: ");
        scanf("%d", &userNumber);
        if(userNumber == secretNumber){
            printf("Winner");
            break;
            }
            else if(userNumber > secretNumber){
                printf("Too high, try again\n");
                setAttempts++;
                continue;
                }
            else if(userNumber < secretNumber){
                printf("Too low, keep trying\n");
                setAttempts++;
                continue;
                }
    }
            return 0;

    }
