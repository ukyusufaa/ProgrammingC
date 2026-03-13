#include <stdio.h>

int main(){
    char select;

    printf("Please select,(E)Easy or (N)Normal or H(Hard):\n");
    scanf(" %c",&select);

    switch(select){
        case 'E':
            case 'e': printf("Easy"); break;
        case 'N':
            case 'n': printf("Normal"); break;
        case 'H':
            case 'h': printf("Hard"); break;
        default: printf("Invalid selection");
    }
    return 0;
}
