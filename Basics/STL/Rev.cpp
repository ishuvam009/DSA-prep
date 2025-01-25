#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> t1 = {20,40,90,80,50};
    vector<int>::reverse_iterator it2 = t1.rend(); //point to the address after the end.
    it2--;
    cout << *(it2) << endl;

    vector<int>::reverse_iterator it3 = t1.rbegin();
    cout << *(it3);

    return 0;
}