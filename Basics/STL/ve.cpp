#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1 = {23,56,78,90,20,70,123,877};

    //assigning / cpying the container v1 to another vector.

    vector<int> v2(v1);
    cout << v2[6];

    return 0;
}