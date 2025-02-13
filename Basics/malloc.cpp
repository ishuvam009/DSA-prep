#include<iostream>
using namespace std;

int main(){

    cout << "Memory allocated." << endl;
    int *arr = new int[5]; // dynamically allocate memory for an array of 5 integers

    // Use the memory
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    // Print values
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr; // free the allocated array
    cout << "\n" << "Memory deleted.";

    return 0;
}