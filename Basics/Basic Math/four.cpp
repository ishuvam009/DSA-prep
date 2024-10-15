#include<iostream>
using namespace std;


void oneToN(int n, int i){
	if(n<i) return;
	cout << i << endl;
	oneToN(n,i+1);
}
int main(){

	int n;
	cin >> n;

	oneToN(n,1);

	return 0;
}