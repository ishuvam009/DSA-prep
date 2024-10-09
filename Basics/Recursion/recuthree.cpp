//Print from N to 1.

#include<iostream>
using namespace std;

int count = 0;

void ntoOne(int n){
	if(n==0) return;
	cout << n << endl;
	n--;
	ntoOne(n);
}

int main(){

	int n;
	cin >> n;
	ntoOne(n);

	return 0;
}