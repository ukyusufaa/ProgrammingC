#include <stdio.h>

int main(){

    int age;
    char gender,ms;
    int clientCount;
    char a;

   do{
        printf("Please enter age: \n");
        scanf("%d",&age);
        printf("Please enter Gender(M/F)? \n");
        scanf(" %c", &gender);
        printf("Please enter Married Status W = Married U = unmarried\n");
        scanf(" %c", &ms);
        if((ms == 'U' && age >= 18 && gender == 'F' ) || (ms == 'M' && age >= 18 && gender =='F') || (ms == 'U' && gender == 'M' && age > 21) || (ms == 'M' && gender == 'M' && age > 21))
            printf("Congratulations Bank Account application accepted\n");
            else
                printf("Sorry Bank account application not accepted\n");
            clientCount = clientCount++;
        printf("To Quit(Q) or Continue(C)");
        scanf(" %c",&a);
        if(a=='Q' || a == 'q'){break;}
        else
        {continue;}

   }while(a != 'Q' && a!= 'q');

    return 0;

    }
