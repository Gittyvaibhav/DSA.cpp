#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


bool same(Node* root1, Node* root2)
{
    
    if (root1 == nullptr && root2 == nullptr)
        return true;

    
    if (root1 == nullptr || root2 == nullptr)
        return false;

    
    if (root1->data != root2->data)
        return false;

    // Recursively check left and right subtrees
    return same(root1->left, root2->left) &&
           same(root1->right, root2->right);
}

// Wrapper function
bool isSameTree(Node* root1, Node* root2)
{
    return same(root1, root2);
}



int main()
{
    // First Tree
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(50);

    // Second Tree
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);


    if (isSameTree(root1, root2))
        cout << "The two binary trees are IDENTICAL." << endl;
    else
        cout << "The two binary trees are NOT identical." << endl;


    return 0;
}