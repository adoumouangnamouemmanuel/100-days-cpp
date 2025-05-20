#include <iostream>
#include <iomanip> // for setw and setfill

using namespace std;

void jack_bauer(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return 0;
}

void jack_bauer(void)
{
    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            cout << setw(2) << setfill('0') << h << ":"
                 << setw(2) << setfill('0') << m << endl;
        }
    }
}

