#include<iostream>
#include<vector>

using namespace std;

int main(){

    //calling a value inside the container or vector.

    vector<int> v = {23,100,90,7,6};

    cout << v[1] << endl; //calling the array / element

    vector<int>::iterator it = v.begin(); //v.begin() is pointing to the memory not whats inside it.

    cout << *(it);

    return 0;
}