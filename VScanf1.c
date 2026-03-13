#include <stdio.h>

int main(){

    char name[27];
    int age;
    double weight;
    float height;


    printf("Hello world\n");

    printf("Enter name: ");
        scanf("%s", &name);
    printf("Name: %s\n", name);

    printf("Enter age: ");
        scanf("%d", &age);
    printf("Age: %d\n", age);

    printf("Enter Weight: ");
        scanf("%lf", &weight);
    printf("Weight: %.4lf\n", weight);

    printf("Enter height: ");
        scanf("%f", &height);
    printf("Height: %.2f\n", height);




    printf("Goodbye\n");

    return 0;
}
