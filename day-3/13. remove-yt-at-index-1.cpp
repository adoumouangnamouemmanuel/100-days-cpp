#include <iostream>
using namespace std;

// Function to modify a string based on a substring condition
string test(string str)
{
    // Check if the substring starting at index 1 and of length 2 equals "yt"
    // If true, erase the substring from index 1 with length 2 from the original string
    return str.substr(1, 2) == "yt" ? str.erase(1, 2) : str;
}

// Main function
int main() 
{
    cout << test("Python") << endl;   // Output the result of test function with string "Python"
    cout << test("ytade") << endl;    // Output the result of test function with string "ytade"
    cout << test("jsues") << endl;    // Output the result of test function with string "jsues"
    return 0;    // Return 0 to indicate successful execution of the program
}

