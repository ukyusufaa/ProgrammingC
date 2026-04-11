#include <stdio.h> //Allows use of input/output functions like printf
// function to double each element of array
// Parameters:
// int *p -> Pointer to first element of array
// int size ->Number of elements in array
void doubleElements(int *p, int size)
{
    // Loop through each element of array
    for (int i = 0; i < size; i++)
    {
        // Multiply by 2 the value at index
        // p[i] equivalant to *(p+i)
        p[i] = p[i] * 2;
    }
}
int main()
{
    // Declare initialise array with 5 integers
    int arr[5] = {1, 2, 3, 4, 5};
    // calculate number of elements in array
    // sizeof(arr) total size of array in bytes
    // sizeof(arr[0]) size of one element in bytes
    // Dividing them gives number of elments
    int size = sizeof(arr) / sizeof(arr[0]);

    // call the function and pass:
    // 1.The array name 'arr',which represents the address
    // of the first element(&arr[0])
    // 2.The number of elements in array
    // The function will modify the original array directly
    doubleElements(arr, size);
    // Loop to print the modified array elemtnts
    for (int i = 0; i < size; i++)
    {
        // Print each element followed by space
        printf("%d ", arr[i]);
    }
    // Print a new line for cleaner output
    printf("\n");
    // Indicate the program executed sucessfully
    return 0;
}
