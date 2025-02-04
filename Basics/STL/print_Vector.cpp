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

    cout << "\n" << "Insert an element ie 400" << endl;

    t1.insert(t1.begin(),400); // This will insert 400 at the begning.

    t1.insert(t1.begin()+3,1); //this will insert 1 at 3rd position.

    t1.insert(t1.begin()+6,{10,20,30,100}); // Multiple insertion at once.

    for(auto it = t1.begin();it!=t1.end();it++){
        cout << *(it) << " ";
    }

    //Delete an element.

    cout << "\n" << "Delete an element ie. 400" << endl;
    t1.erase(t1.begin());  // the first element will be deleted.
    for(auto it = t1.begin();it != t1.end();it++){
        cout << *(it) << " " ;
    }

    //other functions in vector

    //size

    vector<int> new_1 = {20,80,70,60};
    cout<< "\n" << "-----------------------------------" << endl;
    cout << "Other functions in vector." << endl;
    cout << "Size of vector new_1 is: "<< new_1.size() << endl; //.size will tell the size

    //pop_back() -> delete a element from back.
    new_1.pop_back();  // delete the last element.

    for(auto it = new_1.begin();it!= new_1.end();it++){
        cout << *(it) << " ";
    }

    //swap two vwctors.

    vector<int> v1 = {10,20,30};
    vector<int> v2 = {100,200,300};
    
    v1.swap(v2); //swap()
    cout << "\n";
    cout << "v1-> ";
    for(auto it = v1.begin();it != v1.end();it++){
        cout << *(it) << " ";
    }
    cout << "\n" << "v2-> ";
    for(auto it = v2.begin();it != v2.end();it++){
        cout << *(it) << " ";
    }

    //delete an entire vector.
    vector<int> del = {900,980,600,100};
    del.clear();
    cout << "\n" << del.size();  //to check all the items are deleted or not.

    //to check wheather a vector is empty or not.
    vector<int> u1 = {};
    cout << "\n" << u1.empty();  //0 menas no and 1 means yes . Boolean value. (..)

    return 0;
}