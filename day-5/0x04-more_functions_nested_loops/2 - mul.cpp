#include <iostream>

using namespace std;

int mul(int a, int b);  // Function prototype for multiplication

/**
 * main - Demonstrates the use of the mul function.
 *
 * Return: Always 0.
 */
int main(void)
{
    // Print result of multiplying 98 by 1024
    cout << mul(98, 1024) << endl;

    // Print result of multiplying -402 by 4096
    cout << mul(-402, 4096) << endl;

    return 0;
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Product of a and b.
 */
int mul(int a, int b)
{
    return a * b;
}

