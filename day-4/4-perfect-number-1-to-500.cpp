#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
  cout << "\n\n Find the perfect numbers between 1 and 500:\n"; // Display a message indicating the purpose
  cout << "------------------------------------------------\n"; // Display a separator line

  int i = 1, u = 1, sum = 0; // Declare and initialize integer variables 'i', 'u', and 'sum'

  cout << "\n The perfect numbers between 1 to 500 are: \n"; // Display a message indicating the list of perfect numbers

  while (i <= 500) // Start of the outer while loop to iterate through numbers from 1 to 500
  {
    while (u <= 500) // Start of the inner while loop to check divisors of 'i'
    {
      if (u < i) // Condition to check if 'u' is a proper divisor of 'i'
      {
        if (i % u == 0) // Check if 'u' is a divisor of 'i'
          sum = sum + u; // If 'u' is a divisor of 'i', add 'u' to 'sum'
      }
      u++; // Increment 'u' for checking the next divisor
    }

    if (sum == i) // Check if the sum of divisors 'sum' is equal to 'i'
    {
      cout << i << "  " << "\n"; // If 'sum' is equal to 'i', then 'i' is a perfect number, so print 'i'
    }
    i++; // Move to the next number to check if it's perfect
    u = 1; // Reset 'u' to 1 for the next iteration
    sum = 0; // Reset 'sum' to 0 for the next iteration
  }
}

