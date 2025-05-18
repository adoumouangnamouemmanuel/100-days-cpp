#include <iostream>

using namespace std;

int main(){
	int n1, n2, temp;
	cout<<"Enter two numbers: "<<endl;
	cin >>n1>>n2;
	cout<<"Before: n1 = "<<n1<<". n2 = "<<n2<<endl;
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<<"After: n1 = "<<n1<<". n2 = "<<n2<<endl;
	
}
