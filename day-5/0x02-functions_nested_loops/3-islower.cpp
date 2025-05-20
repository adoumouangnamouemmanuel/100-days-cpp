#include <iostream>

using namespace std;

int _islower(int c);  // Function prototype

/**
 * main - Tests the _islower function with different characters.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    cout << r;
    r = _islower('o');
    cout << r;
    r = _islower(108);  // ASCII for 'l'
    cout << r << endl;

    return 0;
}

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check (as an ASCII int).
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

