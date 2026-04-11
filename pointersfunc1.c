#include <stdio.h>
// declaration of function
void change(int *p);
int main()
{
    int x = 25; // variable x is declared

    change(&x);                   // address sent from main to change function
    printf("Value at x:%d\n", x); // modified x from value 25 to 75
    printf("Address of x:%p\n", &x);

    return 0;
}
// definition of function
void change(int *p)
{

    *p = 75;            // modifies the original variable at the address sent from main
                        //(x is changed to 75)
    printf("%d\n", *p); // print value at that address(prints x)
    printf("Address in p:%p\n", p);
}