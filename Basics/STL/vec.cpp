#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1(4);  //This will create 4 instance with random garbage value.
    cout << v1[3] << endl;

    vector<int> v2(5,200); //This will create 4 instance each containing 200.

    cout << v2[4];

    return 0;
}