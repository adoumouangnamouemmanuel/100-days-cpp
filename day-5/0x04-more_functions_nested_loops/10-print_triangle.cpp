#include <iostream>

using namespace std;

void print_triangle(int size);  // Function prototype

/**
 * main - Tests the print_triangle function with different sizes.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return 0;
}

/**
 * print_triangle - Prints a right-aligned triangle of '#' characters.
 * @size: The height of the triangle.
 *
 * If size is 0 or less, prints only a newline.
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        cout << endl;
    }
    else
    {
        for (int i = 1; i <= size; i++)
        {
            // Print leading spaces
            for (int j = 0; j < size - i; j++)
            {
                cout << " ";
            }

            // Print '#' characters
            for (int k = 0; k < i; k++)
            {
                cout << "#";
            }

            cout << endl;
        }
    }
}

