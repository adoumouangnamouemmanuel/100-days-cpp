#include <iostream>

using namespace std;

// Function to check conditions for two integer values
bool test(int x, int y)
{
    // Check if x is less than or equal to 20 or y is greater than or equal to 50,
    // or if y is less than or equal to 20 or x is greater than or equal to 50
    return (x <= 20 || y >= 50) || (y <= 20 || x >= 50);
}

// Main function
int main() 
{
    cout << test(20, 84) << endl;   // Output the result of test function with values 20 and 84
    cout << test(14, 50) << endl;   // Output the result of test function with values 14 and 50
    cout << test(11, 45) << endl;   // Output the result of test function with values 11 and 45
    cout << test(25, 40) << endl;   // Output the result of test function with values 25 and 40
    return 0;    // Return 0 to indicate successful execution of the program
}

