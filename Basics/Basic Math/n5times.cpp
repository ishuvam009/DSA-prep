#include<iostream>
using namespace std;

/* Recursion,
Base Case,
Stack Overflow,
Recursion Tree */

int count = 0;

void printt(){

	if(count == 6){
	return;
	}else{
	cout << "Shuavmm" << endl;
	count ++;
	printt();
 }
}

int main(){

	printt();

	return 0;	
}