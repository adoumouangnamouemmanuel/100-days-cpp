#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int i, sum = 0; // Declare integer variables 'i' and 'sum' and initialize 'sum' to 0

    cout << "\n\n Find the first 10 natural numbers:\n"; // Display a message to find the first 10 natural numbers
    cout << "---------------------------------------\n"; // Display a separator line
    cout << " The natural numbers are: \n"; // Display a message indicating the list of natural numbers

    // Loop to print the first 10 natural numbers and calculate their sum
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " "; // Output each natural number followed by a space
        sum = sum + i; // Calculate the sum by adding the current number 'i' to 'sum'
    }
    cout << "\n The sum of first 10 natural numbers: " << sum << endl; // Display the sum of the first 10 natural numbers
}

