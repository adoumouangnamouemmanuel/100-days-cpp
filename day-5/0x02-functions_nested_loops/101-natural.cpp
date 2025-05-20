#include <iostream>

using namespace std;

/**
 * main - computes and prints the sum of all natural numbers
 *        below 1024 that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main() {
    int sum = 0;
    for (int i = 1; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

