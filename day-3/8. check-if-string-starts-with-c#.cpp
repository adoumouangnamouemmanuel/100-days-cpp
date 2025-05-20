#include <iostream>

using namespace std;

// Function to check conditions based on the input string
bool test(string str)
{
    // Check if the string satisfies one of the specified conditions
    return (str.length() < 3 && str == "C#") || (str.substr(0, 2) == "C#" && str[2] == ' ');
}

// Main function
int main() 
{
    cout << test("C# Sharp") << endl;  // Output the result of test function with string "C# Sharp"
    cout << test("C#") << endl;        // Output the result of test function with string "C#"
    cout << test("C++") << endl;      // Output the result of test function with string "C++"
    return 0;    // Return 0 to indicate successful execution of the program
}

