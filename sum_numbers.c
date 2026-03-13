#include <stdio.h>

int main(){
    int i,n;
    int sum=0;


    printf("How many numbers do you want to find the sum of: \n");
    scanf("%d",&n);

    int num;
    for(i=1;i<=n;i++){


    printf("Enter the number %d:",i);
    scanf("%d",&num);
    sum= sum+num;
    }
    printf("%d is the sum of these numbers entered \n",sum);

    return 0;
}
