#include <iostream>

using namespace std;

void print_most_numbers(void);  // Function prototype

/**
 * main - Calls the function to print numbers except 2 and 4.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return 0;
}

/**
 * print_most_numbers - Prints numbers from 0 to 9,
 * excluding 2 and 4, followed by a newline.
 *
 * return: nothing
 */
void print_most_numbers(void)
{
    for (int i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)  // Skip 2 and 4
            cout << i;
    }
    cout << endl;
}

