//Sum from 1 to N (Function).

#include<iostream>
using namespace std;

int funnc(int n){
	if(n==0){
		return n;
	}else{
		return n+funnc(n-1);
	}
}

int main(){

	int n;
	cin >> n;
	cout << funnc(n);
	return 0;
}