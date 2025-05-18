/**
 * Program to calculate the area and perimeter of a rectangle.
 * It prompts the user to input the length and width,
 * then calculates:
 *   - Area = length × width
 *   - Perimeter = 2 × (length + width)
 * and displays both results.
 */

#include <iostream> // For input and output

using namespace std;

int main(){
    double L, W, A, P; // L: length, W: width, A: area, P: perimeter

    cout << "Input the length of the rectangle: ";
    cin >> L; // Read length from user

    cout << "Input the width of the rectangle: ";
    cin >> W; // Read width from user

    A = L * W;           // Calculate area
    P = 2 * (L + W);     // Calculate perimeter

    cout << "The area of the rectangle is: " << A << endl;
    cout << "The perimeter of the rectangle is: " << P << endl;

    return 0; // End of program
}

