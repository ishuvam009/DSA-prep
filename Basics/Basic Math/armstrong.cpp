#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	int dupli = n;
	int sum = 0;
	int totalDgt = (int)(log10(n) + 1);

	while(n>0){
		int lstDgt = n%10;
		sum = pow(lstDgt,totalDgt) + sum;
		n = n/10;
	}

	if(dupli == sum){
		cout << "Its an armstring number." << endl;
	}else{
		cout << "Its not an armstring number." << endl;
	}

	return 0;
}