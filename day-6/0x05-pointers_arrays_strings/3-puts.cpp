#include <iostream>

using namespace std;

void _puts(const char *str); // Function prototype

/**
 * main - Tests the _puts function
 *
 * Return: Always 0
 */
int main(void)
{
    const char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str); // Call custom puts function
    return (0);
}

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string to print
 */
void _puts(const char *str){
    while (*str != '\0') {   // Loop through each character
        cout << *str;        // Print character
        str++;               // Move to next character
    }
    cout << endl;            // Print newline at the end
}

