#include <iostream>
#include <iomanip> // for setw

using namespace std;

void print_times_table(int n);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    cout << endl;
    print_times_table(5);
    cout << endl;
    print_times_table(98); // No output because 98 > 15
    cout << endl;
    print_times_table(12);
    return 0;
}

/**
 * print_times_table - Prints the times table from 0 to n.
 * @n: The size of the times table (must be 0 < n <= 15).
 *
 * Prints an (n+1) x (n+1) multiplication table,
 * with each number right-aligned in a field of width 3,
 * separated by commas.
 * Does nothing if n is outside the valid range.
 */
void print_times_table(int n){
    if(n > 0 && n <= 15){
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++){
                cout << setw(3) << i * j;
                if(j != n){
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
}

