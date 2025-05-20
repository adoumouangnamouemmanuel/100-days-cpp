#include <iostream>

using namespace std;

void print_square(int size);  // Function prototype

/**
 * main - Tests the print_square function with different sizes.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return 0;
}

/**
 * print_square - Prints a square of '#' characters.
 * @size: The length of each side of the square.
 *
 * If size is 0 or less, prints only a newline.
 */
void print_square(int size)
{
    if (size <= 0)
    {
        cout << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            // Print one row of '#' characters
            for (int j = 0; j < size; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
}

