#include <iostream>

using namespace std;

int print_last_digit(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);    // prints 8
    print_last_digit(0);     // prints 0
    r = print_last_digit(-1024); // prints 4
    cout << r << endl;       // prints 4 on a new line

    return (0);
}

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: the integer number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
    if (n < 0)
        n = -n;

    int last_digit = n % 10;
    cout << last_digit;
    return last_digit;
}

