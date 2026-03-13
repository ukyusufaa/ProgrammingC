#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    double memory=0,result=0;
    char op, choice;
    char input[20];

    do
    {
        printf("Please select operator\n");
        printf("Add(+)\n");
        printf("Subtract(-)\n");
        printf("Multiply(*)\n");
        printf("Divide(/)\n");
        printf("..........................\n");
        printf("Save(m)\n");
        printf("Recall(r)\n");
        printf("Clear(c)\n");
        scanf(" %c",&op);

        if(op=='c'){
            memory=0;
            printf("Memory cleared\n",memory);
            continue;
        }
        else if(op=='m'){
            memory=result;
            printf("result saved %.2lf\n",memory);
            continue;
        }
        else if(op=='r'){
            printf("memory %.2lf\n",memory);
            continue;
        }
        printf("Enter first number or (m) for memory: ");
        scanf("%s",input);
        if(input[0] == 'm'){
            a=memory;}
        else{
            a=atof(input);}


        printf("Enter second number or (m): for memory ");
        scanf("%s",input);
        if(input[0] == 'm'){
            b=memory;}
        else{
            b=atof(input);}


        if(op=='+'){
            result=a+b;
            printf("%.2lf\n",result);
        }
        else if(op=='-'){
            result=a-b;
            printf("%.2lf\n",result);
        }
        else if(op=='*'){
            result=a*b;
            printf("%.2lf\n",result);
        }
        else if(op=='/' && b!=0){
                result=a/b;
                printf("%.2lf\n",result);
                }
                else{
                    printf("Cannot divide by ZERO\n");
                }
                printf("Do you want to continue Yes(Y)or No(N)?\n");
                scanf(" %c",&choice);

    }while(choice=='Y' || choice=='y');

    return 0;
}
