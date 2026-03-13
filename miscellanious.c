#include <stdio.h>

void sumNumbers(int start, int end){
    int i = start;
    int sum = 0;

    if(start > end){
       printf("start number MUST BE LOWER than end number\n");
    }
        while(i <= end){
            sum = sum + i;
            i++;

    }printf("%d\n",sum);
}

int main(int start, int end){
    char op;

    do{
        printf("Enter a start number: \n");
        scanf("%d",&start);
        printf("Enter an end number: \n");
        scanf("%d",&end);

        sumNumbers(start,end);

        printf("Do you want to continue, Y or N? \n");
        scanf(" %c",&op);

        if(op == 'Y' || op == 'y'){
            printf("Let us play more\n");
        }
        else{
                printf("Are you sure want you want to exit, Y/N?\n");
                scanf(" %c",&op);
                if(op == 'N' || op == 'n'){
                        printf("Let the game stay on\n");
                        }
                else{
            printf("Goodbye\n");
            break;
        }
      }

    }while(op != 'Y' && op != 'y');

  return 0;
}

