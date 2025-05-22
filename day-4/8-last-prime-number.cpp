#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int num1, ctr = 0; // Declaration of integer variables 'num1' and 'ctr' initialized to 0

    // Display a message to find the last prime number before the entered number
    cout << "\n\n Find the last prime number occurs before the entered number:\n";
    cout << "-----------------------------------------------------------------\n";

    // Prompting the user to input a number to find the last prime number before it
    cout << " Input a number to find the last prime number occurs before the number: ";
    cin >> num1; // Reading the number entered by the user

    // Loop to find the last prime number before the entered number
    for (int n = num1 - 1; n >= 1; n--) // Starting from the number before the entered number
    {
        for (int m = 2; m < n; m++) // Loop to check if 'n' is a prime number
        {
            if (n % m == 0) // If 'n' is divisible by any number other than 1 and itself
                ctr++; // Increment counter
        }

        if (ctr == 0) // If 'ctr' is 0, 'n' is a prime number
        {
            if (n == 1) // If 'n' is 1, there's no prime number less than 2
            {
                cout << "no prime number less than 2";
                break; // Break the loop
            }

            // Display the last prime number before the entered number
            cout << n << " is the last prime number before " << num1 << endl;
            break; // Break the loop
        }

        ctr = 0; // Reset the counter for the next iteration
    }

    return 0; // Indicating successful completion of the program
}

