#include <iostream>
#include <cmath>

using namespace std;

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long long num = 612852475143;
    long long factor = 2;

    while (factor * factor <= num)
    {
        if (num % factor == 0)
        {
            num /= factor;
        }
        else
        {
            factor++;
        }
    }

    cout << num << endl;  // `num` now holds the largest prime factor
    return 0;
}

