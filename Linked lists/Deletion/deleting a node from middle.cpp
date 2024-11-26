#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

// Function to delete middle node from linked list.
Node* deleteMid(Node* head) {
    // Edge case: return nullptr if there is only one node.
    if (head->next == nullptr)
        return nullptr;

    int count = 0;
    Node *p1 = head, *p2 = head;

    // First pass, count the number of nodes in the linked list using 'p1'.
    while (p1 != nullptr) {
        count++;
        p1 = p1->next;
    }

    // Get the index of the node to be deleted.
    int middleIndex = count / 2;

    // Second pass, let 'p2' move toward the predecessor of the middle node.
    for (int i = 0; i < middleIndex - 1; ++i)
        p2 = p2->next;

    // Delete the middle node and return 'head'.
    p2->next = p2->next->next;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a static hardcoded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5.
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    // Delete the middle node.
    head = deleteMid(head);

    cout << "Linked List after deleting the middle node: ";
    printList(head);

    return 0;
}
