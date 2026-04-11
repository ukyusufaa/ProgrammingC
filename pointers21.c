#include <stdio.h>

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int *p = arr;

    printf("%d\n", *p); // pointer position arr[0]
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 6)); // pointer position arr[6]

    return 0;
}