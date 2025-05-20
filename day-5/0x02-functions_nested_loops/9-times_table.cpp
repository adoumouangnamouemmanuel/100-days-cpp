#include <iostream>
#include <iomanip> // for setw and setfill

using namespace std;

void times_table(void);  // Prototype without docstring

/**
 * main - entry point of the program
 *
 * Calls times_table() to print the multiplication table.
 * Returns 0 on success.
 */
int main(void)
{
    times_table();
    return 0;
}

/**
 * times_table - Prints the 10x10 multiplication table.
 *
 * Prints the multiplication table from 0 to 9.
 * Each number is formatted with setw(2) for alignment.
 */
void times_table(void){
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            cout << setw(2) << i * j;
            if(j != 9){
                cout << ", ";
            }
        }
        cout << endl;
    }
}

