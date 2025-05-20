#include <iostream>

using namespace std;

void print_line(int n);  // Function prototype

/**
 * main - Tests the print_line function with various values.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return 0;
}

/**
 * print_line - Prints a straight line using '_' n times.
 * @n: Number of times the character '_' should be printed.
 *
 * If n is 0 or less, only a newline is printed.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "_";
        }
        cout << endl;
    }
}

