#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int num1, ctr = 0; // Declaration of integer variables 'num1' and 'ctr', 'ctr' initialized to 0

    cout << "\n\n Check whether a number is prime or not:\n"; // Display a message indicating the purpose
	cout << "--------------------------------------------\n"; // Display a separator line
	cout << " Input a number to check prime or not: "; // Prompting the user to input a number
	cin >> num1; // Reading the input number entered by the user

    for (int a = 1; a <= num1; a++) // Start of a 'for' loop from 1 to the input number 'num1'
    {
        if (num1 % a == 0) // Check if 'num1' is divisible by 'a' without any remainder
        {
            ctr++; // Increment 'ctr' when 'num1' is divisible by 'a'
        }
    }

    if (ctr == 2) // Check if 'ctr' is equal to 2 (prime numbers have only two factors: 1 and the number itself)
    {
        cout << " The entered number is a prime number. \n"; // Display a message indicating that the number is prime
    }
    else {
        cout << " The number you entered is not a prime number. \n"; // Display a message indicating that the number is not prime
    }
}

