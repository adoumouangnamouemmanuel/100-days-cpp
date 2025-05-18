/**
 * Program to display the size (in bytes) of various fundamental data types in C++.
 * It outputs the size of int, char, double, and float.
 */

#include <iostream> // Include input-output stream library

using namespace std;

int main() {
    // Print the size of an int type
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;

    // Print the size of a char type
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    // Print the size of a double type
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    // Print the size of a float type
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    
    return 0;
}

