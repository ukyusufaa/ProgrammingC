#include <stdio.h>

int main(){
    int a,b;
    int result=0, memory=0;
    char op;
    char choice;


    do{
        if (useMemory){
            printf("Enter next number to use with previous result %.2lf: ", result);
            scanf("%lf", &b);
            num1 = result; //use memory
        }
        else{

        printf("Which operator (+-*/)?: \n");
        scanf(" %c",&op);


        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        }

        if(op=='+'){
            result=a+b;
            printf("Added result: %d\n",result);
        }
            else if(op=='-'){
                result=a-b;
                printf("Subtracted result: %d\n",result);
            }
            else if(op=='*'){
                result=a*b;
                printf("Multiplied result: %d\n",result);
            }
            else if(op=='/' && b!=0){
                result=a/b;
                printf("Divided result: %d\n",result);
            }
            else{
                printf("Cannot divide by Zero\n");
            }


            //else{
               // printf("Invalid operators");
            //}

    printf("Do you want to continue, Yes (Y) or No (N): ");
    scanf(" %c",&choice);

    }while(choice == 'Y' || choice == 'y');

return 0;
}
