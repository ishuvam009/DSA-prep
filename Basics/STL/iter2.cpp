#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1 = {33,45,90,100,40,60,20};

    vector<int>::iterator t1 = v1.begin();
    cout << *(t1) << " ";
    t1++;

    return 0;
}