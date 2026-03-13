#include <stdio.h>

int main(){
    int select;

    printf("Please select:\n(1)Hello\n(2)Bye\n(3)How are you\n");
    scanf("%d",&select);

    switch(select){
    case 1:printf("Hello");break;
    case 2:printf("Bye");break;
    case 3:printf("How are you");break;
    default:printf("Invalid choice");


    }

    return 0;
}

