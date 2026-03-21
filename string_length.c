#include <stdio.h>

int main(){
  int i=0;
  char name[21];
  int length=0;


  printf("Enter name: ");
  scanf("%s",name);

  while(name[i]!='\0'){
    length++;
    i++;
    }
    printf("Length is %d",length);
    return 0;
}