#include <iostream>

using namespace std;

void print_most_numbers(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}

void print_most_numbers(void){
	for (int i = 0; i <= 9; i++)
    {
    	if(i != 2 && i != 4)
        	cout << i;
    }
    cout << endl;
}
