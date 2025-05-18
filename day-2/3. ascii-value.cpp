/**
 * Program to read a character from the user and display its ASCII value.
 * It uses typecasting to convert the character to its corresponding ASCII code.
 */

#include <iostream> // Include input-output stream library

using namespace std;

int main() {
    char c; // Variable to store the input character

    cout << "Enter a character: "; // Prompt user for input
    cin >> c; // Read the character from user input

    // Output the ASCII value of the entered character using typecasting
    cout << "ASCII Value of " << c << " is " << int(c) << endl;

    return 0; // Indicate successful program termination
}

