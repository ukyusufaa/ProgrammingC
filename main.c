#include <stdio.h>


int main(){
    int p1,p2,attempts;
    char op,choice;

    printf("\tWelcome to 'Guess the number Game'\n");
    printf("************************************\n");
    printf("************************************\n");
    do{
    printf("\tPlayer 1 Enter a number: \n");
    scanf("%d",&p1);


    printf("\t\tEnter difficulty level,Easy(E),Normal(N),Hard(H): \n");
    scanf(" %c",&op);

    switch(op){
    case 'E': attempts=4;break;
    case 'N': attempts=3;break;
    case 'H': attempts=2;break;
    default: attempts=3;
    }

    do{

        printf("\tPlayer 2 'Guess the number': \n");
        scanf("%d",&p2);
        attempts--;

        if(p2 < p1){
            printf("Number entered is lower, try again\n");
            printf("Not a winner yet\n");
            printf("%d attempts remaining\n",attempts);

        }
        else if(p2 > p1){
            printf("Number entered is higher, try again\n");
            printf("Not a winner yet\n");
            printf("%d attempts remaining\n",attempts);


        }
        else if(p2 == p1){
            printf("Winner\n");
            printf("********\n");
            }

        }while(p2!=p1 && attempts >0);

        printf("Do you want to quit, Yes(Y( type 'X') or No(N)? \n");
        scanf(" %c",&choice);

    }while(choice!='X' && choice!='x');
    return 0;
}







