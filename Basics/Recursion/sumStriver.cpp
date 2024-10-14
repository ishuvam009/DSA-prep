//Sum 1 to N usign parameterized.

#include<iostream>
using namespace std;

void funn(int n, int sum){
	if(n<1){
		cout << sum;
		return ;
	} else{
		funn(n-1,sum+n);
	}
}

int main(){

	int n;
	cin >> n;
	funn(n,0);
	return 0;
}