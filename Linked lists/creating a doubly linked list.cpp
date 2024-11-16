#include <iostream>
using namespace std;

//structure of doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insert(int new_data) {
    Node* new_node = new Node(); 
    new_node->data = new_data;
    new_node->next = head;
    new_node->prev = NULL;
    
    if (head != NULL) {
        head->prev = new_node; 
    }
    
    head = new_node; 
}

void display() {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    
    cout << "The doubly linked list is: ";
    display();
    
    return 0;
}
