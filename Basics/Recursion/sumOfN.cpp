#include<iostream>
using namespace std;

void sunOfN(int n, int &j){ 
	if(n<1) return;
	int i=n%10;
	j=j+i;
	sunOfN(n/10,j);
}

int main(){
	int n;
	int j = 0;
	cin >> n;
	sunOfN(n,j);
	cout << j;

	return 0;
}