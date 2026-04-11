#include <stdio.h>

int main()
{
    int y = 26;
    int *p;

    p = &y;

    printf("y value is:%d\n", y);
    printf("y address is:%p\n", &y);
    printf("p points to address:%p\n", p);
    printf("*p value at address:%d\n", *p);

    *p = 70;

    printf("*p value at address:%d\n", *p);

    return 0;
}
