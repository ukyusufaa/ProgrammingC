#include <stdio.h>

int sumNumbers(int start, int end){
    int i = start, sum = 0;

    while(i <= end){
        sum = sum + i;
        i++;
  }
  return sum;
}

int main(int start, int end){
    char op;

    do{

    printf("Enter start number: \n");
    scanf("%d",&start);
    printf("Enter end number: \n");
    scanf("%d",&end);


    int range = sumNumbers(start,end);

    printf("Range of numbers and their sum value: %d\n",range);

    printf("Do you want to continue,Y(Yes)or N(No)? \n");
    scanf(" %c",&op);
    if(op == 'Y' || op == 'y'){


        }
        else{
            break;
        }
    }while(op != 'Y' || op != 'y');

return 0;
}
