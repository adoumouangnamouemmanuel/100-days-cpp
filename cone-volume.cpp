#include <iostream> // Including the input-output stream header file
#include <string> // Including the string header file (although it's not used in this code)

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    const float pi = 3.14159; // Declaring a constant variable 'pi' to store the value of pi

    float R, H, V; // Declaring variables to store the radius, height, and volume of the cone

    cout << "Input Cone's radius: "; // Outputting a message to prompt the user to input the cone's radius
    cin >> R; // Reading the cone's radius input from the user

    cout << "Input Cone's height: "; // Outputting a message to prompt the user to input the cone's height
    cin >> H; // Reading the cone's height input from the user

    // Calculating the volume of the cone using the formula: V = (1/3) * p * R^2 * H
    V = (1.0 / 3.0) * pi * (R * R) * H;

    cout << "The volume of the cone is: " << V; // Outputting the calculated volume of the cone

    return 0; // Return statement indicating successful completion of the program
}

