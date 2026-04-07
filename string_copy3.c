#include <stdio.h>

int main(){
    int i =0;
    int count=0;
    char name[]="Yusuf";

    while(name[i]='\0'){
        if(name[i]>=a && name[i]<=z){
        name[i]=name[i]-32;
        count++;
        }
        i++;
    }
    return 0;
}