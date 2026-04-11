#include <stdio.h> //Allows the use of standard input/output functions like printf

void findMinMax(int *arr, int size, int *min, int *max, int *minIndex, int *maxIndex);
//-----------------------------------------------------------------------------------
// Function main
// Purpose : Entry point of the program. It initialises an array
//          calculautes its size using sizeof, calls the
//          findMinMax function, and prints the results
//-----------------------------------------------------------------------------------
int main()
{
    // Declare and initialise the array
    int arr[7] = {30, 45, 65, -1, 7, 0, 1};
    // Declare variables to store the results
    int min, max, minIndex, maxIndex;
    // calculate the number of elements in array
    int size = sizeof(arr) / sizeof(arr[0]);
    // Call the function:
    // The array decays to a pointer to its first element
    // The size of the array
    // The addreses of the varaibles where results will be stored
    findMinMax(arr, size, &min, &max, &minIndex, &maxIndex);
    // Display the results
    printf("Min:%d, Index:%d\n", min, minIndex);
    printf("Max:%d, Index:%d\n", max, maxIndex);

    return 0;
}
void findMinMax(int *arr, int size, int *min, int *max, int *minIndex, int *maxIndex)
{
    // Assume the first element is both the minimum and maximum
    *min = *max = arr[0];
    // The indicies of both the minimum and maximum are intially 0
    *minIndex = *maxIndex = 0;
    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            // if a smaller value than the current minumum is found,
            // then update the minumum value and its index
            *min = arr[i];
            *minIndex = i;
        }
        // if a larger value than the current maximum is found,
        // then update the maximum value and its index
        if (arr[i] > *max)
        {
            *max = arr[i];
            *maxIndex = i;
        }
    }
}