/**
 * Program to compute the sum of two integers.
 * If the numbers are different, it returns their sum.
 * If the numbers are equal, it returns triple the sum.
 */

#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    // Prompt user for two numbers
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    // Check if the numbers are different
    if (n1 != n2) {
        // Print the simple sum
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    } else {
        // Print triple the sum if the numbers are equal
        cout << "(" << n1 << " + " << n2 << ")" << " * 3 = " << (n1 + n2) * 3 << endl;
    }

    return 0;
}

