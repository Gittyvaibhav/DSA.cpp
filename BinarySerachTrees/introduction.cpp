// Binary Search Trees Introduction
// duplicate values are not allowed in a binary search tree
// left subtree of a node contains only nodes with keys less than the node's key
// right subtree of a node contains only nodes with keys greater than the node's key
// height of a binary search tree is O(log n) in average case and O(n) in worst case 
//degenerate tree is a tree where each parent node has only one child node, it can be left or right child

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    // Constructing the binary search tree
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    return 0;
}