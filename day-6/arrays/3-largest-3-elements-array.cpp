#include<iostream> // Header file for input/output stream
#include<climits> // Header file for limits of integral types
using namespace std; // Using the standard namespace

void three_largest(int arr[], int arr_size) // Function definition to find three largest elements in the array
{
    int i, first, second, third; // Declaration of integer variables

    if (arr_size < 3) // Checking if the array has less than 3 elements
    {
        cout << "Invalid Input"; // Output message for invalid input
    }

    third = first = second = INT_MIN; // Initializing first, second, and third as minimum integer value
    for (i = 0; i < arr_size; i ++) // Loop to find three largest elements in the array
    {
        if (arr[i] > first) // Checking if current element is larger than the first largest element
        {
            third = second; // Updating third largest element
            second = first; // Updating second largest element
            first = arr[i]; // Updating first largest element
        }
        else if (arr[i] > second) // Checking if current element is larger than the second largest element
        {
            third = second; // Updating third largest element
            second = arr[i]; // Updating second largest element
        }
        else if (arr[i] > third) // Checking if current element is larger than the third largest element
        {
            third = arr[i]; // Updating third largest element
        }
    }

    cout << "\nThree largest elements are: " << first << ", " << second << ", " << third; // Output three largest elements
}

int main() // Main function where the program execution starts
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70}; // Declaration and initialization of an integer array
    int n = sizeof(nums)/sizeof(nums[0]); // Determining the number of elements in the array

    cout << "Original array: "; // Output message indicating the original array is being displayed
    for (int i=0; i < n; i++) 
        cout << nums[i] <<" "; // Output each element of the array

    three_largest(nums, n); // Calling function to find three largest elements in the array
    return 0; // Return statement indicating successful execution and program termination
}


