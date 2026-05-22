// in balanced binary tree for every node , height(left)-height(right)<=1
#include <iostream>
#include <algorithm>
#include <cmath>

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

// Function to find height of tree
int findHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lH = findHeight(root->left);
    if (lH == -1) return -1; // left subtree already unbalanced
    int rH = findHeight(root->right);
    if (rH == -1) return -1; // right subtree already unbalanced
    if (abs(lH - rH) > 1) return -1;

    return 1 + max(lH, rH);
}

// Function to check balanced binary tree
bool check(Node *root)
{
    // single-pass check using the helper: returns true if height!=-1
    return findHeight(root) != -1;
}

int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    cout << "The tree is a balanced binary tree: "
         << check(root) << endl;

    return 0;
}