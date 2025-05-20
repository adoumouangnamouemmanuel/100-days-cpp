#include <iostream>

using namespace std;

void print_diagonal(int n);  // Function prototype

/**
 * main - Tests the print_diagonal function with various values.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return 0;
}

/**
 * print_diagonal - Prints a diagonal line using '\' n times.
 * Each line is indented one space more than the previous.
 * @n: Number of lines to print.
 *
 * If n is 0 or less, only a newline is printed.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // Print i spaces before the backslash
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "\\" << endl;
        }
    }
}

