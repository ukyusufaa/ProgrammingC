#include <stdio.h>

int main(){

    char id = 'A';
    char name[] = "Yusuf";
    int age = 46;
    float height = 5.60;
    double weight = 10.6235;

    printf("ID: %c\n", id );
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.4lf\n", weight);

    return 0;
}
