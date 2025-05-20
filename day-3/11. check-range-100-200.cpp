#include <iostream>
using namespace std;

// Function to check if either of the two integers falls within the range 100 to 200 (inclusive)
bool test(int x, int y)
{
    // Check if either x or y is within the range 100 to 200
    return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
}

// Main function
int main() 
{
    cout << test(100, 199) << endl;  // Output the result of test function with values 100 and 199
    cout << test(250, 300) << endl;  // Output the result of test function with values 250 and 300
    cout << test(105, 190) << endl;  // Output the result of test function with values 105 and 190
    return 0;    // Return 0 to indicate successful execution of the program
}

