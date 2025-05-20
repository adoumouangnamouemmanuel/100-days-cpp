#include <iostream>

using namespace std;

// Function to evaluate and return the maximum value among given coordinates if they fall within specified ranges
int test(int x, int y)
{
    // Check if both x and y are within the range 20 to 30
    if (x >= 20 && x <= 30 && y >= 20 && y <= 30)
    {
        // If x is greater than or equal to y, return x; otherwise, return y
        if (x >= y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
    // Check if only x is within the range 20 to 30
    else if (x >= 20 && y <= 30)
    {
        return x; // Return x
    }
    // Check if only y is within the range 20 to 30
    else if (y >= 20 && y <= 30)
    {
        return y; // Return y
    }
    else
    {
        return 0; // Return 0 if both x and y are outside the specified ranges
    }
}

// Main function
int main() 
{
    cout << test(78, 95) << endl;   // Output the result of test function with coordinates (78, 95)
    cout << test(20, 30) << endl;   // Output the result of test function with coordinates (20, 30)
    cout << test(21, 25) << endl;   // Output the result of test function with coordinates (21, 25)
    cout << test(28, 28) << endl;   // Output the result of test function with coordinates (28, 28)
    return 0;    // Return 0 to indicate successful execution of the program
}

