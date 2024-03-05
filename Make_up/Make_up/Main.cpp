#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Creating a queue of characters
    queue<char> q;
    q.push('A');
    q.push('B');
    q.push('C');
    q.push('D');

    // Printing the initial contents of the queue
    cout << "Queue contents: ";
    while (!q.empty()) {
        cout << q.front() << " "; 
        q.pop(); 
    }
    cout << endl; 

    // Creating a temporary queue for deletion
    queue<char> temp_q;
    temp_q.push('A');
    temp_q.push('B');
    temp_q.push('C');
    temp_q.push('D');

    // Deleting elements in the order they were entered
    cout << "Deleting elements in the order they were entered:" << endl;
    while (!temp_q.empty()) {
        char front_element = temp_q.front(); 
        cout << "Deleting: " << front_element << endl; 
        temp_q.pop(); 
    }

    return 0; 
}