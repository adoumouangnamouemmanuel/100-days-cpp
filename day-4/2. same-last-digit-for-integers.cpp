#include <iostream>
#include <cmath>

using namespace std;

// Function to check if the last digits of two numbers have the same absolute value
bool test(int x, int y)
{
    // Return true if the absolute value of the last digit of both x and y are equal
    return abs(x % 10) == abs(y % 10);
}

// Main function
int main() 
{
    // Output the result of the test function with different input numbers
    cout << test(123, 456) << endl;
    cout << test(12, 512) << endl;
    cout << test(7, 87) << endl;
    cout << test(12, 45) << endl;

    return 0;    // Return 0 to indicate successful execution of the program
}

