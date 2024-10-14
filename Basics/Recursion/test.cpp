// 1 to N Factorial.

#include<iostream>
using namespace std;

int factt(int n){
	if(n==0){
		return 1;
	}else{
		return n*factt(n-1);
	}
}

int main(){

	int n;
	cin >> n;
	cout << factt(n);

	return 0;
}