#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: "<<endl;
	cin >> num;
	if (num % 2 == 0){
		cout<<"The number "<<num<<" is even!"<<endl;
	}
	else{
		cout<<"The number "<<num<<" is odd!"<<endl;
	}
}
