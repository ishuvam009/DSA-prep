//Print from 1 to N.

#include<iostream>
using namespace std;

int count = 1;

void oneToN(int n){
	if(count>n) return;
	cout << count << endl;
	count ++;
	oneToN(n);
}

int main(){
	int n;
    cin >> n;
	oneToN(n);

	return 0;
}