#include <iostream>
#include <vector>
using namespace std;
//Struct: Members are public by default (anyone can access left, right, and data).
struct Node {
    int data;
    Node *left;
    Node *right;
    
    Node(int val) {
        data = val; 
        left = nullptr;
        right = nullptr;
    }
};

// inorder traversal function
void inorder(Node *node) {
    if (node == nullptr) {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int main() {
    // Constructing the tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Calling the function to print
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}