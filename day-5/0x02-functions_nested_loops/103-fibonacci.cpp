#include <iostream>

using namespace std;

/**
 * main - Calculates and prints the sum of even-valued Fibonacci numbers
 *        not exceeding 4,000,000.
 *
 * Return: Always 0.
 */
int main() {
    long long int a = 1, b = 2, temp, sum = 0;

    while (a < 4000000) {
        if (a % 2 == 0)
            sum += a;
        temp = a + b;
        a = b;
        b = temp;
    }

    cout << sum << endl;
    return 0;
}

