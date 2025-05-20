#include <iostream>
using namespace std;

// Function to check if any of the given integers falls within the range 20 to 50 (inclusive)
bool test(int x, int y, int z)
{
    // Check if any of x, y, or z is within the range 20 to 50
    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}

// Main function
int main() 
{
    cout << test(11, 20, 12) << endl;   // Output the result of test function with values 11, 20, and 12
    cout << test(30, 30, 17) << endl;   // Output the result of test function with values 30, 30, and 17
    cout << test(25, 35, 50) << endl;   // Output the result of test function with values 25, 35, and 50
    cout << test(15, 12, 8) << endl;    // Output the result of test function with values 15, 12, and 8
    return 0;    // Return 0 to indicate successful execution of the program
}

