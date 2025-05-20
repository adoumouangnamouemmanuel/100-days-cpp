#include <iostream>

using namespace std;

/**
 * main - prints the first 100 Fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
 
 // long long and malloc are forbidden
int main() {
    unsigned long a_left=0, a_right=1, b_left=0, b_right=2, temp_left, temp_right;
    int n = 100;
    int count = 1;
    unsigned long int mul = 100000000;
    while (n > 0) {
        cout <<count << ": "<< a_left*mul+a_right<< ", ";
        temp_left = (a_left*mul+a_right + b_left*mul+b_right) / mul;
        temp_right =  (a_left*mul+a_right + b_left*mul+b_right) % mul;
        a_left = (b_left*mul+b_right) / mul;
        a_right = (b_left*mul+b_right) % mul;
        
        b_left = temp_left;
        b_right = temp_right;
        
        n--;
        count ++;
    }
    cout << endl;
    return 0;
}

