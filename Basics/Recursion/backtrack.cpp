//Print 1 to N usig backtracking.

#include<iostream>
using namespace std;

void btrack(int j,int n){

	if(j>n) return;
	btrack(j+1,n);
	cout << j << endl;
}

int main(){

	int n;
	cin >> n;
	btrack(1,n);
}