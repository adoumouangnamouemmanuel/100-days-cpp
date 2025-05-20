#include <iostream>
using namespace std;

// Function to concatenate a given string 's' 'n' times
string test(string s, int n)
{
    string result = ""; // Initialize an empty string to store the result

    // Loop 'n' times to concatenate the string 's' to the 'result' string
    for (int i = 0; i < n; i++)
    {
        result += s; // Concatenate the string 's' to 'result'
    }

    return result; // Return the final concatenated string 'result'
}

// Main function
int main() 
{
    // Output the result of the test function with different input strings and numbers
    cout << test("JS", 2) << endl;  // Output: "JSJS"
    cout << test("JS", 3) << endl;  // Output: "JSJSJS"
    cout << test("JS", 1) << endl;  // Output: "JS"

    return 0;    // Return 0 to indicate successful execution of the program
}

