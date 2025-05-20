#include <iostream>

using namespace std;

void print_alphabet_x10(void);  // Function prototype

/**
 * main - Calls print_alphabet_x10 to print the alphabet 10 times.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return 0;
}

/**
 * print_alphabet_x10 - Prints the lowercase English alphabet 10 times.
 *
 * Each line contains letters from 'a' to 'z', followed by a newline.
 */
void print_alphabet_x10(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (char c = 'a'; c <= 'z'; ++c)
        {
            cout << c;
        }
        cout << endl;
    }
}

