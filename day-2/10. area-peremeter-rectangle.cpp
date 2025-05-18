#include <iostream>

using namespace std;

int main(){
	double L, W, A, P;
	cout<<"Input the length of the rectangle : ";
	cin>>L;
	cout<<"Input the width of the rectangle : ";
	cin>>W;
	A = L*W;
	P = 2 * (L + W);
	cout<<"The area of the rectangle is : "<<A<<endl;
	cout<<"The perimeter of the rectangle is : "<<P<<endl;
}
