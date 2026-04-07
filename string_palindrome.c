#include <stdio.h>

int main(){
    int i=0;
    int length=0;
    int isPalindrome=1;
    int start;
    int end;
    char str[30];

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]!='\0'){
        i++;
    }
    length=i;

    start=0;
    end=length-1;

    while(start<end){
        if(str[start] != str[end]){
            isPalindrome=0;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}