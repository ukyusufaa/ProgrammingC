#include <stdio.h>

int main(){
    int userPassword=1234;
    int enterPassword;
    int attempts=5;

    printf("British steel\n");

    do{
        printf("\tPassword: ");
        scanf("%d",&enterPassword);

        if(enterPassword==userPassword){
            printf("\t\t\t\Welcome\n");
            break;
        }
        if(enterPassword!=userPassword){
            attempts--;
            printf("\t\tINCORRECT PASSWORD, %d attempts remaining\n",attempts);
        }
        if(attempts==0){
            printf("\tB\tL\tO\tC\tK\tE\tD\n");
        }

   } while(attempts>0);
   return 0;
}
