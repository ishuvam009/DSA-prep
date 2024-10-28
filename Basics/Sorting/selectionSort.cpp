//Selection Sort.
#include<iostream>
using namespace std;

void sesort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		int minIndex = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if(arr[i]!=arr[minIndex]){
			swap(arr[i],arr[minIndex]);
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	sesort(arr,n);
	for(int i=0;i<n;i++) cout << arr[i] << " ";
	return 0;
}