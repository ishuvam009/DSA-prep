#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << "1st N: " << n << endl;
	int b = n++;
	cout << "2nd N: " << n << endl;
	cout << "B: " << b << endl;
	// cout << "2nd B: " << b << endl;
	return 0;
}