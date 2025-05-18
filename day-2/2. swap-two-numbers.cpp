/**
 * Program to swap the values of two integers using a temporary variable.
 * It takes two numbers as input and outputs their values before and after swapping.
 */

#include <iostream> // Include input-output stream library

using namespace std;

int main() {
    int n1, n2, temp; // Declare variables for two numbers and a temporary variable

    cout << "Enter two numbers: " << endl; // Prompt user to input two numbers
    cin >> n1 >> n2; // Read values into n1 and n2

    // Display values before swapping
    cout << "Before: n1 = " << n1 << ". n2 = " << n2 << endl;

    // Swap values using a temporary variable
    temp = n1;
    n1 = n2;
    n2 = temp;

    // Display values after swapping
    cout << "After: n1 = " << n1 << ". n2 = " << n2 << endl;

    return 0; // Indicate successful program termination
}

