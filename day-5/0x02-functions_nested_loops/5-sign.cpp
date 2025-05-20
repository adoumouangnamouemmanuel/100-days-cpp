#include <iostream>

using namespace std;

int print_sign(int n);  // Function prototype

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    cout << ", " << r << endl;

    r = print_sign(0);
    cout << ", " << r << endl;

    r = print_sign(0xff);
    cout << ", " << r << endl;

    r = print_sign(-1);
    cout << ", " << r << endl;

    return 0;
}

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */
int print_sign(int n)
{
    if (n > 0) {
        cout << "+";
        return 1;
    } else if (n == 0) {
        cout << "0";
        return 0;
    } else {
        cout << "-";
        return -1;
    }
}

