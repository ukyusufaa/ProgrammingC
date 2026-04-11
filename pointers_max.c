#include <stdio.h>
void findMax(int *arr, int size, int *max, int *index);
int main()
{
    // Declare and intialise an array of integers
    int arr[7] = {30, 45, 65, -1, 7, 0, 1};
    int max, index;
    // Calculate number of elememts in array
    int size = sizeof(arr) / sizeof(arr[0]);
    // Call the function
    findMax(arr, size, &max, &index);
    // Display the maximum value and its index
    printf("Max:%d, Index:%d\n", max, index);

    return 0;
}
// Function to find the maximum value in an array and its index
void findMax(int *arr, int size, int *max, int *index)
{
    // Assume the first element is maximum
    *max = arr[0];
    // Store index
    *index = 0;
    // Traverse the array starting from second element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i]; // Update maximum value
            *index = i;    // Update index of maximum value
        }
    }
}