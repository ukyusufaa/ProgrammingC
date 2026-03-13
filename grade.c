#include <stdio.h>

int main(){
    int mark1, mark2, mark3;
    int average;
    int choice;


    printf("Welcome to Trinity Upper School\n");
    printf("**********************************\n");
    printf("**********************************\n");
    printf("**********************************\n");

   do{
        printf("Please select your options:\n1.Grades\n3.Quit\n");
        scanf("%d", &choice);
        if(choice == 3){
                printf("Goodbye");
        break;
        }

        else if(choice == 1){
            printf("Enter the students 3 exam marks(0-100): ");
            scanf("%d%d%d",&mark1, &mark2, &mark3);
            average =(mark1+mark2+mark3)/3;}
        if(average >= 90){
        printf("Student Grade:\nA\nStudent\nMark:\n%d\n", average);
        printf("*************************************************\n");
        printf("*************************************************\n");
        printf("*************************************************\n");

        }
        else if(average >= 75){
            printf("Grade:\nB\nStudent\nMark:\n%d\n", average);
            printf("*****************************************\n");
            printf("*************************************************\n");
            printf("*************************************************\n");


        }
        else if(average >= 55){
            printf("Grade:\nC\nStudent\nMark:\n%d\n", average);
            printf("*****************************************");
            printf("*************************************************\n");
            printf("*************************************************\n");


        }else if(average <=40){
            printf("Grade:\nFAIL\nStudent\nMark:\%d\n", average);
            printf("**************************************************\n");
            printf("*************************************************\n");
            printf("*************************************************\n");


        }

    }while(choice != 3 && choice != 3);

    return 0;
}
