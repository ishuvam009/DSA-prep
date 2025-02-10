#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // Adding elements to the queue using push()
    q.push(10);
    q.push(20);
    q.push(30);

    // Check and display the front and back elements
    cout << "Front element: " << q.front() << endl;  // Displays 10
    cout << "Back element: " << q.back() << endl;    // Displays 30

    // Display the size of the queue
    cout << "Size of the queue: " << q.size() << endl;  // Displays 3

    // Removing elements from the queue using pop()
    while (!q.empty()) {
        cout << "Processing element: " << q.front() << endl;  // Process front element
        q.pop();  // Remove the element at the front
    }

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;  // Queue is now empty
    }

    return 0;
}
