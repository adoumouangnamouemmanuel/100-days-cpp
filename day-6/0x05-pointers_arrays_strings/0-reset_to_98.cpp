#include <iostream>

using namespace std;

void reset_to_98(int *n); // Function prototype

/**
 * main - Demonstrates pointer usage by resetting an integer to 98
 *
 * Return: Always 0
 */
int main(void)
{
    int n;

    n = 402;
    cout << "n = " << n << endl; // Print original value
    reset_to_98(&n);             // Reset n to 98 via pointer
    cout << "n = " << n << endl; // Print updated value

    return (0);
}

/**
 * reset_to_98 - Sets the value pointed to by n to 98
 * @n: pointer to an integer
 */
void reset_to_98(int *n){
    *n = 98; // Set the value at address n to 98
}

