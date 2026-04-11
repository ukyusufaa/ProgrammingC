// Includes the standard input/output library for printf
#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    // Declare and initialise two integer variables
    int x = 5;
    int y = 10;
    // Print the values of x and y before swapping
    printf("Before Swap:X=%d,Y=%d\n", x, y);
    // Pass the addresses'&x and &y'of x and y to the function
    swap(&x, &y);
    // Print the values of x and y after swapping
    printf("After Swap:X=%d,Y=%d\n", x, y);

    // Indicate sucessful program execution
    return 0;
}
// Function defintion to swap two integers using pointers
void swap(int *a, int *b)
//*a and *b are pointers that store addresses of x and y
//*a and *b access(dereference) the actual values stored at those addresses
{
    // Temporary variable to hold one value during swap
    int temp;

    // Step 1:Store the value of x in temp
    // if x=5,then temp=5
    temp = *a;

    // Step 2:Assign the value of y to x
    // Now x takes the value of y(eg.x=10);
    *a = *b;
    // Step 3: Assign the original value of x(stored in temp) to y
    // Now y=5
    *b = temp;
}