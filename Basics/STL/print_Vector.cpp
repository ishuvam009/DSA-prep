#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> t1 = {34,80,30,81};

    vector<string> t2={"GPTo1","DEEPSHARKr1","GEMINI","CLAUDE","OLLAM"};

    //printing the vector using end() function.
    vector<int>::iterator p1 = t1.end();
    p1--;
    cout << *(p1) << endl;

    //using for loop.
    for(vector<int>::iterator it = t1.begin();it!=t1.end();it++){
        cout << *(it) << " ";
    }

    //Insert element insede the vector

    cout << "\n" << "Insert an element" << endl;

    t1.insert(t1.begin(),400); // This will insert 400 at the begning.

    t1.insert(t1.begin()+3,1); //this will insert 1 at 3rd position.

    t1.insert(t1.begin()+6,{10,20,30,100}); // Multiple insertion at once.

    for(auto it = t1.begin();it!=t1.end();it++){
        cout << *(it) << " ";
    }

    //Delete an element.

    return 0;
}