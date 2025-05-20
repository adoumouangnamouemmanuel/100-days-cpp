#include <iostream>

using namespace std;

int _isalpha(int c);  // Function prototype

/**
 * main - Tests the _isalpha function with various characters.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    cout << r;
    r = _isalpha('o');
    cout << r;
    r = _isalpha(108);  // ASCII for 'l'
    cout << r;
    r = _isalpha(';');
    cout << r << endl;

    return 0;
}

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check (as an ASCII int).
 *
 * Return: 1 if alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

