#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    // Create a deque and initialize with some values
    deque<int> d1 = {1, 2, 3, 4, 5};

    // Display the elements of the deque
    cout << "Initial deque: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Push elements to the front and back
    d1.push_front(0);   // Adds 0 to the front
    d1.push_back(6);    // Adds 6 to the back

    cout << "Deque after push_front and push_back: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Accessing elements using front and back
    cout << "Front element: " << d1.front() << endl;
    cout << "Back element: " << d1.back() << endl;

    // Remove elements from the front and back
    d1.pop_front();   // Removes the first element
    d1.pop_back();    // Removes the last element

    cout << "Deque after pop_front and pop_back: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Accessing elements by index using operator[] and at()
    cout << "Element at index 2 (using operator[]): " << d1[2] << endl;
    cout << "Element at index 2 (using at()): " << d1.at(2) << endl;

    // Modifying the deque using insert
    d1.insert(d1.begin() + 2, 10);  // Insert 10 at index 2

    cout << "Deque after inserting 10 at index 2: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Erasing elements from the deque
    d1.erase(d1.begin() + 1);  // Removes element at index 1

    cout << "Deque after erasing element at index 1: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Resizing the deque
    d1.resize(5);  // Resize to 5 elements
    cout << "Deque after resizing to 5 elements: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Using emplace to add an element at the front
    d1.emplace_front(7);  // Adds 7 to the front without copy/move

    cout << "Deque after emplace_front: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    // Using reverse iterator
    cout << "Deque in reverse order: ";
    for (auto it = d1.rbegin(); it != d1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Checking if deque is empty
    if (d1.empty()) {
        cout << "Deque is empty!" << endl;
    } else {
        cout << "Deque is not empty!" << endl;
    }

    // Swapping two deques
    deque<int> d2 = {100, 200, 300};
    d1.swap(d2);  // Swap d1 and d2

    cout << "Deque d1 after swapping with d2: ";
    for (const int& num : d1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Deque d2 after swapping with d1: ";
    for (const int& num : d2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}