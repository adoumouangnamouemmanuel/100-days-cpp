#include <iostream>

using namespace std;

void print_numbers(void);  // Function prototype for printing numbers
int mul(int a, int b);     // Function prototype for multiplication (unused here)

/**
 * main - Calls the function to print numbers from 0 to 9.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return 0;
}

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a newline.
 *
 * return: nothing
 */
void print_numbers(void)
{
    for (int i = 0; i <= 9; i++)
    {
        cout << i;
    }
    cout << endl;
}

