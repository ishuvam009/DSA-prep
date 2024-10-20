#include<iostream>
using namespace std;

int sorrt(int n,int m, int arr){
	
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	sorrt(n,0,arr);
	for(int i=0;i<n;i++) cout << arr[i] << " ";
	return 0;
}