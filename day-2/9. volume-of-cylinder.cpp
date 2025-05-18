/**
 * Program to calculate the volume of a cylinder.
 * It prompts the user to input the radius and height,
 * then calculates the volume using the formula:
 * Volume = p * r² * h
 * and displays the result.
 */

#include <iostream> // For input and output

using namespace std;

int main(){
    double r, h, V;          // r: radius, h: height, V: volume of the cylinder
    const double PI = 3.14;  // Approximate value of p (pi)

    cout << "Input the radius of the cylinder: ";
    cin >> r;                // Read radius from user

    cout << "Input the height of the cylinder: ";
    cin >> h;                // Read height from user

    V = PI * r * r * h;      // Calculate volume using V = p * r^2 * h

    cout << "The volume of a cylinder is: " << V << endl; // Display result

    return 0; // End of program
}

