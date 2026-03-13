#include <stdio.h>

int main(){
    char name[30];
    char address[100];
    char pcode[19];
    char subject[20];
    int year;
    double code;

    printf("Welcome to Trinity Upper School\n");

    printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
    printf("%s\n", name);

    printf("Enter address: ");
        fgets(address, sizeof(address), stdin);
    printf("%s\n",address);

    printf("Enter post code: ");
        fgets(pcode, sizeof(pcode), stdin);
    printf("%s\n", pcode);

    printf("Enter subject: ");
        scanf("%s", &subject);
    printf("%s\n", subject);

    printf("Enter class year group: ");
        scanf("%d", &year);
        while(getchar() != '\n');
    printf("%d\n", year);

    printf("Enter group: ");
        scanf("%lf", &code);
   printf("%.4lf\n", code);


    printf("Good Bye:\n");

    return 0;

}
