#include <iostream>
using namespace std;

class Node {
public:
    int data = 0;
    Node* next = NULL;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout<<"Value inserted from front: "<<value<<endl;
    }

    void insertEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout<<"Value inserted from back: "<<value<<endl;
    }

    void popFront() {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Front element popped.\n";
    }

    void popBack() {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }

        if (!head->next) {
            delete head;
            head = NULL;
            cout << "Back element popped.\n";
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->next) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << "Back element popped.\n";
    }

    void display() {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList l;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at End\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at front: ";
                cin >> value;
                l.insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                l.insertEnd(value);
                break;
            case 3:
                l.popFront();
                break;
            case 4:
                l.popBack();
                break;
            case 5:
                cout << "List: ";
                l.display();
                break;
            case 6:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
