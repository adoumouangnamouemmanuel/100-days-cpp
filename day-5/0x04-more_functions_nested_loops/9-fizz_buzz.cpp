#include <iostream>

using namespace std;

void fizzBuzz(void);  // Function prototype

/**
 * main - Runs the fizzBuzz function.
 *
 * Return: Always 0.
 */
int main(void)
{
    fizzBuzz();
    return 0;
}

/**
 * fizzBuzz - Prints numbers from 1 to 100.
 * For multiples of 3, prints "Fizz".
 * For multiples of 5, prints "Buzz".
 * For multiples of both 3 and 5, prints "FizzBuzz".
 * Numbers and words are separated by a space,
 * but the last output is not followed by a space.
 */
void fizzBuzz(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz";
        else if (i % 3 == 0)
            cout << "Fizz";
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;

        // Print space after all except the last output
        if (i != 100)
            cout << " ";
    }
    cout << endl;
}

