#include <stdio.h>

int main(){
    int i;
    char word[50];
    int times;

    printf("Enter a word: ");
    scanf(" %s", &word);
    printf("Print word how many times? ");
    scanf("%d", &times);
    for(i = 1; i <= times; i++){
    printf(" %s\n", word);

    }


        return 0;
    }
