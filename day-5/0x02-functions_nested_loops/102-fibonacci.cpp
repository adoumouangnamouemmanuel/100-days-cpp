#include <iostream>

using namespace std;

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main() {
    long long int a = 1, b = 2, temp;
    int n = 50;
    while (n > 0) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
        n--;
    }
    cout << endl;
    return 0;
}

