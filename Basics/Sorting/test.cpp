#include<iostream>
using namespace std;

void swaps(int arr[], int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
			i=0;
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	swaps(arr,n);
	for(int i=0;i<n;i++) cout << arr[i] << " ";
	return 0;
}