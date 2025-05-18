/**
 * Program to calculate the volume of a sphere.
 * It prompts the user to input the radius,
 * then calculates the volume using the formula:
 * V = (4/3) * p * r^3
 * and displays the result.
 */

#include <iostream> // For input and output

using namespace std;

int main(){
    double r, V;                 // r: radius of the sphere, V: volume
    const double PI = 3.14;      // Approximate value of p (pi)

    cout << "Input the radius of a sphere: ";
    cin >> r;                    // Read radius from the user

    V = 4 * r * r * r * PI / 3;  // Calculate volume using V = 4/3 * p * r^3
    cout << "The volume of a sphere is: " << V << endl; // Display result

    return 0;                    // End of program
}

