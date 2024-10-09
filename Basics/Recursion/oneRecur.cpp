//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	

	for(int j=1;j<=n;j++){
		int fact = 0;
		for(int i=1;i*i<=n;i++){
		if(j%i==0){
			fact = fact+1;
			}
		}
		if(fact==2){
			cout << j << " Its a natural number." << endl;
			}else{
			cout << j << " Its not a natural number" << endl;
		}
	}

	

	return 0;
}