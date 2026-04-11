#include <stdio.h> //Enables use of standard input/output functions like printf

void findMin(int *arr, int size, int *min, int *index);
int main()
{
    int n;
    int min;
    int index;
    // Ask the user to enter the number of elements
    printf("How many elements you want checking?: ");
    scanf("%d", &n);
    // Declare a Varaible Length Array(VLA) with size 'n'
    int arr[n];
    // Read the array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    // Call the function to find the minimum value and its index
    findMin(arr, n, &min, &index);
    // Display the result
    printf("Min:%d,Index:%d", min, index);

    return 0;
}
// Function to find the minimum value in an array and its index
// Parameters:
// int *arr -> Pointer to the first element of the array
// int *min -> Pointer to a varaible where minimum value will be stored
// int *index -> Pointer to a variable where the index of the minimum
// value will be stored
void findMin(int *arr, int size, int *min, int *index)
{
    // Assume the first element is the miniumum initially
    // Store the first elements value as the current minimum
    *min = arr[0];
    // store the index(position) of the current minimum
    *index = 0;
    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++)
    {
        // Compare each element with current minimum
        if (arr[i] < *min)
        {
            *min = arr[i]; // Update minimum value
            *index = i;    // Update  index where new minimum is found
        }
    }
}