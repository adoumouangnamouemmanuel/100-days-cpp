#include <iostream> // Include input-output stream library
#include <math.h>

using namespace std;

int main(){
	double r, p, t, CI, A;
	cout<<"Principal: ";
	cin>>p;
	cout<<"Rate: ";
	cin>>r;
	cout<<"Time: ";
	cin>>t;
	A = p * (pow((1+ r/100), t));
	CI = A - p;
	cout<<"Compound interest is: "<<CI<<endl;	
	return 0;
}
