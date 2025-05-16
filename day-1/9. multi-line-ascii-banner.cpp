/**
 * Program: ASCII Welcome Banner
 * Description: This program prints a multi-line ASCII art "Welcome" banner to the console
 * using standard output (`cout`). It demonstrates basic output formatting with line breaks.
 * Language: C++
 * Author: Emmanuel Adoum
 */

#include <iostream>  // For console input/output
using namespace std;

int main() {
    // Print each line of the ASCII banner
    cout << " _   _      _ _        __        __         _     _ " << endl;
    cout << "| | | | ___| | | ___   \\ \\      / /__  _ __| | __| |" << endl;
    cout << "| |_| |/ _ \\ | |/ _ \\   \\ \\ /\\ / / _ \\| '__| |/ _` |" << endl;
    cout << "|  _  |  __/ | | (_) |   \\ V  V / (_) | |  | | (_| |" << endl;
    cout << "|_| |_|\\___|_|_|\\___( )   \\_/\\_/ \\___/|_|  |_|\\__,_|" << endl;
    cout << "                    |/                               " << endl;

    return 0;  // Exit the program
}

