#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> t1 = {34,80,30,81,100,982,34,70,11};

    vector<string> t2={"GPTo1","DEEPSHARKr1","GEMINI","CLAUDE","OLLAM"};

    //printing the vector using end() function.
    vector<int>::iterator p1 = t1.end();
    p1--;
    cout << *(p1);

    //using for loop.
    for(vector<int>::iterator it = t1.begin();it!=t1.end();it++){
        cout << *(it) << " ";
    }

    return 0;
}