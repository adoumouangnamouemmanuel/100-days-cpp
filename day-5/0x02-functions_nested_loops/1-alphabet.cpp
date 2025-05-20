#include <iostream>

using namespace std;

void print_alphabet(void);  // Function prototype

/**
 * main - Calls print_alphabet to output the lowercase letters.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return 0;
}

/**
 * print_alphabet - Prints the lowercase English alphabet.
 *
 * Iterates from 'a' to 'z' and writes each character, then a newline.
 */
void print_alphabet(void)
{
    // Loop through ASCII codes for 'a' (97) to 'z' (122) via character literals
    for (char c = 'a'; c <= 'z'; ++c)
    {
        cout << c;
    }
    cout << endl;  // End with a newline
}

