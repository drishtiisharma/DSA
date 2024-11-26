#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Delete the head node and return the new head
Node* deleteHead(Node* head) {
  
    // Check if the list is empty
    if (head == nullptr)
        return nullptr;

    // Store the current head in a temporary variable
    Node* temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Free the memory of the old head node
    delete temp;

    return head;
}

void printList(Node* curr) {
    while (curr != nullptr) {
          cout << curr->data << " ";
        curr = curr->next; 
    }
}

int main() {
  
    // Create a hard-coded linked list:
    // 3 -> 12 -> 15 -> 18
    Node* head = new Node(3);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next->next = new Node(18);
    head = deleteHead(head);
    printList(head);

    return 0;
}
