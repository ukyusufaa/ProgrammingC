#include <stdio.h>

int main(){
    double length;
    double breadth;
    double area;
    double perimeter;

    printf("Enter length:\n"); scanf("%lf",&length);
    printf("Enter breadth:\n"); scanf("%lf",&breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle:%.2lf\n",area);
    printf("Perimeter of rectangle:%.2lf\n",perimeter);

    return 0;
}
