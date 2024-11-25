#include <iostream>

// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Class to represent a Binary Search Tree
class BinarySearchTree {
private:
    Node* root;

    // Helper function for insertion
    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    // Helper function for searching
    Node* search(Node* node, int value) const {
        if (node == nullptr || node->data == value) {
            return node;
        }
        if (value < node->data) {
            return search(node->left, value);
        } else {
            return search(node->right, value);
        }
    }

    // Helper function for in-order traversal
    void inOrderTraversal(Node* node) const {
        if (node != nullptr) {
            inOrderTraversal(node->left);
            std::cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

    // Helper function to find the minimum value node
    Node* findMin(Node* node) const {
        while (node && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    // Helper function for deletion
    Node* deleteNode(Node* node, int value) {
        if (node == nullptr) {
            return node;
        }
        if (value < node->data) {
            node->left = deleteNode(node->left, value);
        } else if (value > node->data) {
            node->right = deleteNode(node->right, value);
        } else {
            // Node with only one child or no child
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = findMin(node->right);

            // Copy the inorder successor's content to this node
            node->data = temp->data;

            // Delete the inorder successor
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

public:
    // Constructor
    BinarySearchTree() : root(nullptr) {}

    // Insert a value
    void insert(int value) {
        root = insert(root, value);
    }

    // Search for a value
    bool search(int value) const {
        return search(root, value) != nullptr;
    }

    // Perform in-order traversal
    void inOrderTraversal() const {
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    // Delete a value
    void deleteNode(int value) {
        root = deleteNode(root, value);
    }

    // Find the minimum value node in the BST
    int findMin() const {
        Node* minNode = findMin(root);
        if (minNode != nullptr) {
            return minNode->data;
        } else {
            throw std::runtime_error("The tree is empty.");
        }
    }
};

// Main function to demonstrate complete operations
int main() {
    BinarySearchTree bst;

    // Inserting values into the BST
    std::cout << "Inserting values 50, 30, 70, 20, 40, 60, 80 into the BST." << std::endl;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    // Display in-order traversal
    std::cout << "In-order traversal of the BST: ";
    bst.inOrderTraversal();

    // Searching for values
    int searchValue1 = 40;
    int searchValue2 = 90;

    std::cout << "\nSearching for value " << searchValue1 << ": ";
    if (bst.search(searchValue1)) {
        std::cout << searchValue1 << " is found in the tree." << std::endl;
    } else {
        std::cout << searchValue1 << " is not found in the tree." << std::endl;
    }

    std::cout << "Searching for value " << searchValue2 << ": ";
    if (bst.search(searchValue2)) {
        std::cout << searchValue2 << " is found in the tree." << std::endl;
    } else {
        std::cout << searchValue2 << " is not found in the tree." << std::endl;
    }

    // Finding the minimum value in the BST
    try {
        int minValue = bst.findMin();
        std::cout << "\nThe minimum value in the BST is: " << minValue << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    // Deleting values from the BST
    std::cout << "\nDeleting value 20." << std::endl;
    bst.deleteNode(20);
    std::cout << "In-order traversal after deleting 20: ";
    bst.inOrderTraversal();


    return 0;
}
