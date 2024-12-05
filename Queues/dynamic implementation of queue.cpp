#include <iostream>
using namespace std;

struct QueueNode {
    int data;
    QueueNode* next;
};

QueueNode* front = NULL;
QueueNode* rear = NULL;

void Insert() {
    QueueNode* newNode = new QueueNode();
    if (!newNode) {
        cout << "Queue Overflow" << endl;
        return;
    }
    cout << "Insert the element in queue: ";
    cin >> newNode->data;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Delete() {
    if (front == NULL) {
        cout << "Queue Underflow" << endl;
        return;
    }
    QueueNode* temp = front;
    cout << "Element deleted from queue is: " << temp->data << endl;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    delete temp;
}

void Display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    QueueNode* temp = front;
    cout << "Queue elements are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: Insert(); break;
            case 2: Delete(); break;
            case 3: Display(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
