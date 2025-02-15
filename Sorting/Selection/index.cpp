#include<iostream>
using namespace std;

int main(){

    //selection sort

    int arr[7] = {23,9,99,70,8,1,90};

    // for(int i=0;i<=4;i++) cout << arr[i] << " ";

    int ptr = arr[0];

    for(int i=1;i<7;i++){
        if(arr[i]<ptr){
            ptr = arr[i];
        }
    }
    cout << ptr;

    return 0;
}