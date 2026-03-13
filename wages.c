#include <stdio.h>

int main(){
    double hoursWorked;
    double hourlyRate;
    double overtimeWorked;
    double totalPay;
    int employeeCount;
    char continueLoop ='Y';

    do{
        printf("Please enter the total numbers of hours worked: \n");
        scanf("%lf",&hoursWorked);
        printf("Please Enter the hourly rate: \n");
        scanf("%lf",&hourlyRate);
        if(hoursWorked > 40){
            overtimeWorked = hoursWorked - 40;
            printf("Overtime worked: %.2lf\n", overtimeWorked);}
            else{
                overtimeWorked = 0;
                }
        totalPay =(hoursWorked -overtimeWorked)* hourlyRate + overtimeWorked * hourlyRate *1.5;
        printf("The total pay: %.2lf\n", totalPay);
        employeeCount = employeeCount++;
        printf("Do you want to continue(Y/N)?\n");
        scanf(" %c", &continueLoop);

    }while(continueLoop == 'Y' || continueLoop == 'y');

    return 0;
    }



