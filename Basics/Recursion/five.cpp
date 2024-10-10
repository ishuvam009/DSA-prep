//Print from N to 1.

#include<iostream>
using namespace std;

void nToOne(int n, int i){
	if(n<i) return;
	cout << n << endl;
	nToOne(n-1,i);
}

int main(){
	int n;
	cin >> n;
	nToOne(n,1);

	return 0;
}