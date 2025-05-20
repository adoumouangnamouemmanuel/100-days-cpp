#include <iostream>

using namespace std;

int _isupper(int c);

/**
 * main - Demonstrates the use of the _isupper function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    // Print character and whether it is uppercase (1) or not (0)
    cout << c << ": " << _isupper(c) << endl;

    c = 'Z';
    // Print character and whether it is uppercase (1) or not (0)
    cout << c << ": " << _isupper(c) << endl;

    return 0;
}

/**
 * _isupper - Determines if the given character is uppercase.
 * @c: The ASCII code of the character to check.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    // ASCII range for uppercase letters is 65 ('A') to 90 ('Z')
    if (c >= 65 && c <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

