#include <iostream> // For input and output
#include <math.h>   // For power function

using namespace std;

/**
 * Calculates compound interest given principal, rate, and time.
 * Formula: A = P(1 + r/100)^t, CI = A - P
 */
int main() {
    double r, p, t, CI, A; // r: rate, p: principal, t: time, A: amount, CI: compound interest

    cout << "Principal: ";
    cin >> p;

    cout << "Rate: ";
    cin >> r;

    cout << "Time: ";
    cin >> t;

    A = p * pow((1 + r / 100), t); // Final amount
    CI = A - p;                    // Compound interest

    cout << "Compound interest is: " << CI << endl;

    return 0;
}

