//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int fact = 0;

	for(int i=1;i<=n;i++){
		
		if(n%i==0){
			fact = fact+1;
		}
	}

	if(fact==2){
		cout << "Its a natural number.";
	}else{
		cout << "Its not a natural number";
	}

	return 0;
}