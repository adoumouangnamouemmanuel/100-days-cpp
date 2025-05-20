#include <iostream>

using namespace std;

void print_to_98(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return 0;
}

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *                separated by commas and spaces.
 * @n: Starting number.
 *
 * If n is less than or equal to 98, counts up to 98.
 * If n is greater than 98, counts down to 98.
 * Ends with a newline.
 */
void print_to_98(int n){
    if (n <= 98) {
        for (; n <= 98; n++) {
            cout << n;
            if (n != 98) {
                cout << ", ";
            }
        }
    } else {
        for (; n >= 98; n--) {
            cout << n;
            if (n != 98) {
                cout << ", ";
            }
        }
    }
    cout << endl;
}

