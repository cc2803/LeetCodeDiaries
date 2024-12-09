#include <iostream>
using namespace std;

class DeQueue {
public:
    int start = -1;
    int end = -1;
    int q[5] = {};  
    int size = sizeof(q) / sizeof(int);

    bool isfull() {
        return (end + 1) % size == start;
    }

    bool isempty() {
        return start == -1;
    }

    void push_front(int value) {
        if (isfull()) {
            cout << "Queue is full, cannot push from the front!" << endl;
            return;
        }
        //insertion of first element
        if (isempty()) {
            start = 0;
            end = 0;
        } else {
            start = (start + size - 1) % size; 
        }
        q[start] = value;
        cout << "Value pushed from the front: " << value << endl;
    }

    void push_back(int value) {
        if (isfull()) {
            cout << "Queue is full, cannot push from the back!" << endl;
            return;
        }
        if (isempty()) {  // First element insertion
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % size;  // Move 'end' forward circularly
        }
        q[end] = value;
        cout << "Value pushed from the back: " << value << endl;
    }

    // Remove element from the front
    void pop_front() {
        if (isempty()) {
            cout << "Queue is empty, cannot pop from the front!" << endl;
            return;
        }
        cout << "Value popped from the front: " << q[start] << endl;
        if (start == end) {  // Only one element left
            start = -1;  // Reset queue to empty
            end = -1;
        } else {
            start = (start + 1) % size;  // Move 'start' forward circularly
        }
    }

    // Remove element from the back
    void pop_back() {
        if (isempty()) {
            cout << "Queue is empty, cannot pop from the back!" << endl;
            return;
        }
        cout << "Value popped from the back: " << q[end] << endl;
        if (start == end) {  // Only one element left
            start = -1;  // Reset queue to empty
            end = -1;
        } else {
            end = (end - 1 + size) % size;  // Move 'end' backward circularly
        }
    }

    // Display the elements in the deque
    void display() {
        if (isempty()) {
            cout << "Queue is empty, nothing to display!" << endl;
            return;
        }
        cout << "Queue contents: ";
        int i = start;
        while (i != end) {
            cout << q[i] << " ";
            i = (i + 1) % size;
        }
        cout << q[end] << endl;  // Display the last element
    }
};

int main() {
    DeQueue dq;
    while (1) {
        int choice;
        cout << "Enter your choice:\n 1-push_front\n 2-push_back\n 3-pop_front\n 4-pop_back\n 5-display\n Any other key to exit." << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            if (dq.isfull()) cout << "Sorry Queue is full, cannot enqueue element!" << endl;
            else {
                cout << "Enter element to be enqueued from the front: ";
                int n;
                cin >> n;
                dq.push_front(n);
            }
            break;

        case 2:
            if (dq.isfull()) cout << "Sorry Queue is full, cannot enqueue element!" << endl;
            else {
                cout << "Enter element to be enqueued from the back: ";
                int n;
                cin >> n;
                dq.push_back(n);
            }
            break;

        case 3:
            if (dq.isempty()) cout << "Sorry queue is empty!, nothing to pop!" << endl;
            else dq.pop_front();
            break;

        case 4:
            if (dq.isempty()) cout << "Sorry queue is empty!, nothing to pop!" << endl;
            else dq.pop_back();
            break;

        case 5:
            if (dq.isempty()) cout << "Sorry queue is empty!, nothing to display!" << endl;
            else dq.display();
            break;

        default:
            cout << "Exiting....." << endl;
            exit(0);
        }
    }
    return 0;
}
