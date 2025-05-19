#include <iostream>

using namespace std;

// Function to check if the absolute difference between x and either 100 or 200 is less than or equal to 10
bool test(int x)
{
    // If the absolute difference between x and 100 is less than or equal to 10 OR the absolute difference between x and 200 is less than or equal to 10
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10) 
        return true; // Return true if either condition is true
    return false; // Return false if neither condition is true
}

// Main function
int main() 
{
    cout << test(103) << endl;  // Output the result of test function with argument 103
    cout << test(90) << endl;   // Output the result of test function with argument 90
    cout << test(89) << endl;   // Output the result of test function with argument 89
    return 0;    // Return 0 to indicate successful execution of the program
}

