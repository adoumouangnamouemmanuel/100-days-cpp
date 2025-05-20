#include <iostream>

using namespace std;

int _isdigit(int c);

/**
 * main - Demonstrates the use of the _isdigit function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    // Print character and whether it is a digit (1) or not (0)
    cout << c << ": " << _isdigit(c) << endl;

    c = 'a';
    // Print character and whether it is a digit (1) or not (0)
    cout << c << ": " << _isdigit(c) << endl;

    return 0;
}

/**
 * _isdigit - Checks if the given character is a digit (0–9).
 * @c: The ASCII code of the character to check.
 *
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
    // ASCII range for digits is 48 ('0') to 57 ('9')
    if (c >= 48 && c <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

