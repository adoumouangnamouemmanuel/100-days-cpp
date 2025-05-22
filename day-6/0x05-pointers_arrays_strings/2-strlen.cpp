#include <iostream>

int _strlen(const char *s);

using namespace std;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    const char *str; // safe
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    cout<<len<<endl;
    return (0);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: The character containing the string
 *
 * Return: The length of the character
 */

int _strlen(const char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		b++;
		s++;
	}
	return (b);
}
