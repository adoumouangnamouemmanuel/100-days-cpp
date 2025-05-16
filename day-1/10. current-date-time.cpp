/**
 * Program: Display Current Date and Time
 * Description: This program retrieves the current system time and
 *              prints it in a human-readable format using ctime().
 * Language: C++
 * Return: 0 on successful execution
 * Author: Emmanuel Adoum
 */

#include <iostream>  // For console output
#include <ctime>     // For time functions

using namespace std;

int main() {
    time_t timestamp;          // Variable to hold current time
    cout<<timestamp<<endl;
    time(&timestamp);          // Get current system time and store in timestamp

    cout << ctime(&timestamp)<<endl; // Convert time to readable string and print
    cout << timestamp <<endl;

    return 0;          // Exit program
}

