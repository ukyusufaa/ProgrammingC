#include <stdio.h>

int main(){
    int row,col,product,n;

    printf("Enter size of table: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            product=row*col;
            if(product % 2 == 0){

                printf("%d ",product);
            }
        }
        printf("\n");
    }
   return 0;
}
