#include <stdio.h>

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int *p = arr;

    p += 5;                   // pointer moves from 5 positions from arr[0] to arr[5]---value 60
    *(p - 2) = 1000;          // minus 2 --- pointer is now at position arr[3] --- value 40 becomes value 1000
                              // note pointer initiates at arr[5] --- 60
    printf("%d\n", *p);       // value 60
    printf("%d\n", arr[3]);   // value 1000
    printf("%d\n", *(p + 1)); // pointer is at position arr[6] --- value 70
    printf("%d\n", *(p - 2)); // pointer is at postion arr[3] --- value 1000
    printf("%d\n", *(p - 4)); // pointer is at postion arr[1] --- value 20
    return 0;
}