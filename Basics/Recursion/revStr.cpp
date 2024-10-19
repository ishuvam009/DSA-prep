#include<iostream>
using namespace std;

bool func(int n,int i, string arr[]){
	if(i>=n/2) return true;
	if(arr[i] != arr[n-i-1]) return false;
	return func(n,i+1,arr);
}

int main(){
	int n;
	cin >> n;
	string arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	cout << func(n,0,arr);
	return 0;
}