#include <iostream>

using namespace std;

// Function to count the occurrences of the character 'z' in the given string
bool test(string str)
{
    int ctr = 0; // Counter variable to count occurrences of 'z'

    // Loop through each character in the string
    for (int i = 0; i < str.length(); i++)
    {
        // Check if the current character is 'z'
        if (str[i] == 'z')
        {
            ctr++; // Increment the counter if 'z' is found
        }
    }

    // Return true if the count of 'z' is more than 1 and less than 4, otherwise return false
    return ctr > 1 && ctr < 4;
}

// Main function
int main() 
{
    // Output the result of the test function with different input strings
    cout << test("frizz") << endl;   // Output: 1 (true)
    cout << test("zane") << endl;    // Output: 0 (false)
    cout << test("Zazz") << endl;    // Output: 0 (false)
    cout << test("false") << endl;   // Output: 0 (false)

    return 0;    // Return 0 to indicate successful execution of the program
}

