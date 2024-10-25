#include<iostream>
using namespace std;

void bubsort(int arr[], int n){
	int itter = n-1;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<itter;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}

		itter--;
	}
	cout << itter << endl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	bubsort(arr,n);
	for(int i=0;i<n;i++) cout << arr[i] << " "; 
	return 0;
}