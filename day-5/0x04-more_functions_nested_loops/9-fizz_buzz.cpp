#include <iostream>

using namespace std;

void fizzBuzz(void);

void print_square(int size);  // Function prototype

/**
 * main - Tests the print_square function with different sizes.
 *
 * Return: Always 0.
 */
int main(void)
{
   fizzBuzz();
    return 0;
}

// last character shoud not have a space after it


void fizzBuzz(void){
	int i;
	for(i = 1; i <= 100; i++){
		if( i % 3 == 0 && i % 5 == 0){
			cout<<"FizzBuzz ";
		}
		else if( i % 3 == 0){
			cout<<"Fizz ";
		}
		else if(i % 5 == 0){
			cout<<"Buzz ";
		}
		else{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
