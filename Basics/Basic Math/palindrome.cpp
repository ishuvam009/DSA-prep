//Check a number is palindrome or not.


#include<iostream>
using namespace std;

int main(){
	
	int n;
	int lastNum = 0;
	cin >> n;
	int dupli = n;

	while(n>0){
		int lastDigit = n%10;
		lastNum = (lastNum * 10) + lastDigit;
		n = n/10;
	}

	if(lastNum == dupli){
		cout << "Its a palindrome." << endl;
	}else{
		cout << "Its not a palindrome." << endl;
	}

	return 0;
}