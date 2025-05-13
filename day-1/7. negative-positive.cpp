#include <iostream>
using namespace std;

int main(){
	cout<<"Enter a number: "<<endl;
	int n;
	cin>>n;
	if(n > 0){
		cout<<"the number: "<<n<<" is positive!"<<endl;
	}
	else if(n < 0){
		cout<<"The number: "<<n<<" is negative!"<<endl;
	}
	else
		cout<<"The number is 0."<<endl;
}
