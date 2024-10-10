#include<iostream>
using namespace std;

void printFive(int n,int i){
	if(n<i) return;
	cout << "Shuvam" << endl;
	printFive(n,i+1);
}

int main(){
	int n;
	cin >> n;
	printFive(n,1);
	return 0;
}