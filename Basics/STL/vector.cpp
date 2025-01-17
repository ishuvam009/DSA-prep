#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> marco;

    marco.push_back(90);
    marco.push_back(23);
    marco.push_back(67);
    marco.push_back(80);
    marco.push_back(40);
    marco.push_back(10);

    for(int i=0;i<marco.size();i++){
        cout << marco[i] << ",";
    }

    return 0;
}