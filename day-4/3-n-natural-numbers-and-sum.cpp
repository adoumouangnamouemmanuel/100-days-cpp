#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int n, i, sum = 0; // Declare integer variables 'n', 'i', and 'sum' and initialize 'sum' to 0

    cout << "\n\n Display n terms of natural number and their sum:\n"; // Display a message indicating the purpose
    cout << "---------------------------------------\n"; // Display a separator line
	cout << " Input a number of terms: "; // Prompt the user to input the number of terms
	cin >> n; // Read the user input for the number of terms		
    cout << " The natural numbers up to the " << n << "th term are: \n"; // Display a message indicating the list of natural numbers up to 'n'

    // Loop to print the natural numbers up to 'n' and calculate their sum
    for (i = 1; i <= n; i++) 
    {
        cout << i << " "; // Output each natural number followed by a space
		sum = sum + i; // Calculate the sum by adding the current number 'i' to 'sum'
    }

    cout << "\n The sum of the natural numbers is: " << sum << endl; // Display the sum of the natural numbers
}

