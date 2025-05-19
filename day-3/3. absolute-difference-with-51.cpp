/**
 * Program to compare a user-entered number with 51.
 * If the number is greater than 51, it outputs triple the difference (n - 51).
 * Otherwise, it outputs the absolute difference (51 - n).
 */

#include <iostream>

using namespace std;

int main() {
    int num = 51;  // Reference number to compare against
    int n;

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // If input is greater than 51, print triple the difference
    if (n > num) {
        cout << "(" << n << " - " << num << ") * 3 = " << (n - num) * 3 << endl;
    } 
    else {
        // Otherwise, print the absolute difference
        cout << num << " - " << n << " = " << num - n << endl;
    }

    return 0;
}

