#include <stdio.h>

int main(){
    int i;
    char employeeName[40];
    int employeeAge;
    int numberOfEmployees;
    float hoursWorked;
    float payRate;
    float hourlyRateWorker = 16.13;
    float hourlyRateCleaner = 12.00;
    float hourlyRateFirstAid = 19.32;
    float hourlyRateSupervisor = 20.01;
    float hourlyRateManager = 33.99;
    float originalPay;
    float overTimePay;
    float overTimeHours;
    float overTimeRate = 1.5;
    float taxAmountA = 20;
    float taxAmountB =25;
    float taxPaid;
    float grossPay;
    float netPay;
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

       switch(jobRole){
       case'M':
            case'm':if(hoursWorked<=40){
                        payRate=hourlyRateManager;
                        grossPay=hoursWorked*payRate;
                        netPay=(grossPay)-grossPay*taxAmountA/100;
                        taxPaid=grossPay*taxAmountA/100;
                    }
                    else{
                        payRate=hourlyRateManager;
                        overTimePay=(hoursWorked-40)*payRate*overTimeRate;
                        grossPay=(40*payRate)+overTimePay;
                        netPay=(grossPay)-grossPay*taxAmountB/100;
                        taxPaid=grossPay*taxAmountB/100;

                    }
                        break;

        case 'S':
            case 's':if(hoursWorked <=40){
                        payRate=hourlyRateSupervisor;
                        grossPay=hoursWorked*payRate;
                        netPay=(grossPay)-grossPay*taxAmountA/100;
                        taxPaid=grossPay*taxAmountA/100;

                    }
                    else{
                        payRate=hourlyRateSupervisor;
                        overTimePay=(hoursWorked-40)*payRate*overTimeRate;
                        grossPay=(40*payRate)+overTimePay;
                        netPay=(grossPay)-grossPay*taxAmountB/100;
                        taxPaid=grossPay*taxAmountB/100;

                    }
                        break;
        case 'F':
            case 'f':if(hoursWorked <=40){
                        payRate=hourlyRateFirstAid;
                        grossPay=hoursWorked*payRate;
                        netPay=(grossPay)-grossPay*taxAmountA/100;
                        taxPaid=grossPay*taxAmountA/100;

                    }
                    else{
                        payRate=hourlyRateFirstAid;
                        overTimePay=(hoursWorked-40)*payRate*overTimeRate;
                        grossPay=(40*payRate)+overTimePay;
                        netPay=(grossPay)-grossPay*taxAmountB/100;
                        taxPaid=grossPay*taxAmountB/100;

                    }
                        break;
        case 'W':
            case 'w':if(hoursWorked <=40){
                        payRate=hourlyRateWorker;
                        grossPay=hoursWorked*payRate;
                        netPay=(grossPay)-grossPay*taxAmountA/100;
                        taxPaid=grossPay*taxAmountA/100;

                    }
                    else{
                        payRate=hourlyRateWorker;
                        overTimePay=(hoursWorked-40)*payRate*overTimeRate;
                        grossPay=(40*payRate)+overTimePay;
                        netPay=(grossPay)-grossPay*taxAmountB/100;
                        taxPaid=grossPay*taxAmountB/100;

                    }
                        break;
        case 'C':
            case 'c':if(hoursWorked <=40){
                        payRate=hourlyRateCleaner;
                        grossPay=hoursWorked*payRate;
                        netPay=(grossPay)-grossPay*taxAmountA/100;
                        taxPaid=grossPay*taxAmountA/100;
                    }
                    else{
                        payRate=hourlyRateCleaner;
                        overTimePay=(hoursWorked-40)*payRate*overTimeRate;
                        grossPay=(40*payRate)+overTimePay;
                        netPay=(grossPay)-grossPay*taxAmountB/100;
                        taxPaid=grossPay*taxAmountB/100;
                    }
                        break;


        default: printf("invalid choice");
       }


    overTimeHours=hoursWorked-40;
    originalPay=grossPay-overTimePay;
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

    }while(carryon !='X' && carryon !='x');
    return 0;
}
