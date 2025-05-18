/**
 * Program to calculate the volume of a cube.
 * It prompts the user to input the length of a side,
 * then calculates the volume using the formula:
 * Volume = side³
 * and displays the result.
 */

#include <iostream> // For input and output

using namespace std;

int main(){
    double side, volume;  // side: length of the cube's side, volume: volume of the cube

    cout << "Input the side of a cube: ";
    cin >> side;          // Read side length from the user

    volume = side * side * side;  // Calculate volume as side^3

    cout << "The volume of a cube is: " << volume; // Display result

    return 0; // End of program
}

