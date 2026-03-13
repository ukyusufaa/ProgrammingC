#include <stdio.h>

int main(){
    int i,x,z;
    int sumResult=0,sum=0;
    char op;

    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=0; i<=x; i++){
    sumResult=sumResult+i;
    }
    printf("The sum of number %d entered = %d\n",x,sumResult);
    for(int j=0; j<=2; j++){
    printf("Do you want to add (another number(Y/N)?\n ");
    scanf(" %c",&op);
    if(op == 'N' || op == 'n'){
            printf("Goodbye");
    break;
    }
    else{
    printf("Add another number ");
    scanf("%d", &z);
    sum=x+z;
    }
    printf("The previous number was %d and this new number is %d and so result is: %d\n ",x,z,sum);
  }
 return 0;
 }

