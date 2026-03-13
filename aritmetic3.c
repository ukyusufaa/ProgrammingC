 #include <stdio.h>

int main(){
    float a, b, x;


    printf("Enter Three numbers: ");
    scanf("%f%f%f",&a, &b, &x);

    printf("The Three numbers you entered are: %.2f %.2f %.2f\n", a, b, x);
    printf("The average of these three numbers is: %.2f\n", (a + b + x)/(float)3);

    return 0;
}
