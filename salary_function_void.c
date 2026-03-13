#include <stdio.h>

float hoursWorked;
float payRate;
float originalPay;
float overTimePay;
float overTimeHours;
float taxPaid;
float grossPay;
float netPay;
float overTimeRate=1.5;
float taxAmountA=20;
float taxAmountB=25;

void setPayRate(char jobRole){
    switch(jobRole){
        case'M':
            case'm':payRate=40.00; break;
        case'S':
            case's':payRate=23.75; break;
        case'F':
            case'f':payRate=19.79; break;
        case'W':
            case'w':payRate=14.99; break;
        case'C':
            case'c':payRate=15.01; break;

        default:printf("Invalid option");
    }
}

void calculatePay(){
   if(hoursWorked<=40){
        grossPay=payRate*hoursWorked;
        netPay=(grossPay)-grossPay*taxAmountA/100;
        taxPaid=grossPay*taxAmountA/100;
        }
        else{
            overTimeHours=hoursWorked-40;
            overTimePay=overTimeHours*1.5;
            grossPay=(40*payRate)+(overTimeHours*overTimePay);
            netPay=(grossPay)-grossPay*taxAmountB/100;
            taxPaid=grossPay*taxAmountB/100;
            }

    originalPay=grossPay-overTimePay;
}

void paySlip(char employeeName[]){

    printf("PAY SLIP for %s\n",employeeName);
    printf("Rate $%.2lf\n",payRate);
    printf("Hours %.2f\n",hoursWorked);
    printf("Pay before overtime and tax $%.2f\n",originalPay);
    printf("Overtime pay $%.2f\n",overTimePay);
    printf("Overtime hours %.2f\n",overTimeHours);
    printf("Gross pay $%.2f\n",grossPay);
    printf("Tax $%.2f\n",taxPaid);
    printf("Net pay $%.2f\n",netPay);
}


int main(){
    int i;
    char employeeName[40];
    int employeeAge;
    int numberOfEmployees;
    char jobRole;
    char choice;
    char carryon='c';

    do{
    printf("Jaguar Ltd\n");
    printf("**************************\n");
    printf("**************************\n");
    printf("**************************\n");
    printf("How many employees: ");
    scanf("%d",&numberOfEmployees);
   while(getchar() != '\n');
    printf("***********************\n");
    for(i=1;i<=numberOfEmployees;i++){
       printf("***********************\n");
       printf("Employee %d:\n\tName: ",i);
       scanf("%s",employeeName);
       while(getchar() != '\n');
       printf("Employee %d:\n\tAge: ",i);
       scanf("%d",&employeeAge);
       while(getchar() != '\n');
       printf("Number of hours worked ",i);
       scanf("%f",&hoursWorked);
       while(getchar() != '\n');
       printf("Please select option:\nM:Manager\nS:Supervisor\nF:FirstAid\nW:Worker\nC:Cleaner\n");
       scanf(" %c",&jobRole);
       while(getchar() != '\n');

        setPayRate(jobRole);
        calculatePay();
        paySlip(employeeName);

    printf("Do you want to exit Y/N? \n");
        scanf(" %c",&choice);
        while(getchar() != '\n');
        if(choice == 'y' || choice == 'Y'){
            printf("Are you sure you want to exit (Type:'X' = Y to QUIT) Y/N? \n");
            scanf(" %c",&carryon);
            while(getchar() != '\n');
            if(carryon == 'n' || carryon == 'N'){
                    carryon = 'c';
                printf("Enjoy playing\n");

            }else{
            printf("Goodbye\n");
            }
        }
    }

    }while(carryon !='X' && carryon !='x');
    return 0;
}
