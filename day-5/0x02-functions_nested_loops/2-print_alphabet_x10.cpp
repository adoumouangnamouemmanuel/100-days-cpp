#include <iostream>

using namespace std;

void print_alphabet_x10(void);  // Function prototype

/**
 * main - Calls print_alphabet to output the lowercase letters.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return 0;
}

/**
 * print_alphabet - Prints the lowercase English alphabet.
 *
 * Iterates from 'a' to 'z' and writes each character, then a newline.
 */
void print_alphabet_x10(void)
{
    for(int i = 1; i <= 10; i++){
	
    for (char c = 'a'; c <= 'z'; ++c)
    {
        cout << c;
    }
    cout << endl;  // End with a newline
}
}

