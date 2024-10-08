#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cout << i << "I" << endl;
			int dev = n/i;
			
			if(dev != i){
				cout << dev << "DEV" << endl;
			}
		}
	}
	return 0;
}