/**
 * @file basic_calculator.cpp
 * @brief A simple console-based calculator program.
 *
 * This program prompts the user to input two integers and performs
 * basic arithmetic operations: addition, subtraction, multiplication,
 * and division. The results are printed to the console.
 *
 * Limitations:
 * - No error handling for division by zero.
 *
 * Author: Emmanuel Adoum
 * Date: May 16, 2025
 */

#include <iostream>  // Include input/output library

using namespace std;

int main() {
    int a, b;                // Declare integer variables for user input
    float add, sub, mul, div; // Declare float variables to store results

    // Prompt and read the first number
    cout << "Enter the first number: " << endl;
    cin >> a;

    // Prompt and read the second number
    cout << "Enter the second number: " << endl;
    cin >> b;

    // Perform basic arithmetic operations
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b; // Type cast to float for accurate division

    // Display the results
    cout << a << " + " << b << " = " << add << endl;
    cout << a << " - " << b << " = " << sub << endl;
    cout << a << " * " << b << " = " << mul << endl;
    cout << a << " / " << b << " = " << div << endl;

    return 0; // End of program
}

