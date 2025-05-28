#include <iostream>

using namespace std;

void printNumber(int *num){
	cout<<*num<<endl;
}

void printLetter(char *num){
	cout<<*num<<endl;
}

int getMin(int num[], int size){
	int min = num[0];
	int i;
	for(i=0; i<size; i++){
		if(num[i] < min)
			min = num[i];
	}
	
	return min;
}

int getMax(int num[], int size){
	int max = num[0];
	int i;
	for(i=0; i<size; i++){
		if(num[i] > max)
			max = num[i];
	}
	
	return max;
}

int main()
{
	int nums[5] = {5, 4, -3, 29, 6};
	int min = getMin(nums, 5);
	int max = getMax(nums, 5);
	cout<<min<<endl;
	cout<<max<<endl;
//	system("pause>0");
	
	return 0;
}
