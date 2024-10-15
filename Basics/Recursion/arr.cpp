#include<iostream>
using namespace std;

int arr(int n){
	if(n==0){
		return 1;
	}else			
	return n * arr(n-1);
}

int main(){
	int n;
	cin >> n;

	if(n<0){
		cout << "Negative number is not allowed.";
	}else

	cout << arr(n);
	return 0;
}