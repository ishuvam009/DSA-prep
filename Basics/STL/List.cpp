#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> ls = {20,90,70,60,30,40};

    ls.push_back(2);
    
    ls.emplace_back(4);

    ls.emplace_front(1);

    list<int>::iterator lt = ls.begin();
    advance(lt,1);
    
    for(auto pp=ls.begin();pp!=ls.end();pp++){
        cout << *pp << " ";
    }

    return 0;
}