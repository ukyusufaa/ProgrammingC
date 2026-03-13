#include <stdio.h>

int main(){
    int rows,columns,n;

    printf("Enter a number: ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++){
        for(columns=1;columns<=rows;columns++){
            printf("%d",columns*2);
        }
        printf("\n");
    }

    return 0;
}
