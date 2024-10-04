//Reververse a number.

#include<iostream>
using namespace std;

int main(){

	int n;
	int lastNum = 0;
	cin >> n;

	while(n>0){
		int lastDigit = n%10;
		lastNum = (lastNum*10)+lastDigit;
		n = n/10;
	}
	cout << "Reverse number is: " << lastNum << endl;
return 0;
}