#include <iostream>

using namespace std;

int main(){
	int a, b;
	float add, sub, mul, div;
	
	cout << "Enter the first number: " <<endl;
	cin >> a;
	
	cout << "Enter the second number: "<<endl;
	cin >> b;
	
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = (float)a / b;
	
	cout<< a << " + "<<b<<" = "<< add<<endl;
	cout<< a << " - "<<b<<" = "<< sub<<endl;
	cout<< a << " * "<<b<<" = "<< mul<<endl;
	cout<< a << " / "<<b<<" = "<< div<<endl;
	
	return 0;
}
