#include <iostream>
using namespace std;

// Function to create a string concatenating the initial portion of 's' 'n' times
string test(string s, int n)
{
    string result = " "; // Initialize a string 'result' with a space character

    int frontOfString = 3; // Variable to store the length of the initial portion of 's'

    // Ensure 'frontOfString' is within the length of the input string 's'
    if (frontOfString > s.length())
        frontOfString = s.length();

    string front = s.substr(0, frontOfString); // Extract the initial portion of 's'

    // Concatenate the 'front' substring 'n' times to 'result'
    for (int i = 0; i < n; i++)
    {
        result += front; // Append 'front' to 'result'
    }

    return result; // Return the final concatenated string 'result'
}

// Main function
int main() 
{
    // Output the result of the test function with different input strings and numbers
    cout << test("Python", 2) << endl;
    cout << test("Python", 3) << endl;
    cout << test("JS", 3) << endl;

    return 0;    // Return 0 to indicate successful execution of the program
}

