#include <iostream>

using namespace std;

int _isupper(int c);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    cout<<c<<": "<<_isupper(c)<<endl;
    c = 'a';
    cout<<c<<": "<<_isupper(c)<<endl;
    return (0);
}
/*
*/

int _isupper(int c){
	if(c >= 65 && c <= 91){
		return 1;
	}
	else{
		return 0;
	}
}
