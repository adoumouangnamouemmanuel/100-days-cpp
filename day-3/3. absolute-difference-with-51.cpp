#include <iostream>

using namespace std;

int main(){
	int num = 51;
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	if(n > num){
		cout<<"("<<n<<" - "<<num<<")"<<" * 3"<<" = "<<(n - num)*3<<endl;
	}
	else{
		 cout << num << " - " << n << " = " << num - n << endl;
	}
	return 0;
}
