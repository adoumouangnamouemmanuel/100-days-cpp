#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int i; // Declare an integer variable 'i'

    cout << "\n\n Find the first 10 natural numbers:\n"; // Display a message to find the first 10 natural numbers
    cout << "---------------------------------------\n"; // Display a separator line
    cout << " The natural numbers are: \n"; // Display a message indicating the list of natural numbers

    // Loop to print the first 10 natural numbers
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " "; // Output each natural number followed by a space
    }
    cout << endl; // Move to the next line after printing the numbers
}

