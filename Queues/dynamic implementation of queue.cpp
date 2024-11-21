#include <iostream>
using namespace std;

struct QueueNode {
    int data;
    QueueNode* next;
};

QueueNode *front, *rear;
QueueNode *avail, *temp;

void Insert() {
    avail = (struct QueueNode*)malloc(sizeof(struct QueueNode*));
    int val;
    if (avail == NULL)
        cout << "Queue Overflow" << endl;
    else {
        if (front == NULL)
            front = front->next;
        cout << "Insert the element in queue: " << endl;
        cin >> val;
        rear = rear->next;
        rear->data = val;
    }
}

void Delete() {
    if (front == NULL) {
        cout << "Queue Underflow " << endl;
        return;
    } else {
        cout << "Element deleted from queue is: " << front->data << endl;
        front = front->next;
    }
}

void Display() {
    if (front == NULL)
        cout << "Queue is empty" << endl;
    else {
        cout << "Queue elements are: ";
        temp = front;
        while (temp->next != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    front = NULL;
    rear = NULL;
    int ch;

    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;

    do {
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1: Insert();
                    break;
            case 2: Delete();
                    break;
            case 3: Display();
                    break;
            case 4: cout << "Exit" << endl;
                    break;
            default: cout << "Invalid choice" << endl;
                     break;
        }
    } while (ch != 4);

    return 0;
}
