#include <stdio.h>

int sumNumbers(int start, int end){
    int i = start;
    int sum = 0;

    for(i=1; i <= end;i++){
            if(start > end){
                printf("Invalid input\n");
                return 0;
                break;
                }
        }
        if(start < end){
        sum=sum+i;

    }
    return sum;
}

int main(int start, int end){
    char choice;
    char playOn = 's';

    do{
        printf("Enter start number: \n");
        scanf("%d",&start);
        printf("Enter end number: \n");
        scanf("%d",&end);
        int total = sumNumbers(start,end);
        printf("The total sum of the range of numbers entered is %d \n",total);

        printf("Do you want to exit Y/N? \n");
        scanf(" %c",&choice);
        if(choice == 'y' || choice == 'Y'){
            printf("Are you sure you want to exit Y/N? \n");
            scanf(" %c",&playOn);
            if(playOn == 'n' || playOn == 'N'){
                    playOn = 's';
                printf("Enjoy playing\n");

            }else{
            printf("Goodbye\n");
            }
        }


    }while(playOn !='c'&& playOn != 'C');

  return 0;
}
