#include<iostream>
using namespace std;

void arrFunn(int n, int i, int arr[]){
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	arrFunn(n,i+1,arr);
}

int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	arrFunn(n,0,arr);
	for(int i=0;i<n;i++) cout << arr[i] << " ";

	return 0;
}