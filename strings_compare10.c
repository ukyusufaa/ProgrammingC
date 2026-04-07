#include <stdio.h>
#include <string.h>

int compareStrings(char x[],char y[]);
int main(){
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);

    int result=compareStrings(str1,str2);

    if(result==0){
        printf("Identical\n");
    }
    else{
        printf("Diffrent\n");
    }

    return 0;
}
int compareStrings(char x[],char y[]){
    int i;

    while(x[i]!='\0' && y[i]!='\0'){
        if(x[i]!=y[i]){
            return x[i]-y[i];
        }
        i++;
    }
    return x[i]-y[i];
}