#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int j = n%10;
	cout << j;
	n=n/10;
	cout << n;
	return 0;
}