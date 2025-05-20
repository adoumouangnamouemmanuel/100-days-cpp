#include <iostream>
using namespace std;

// Function to check temperature conditions
bool test(int temp1, int temp2)
{
    // Check if the given temperature values satisfy specific conditions
    return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}

// Main function
int main() 
{
    cout << test(120, -1) << endl;   // Output the result of test function with temperatures 120 and -1
    cout << test(-1, 120) << endl;   // Output the result of test function with temperatures -1 and 120
    cout << test(2, 120) << endl;    // Output the result of test function with temperatures 2 and 120
    return 0;    // Return 0 to indicate successful execution of the program
}

