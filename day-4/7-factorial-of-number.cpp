#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int num1, factorial = 1; // Declaration of integer variables 'num1' and 'factorial' initialized to 1

    cout << "\n\n Find the factorial of a number:\n"; // Display a message indicating the purpose
	cout << "------------------------------------\n"; // Display a separator line
	cout << " Input a number to find the factorial: "; // Prompting the user to input a number
	cin >> num1; // Reading the number entered by the user

    for (int a = 1; a <= num1; a++) // Loop to calculate the factorial
    {
        factorial = factorial * a; // Calculating factorial by multiplying 'factorial' with 'a'
    }

	cout << " The factorial of the given number is: " << factorial << endl; // Displaying the factorial of the entered number
    return 0; // Indicating successful completion of the program
}

