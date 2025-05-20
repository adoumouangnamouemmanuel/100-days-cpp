#include <iostream>

using namespace std;

int add(int, int);  // Prototype without docstring

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    cout << n << endl;
    return 0;
}

/**
 * add - adds two integers
 * @n1: first integer
 * @n2: second integer
 *
 * Return: sum of n1 and n2
 */
int add(int n1, int n2){
    return (n1 + n2);
}

