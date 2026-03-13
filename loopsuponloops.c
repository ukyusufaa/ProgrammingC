#include <stdio.h>

int main(){
    int i,j,n1,n2;
    int sumContinue=0;
    int sum=0;
    char op;

    printf("Enter a number: ");
    scanf("%d",&n1);

    for(i=0;i<=n1;i++){
    sumContinue=sumContinue+i;}

    printf(" The sum total is: %d\n",sumContinue);

    for(j=0;j<=n2;j++){
    printf("Do you want to continue(Y/N)? \n");
    scanf(" %c",&op);
    if(op == 'N'|| op == 'n'){
            printf("GOODBYE \n");break;
    }
    else if(op == 'Y' || op == 'y'){
    printf("Add another number: \n");
    scanf("%d",&n2);
    sum=n1+n2;
    }
    printf("The first number %d and second number %d total is: %d\n",n1, n2,sum );

    }

    return 0;
}















