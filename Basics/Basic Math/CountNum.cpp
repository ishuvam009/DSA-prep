//Counting the numbers.

#include<iostream>
using namespace std;

int main(){

	int n;
	int count = 0;
	cin >> n;

	while(n>0){
		n = n/10;
		count++;
	}

	cout << "Count is: " << count << endl;

	return 0;
}