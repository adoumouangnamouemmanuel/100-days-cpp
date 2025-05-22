#include <iostream>

using namespace std;

void swap_int(int *a, int *b);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    cout<<"a="<<a<<", b="<<b<<endl;
    swap_int(&a, &b);
    cout<<"a="<<a<<", b="<<b<<endl;
    return (0);
}

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: the variable pointing to the integer
 *
 * @b: the variable pointing to the integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
