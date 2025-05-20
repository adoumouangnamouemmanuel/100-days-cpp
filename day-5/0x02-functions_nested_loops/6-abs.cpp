#include <iostream>

using namespace std;

int _abs(int n);  // Function prototype

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    cout << r << endl;
    r = _abs(0);
    cout << r << endl;
    r = _abs(1);
    cout << r << endl;
    r = _abs(-98);
    cout << r << endl;

    return 0;
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
    if (n < 0)
        n = -n;
    return n;
}

