#include <iostream>
using namespace std;

// Function to check if the given number is divisible by 3 or 7
bool test(int n)
{
    return n % 3 == 0 || n % 7 == 0; // Returns true if the number is divisible by 3 or 7; otherwise, returns false
}

// Main function
int main() 
{
    cout << test(3) << endl;    // Output the result of test function with number 3
    cout << test(14) << endl;   // Output the result of test function with number 14
    cout << test(12) << endl;   // Output the result of test function with number 12
    cout << test(37) << endl;   // Output the result of test function with number 37
    return 0;    // Return 0 to indicate successful execution of the program
}

