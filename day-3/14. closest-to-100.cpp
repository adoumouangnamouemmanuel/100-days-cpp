#include <iostream>
#include <cmath>
using namespace std;

// Function to determine the number closer to 100 among two integers
int test(int x, int y)
{
    const int n = 100; // Constant integer n is set to 100

    // Calculate the absolute difference between x and n, and between y and n
    int val = abs(x - n);
    int val2 = abs(y - n);

    // Check if the absolute differences are equal or not
    // If equal, return 0; otherwise, return the number closest to 100
    return val == val2 ? 0 : (val < val2 ? x : y);
}

// Main function
int main() 
{
    cout << test(78, 95) << endl;   // Output the result of test function with values 78 and 95
    cout << test(95, 95) << endl;   // Output the result of test function with values 95 and 95
    cout << test(99, 70) << endl;   // Output the result of test function with values 99 and 70
    return 0;    // Return 0 to indicate successful execution of the program
}

