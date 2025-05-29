#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int x;
	srand(time(0));
	for(x=1; x<25; x++){
		cout<<1+rand()%6<<endl;
	}
	
//	system("pause>0");
	
	return 0;
}
