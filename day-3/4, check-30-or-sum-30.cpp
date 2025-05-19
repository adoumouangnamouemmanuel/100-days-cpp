#include <iostream>
using namespace std;

// Function to check if either x is 30, y is 30, or the sum of x and y is 30
bool test(int x, int y)
{
    return x == 30 || y == 30 || (x + y == 30); // Returns true if x is 30, y is 30, or the sum of x and y is 30; otherwise, returns false
}        

// Main function
int main() 
{
    cout << test(30, 0) << endl;  // Output the result of test function with arguments 30 and 0
    cout << test(25, 5) << endl;  // Output the result of test function with arguments 25 and 5
    cout << test(20, 30) << endl;  // Output the result of test function with arguments 20 and 30
    cout << test(20, 25) << endl;  // Output the result of test function with arguments 20 and 25   
    return 0;    // Return 0 to indicate successful execution of the program
}

