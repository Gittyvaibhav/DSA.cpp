//in balanced binary tree for every node , height(left)-height(right)<=1
//Approach: find height of left and right subtree for every node and check balance condition
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

    return 1 + max(findHeight(root->left), findHeight(root->right));
}

// Function to check balanced binary tree
bool check(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }

    int lH = findHeight(root->left);
    int rH = findHeight(root->right);

    // Check current node balance
    if (abs(lH - rH) > 1)
    {
        return false;
    }

    // Check left and right subtrees.
    //so we do a recursive call for left and right subtree and return false if any of them is not balanced.
    bool left = check(root->left);
    bool right = check(root->right);
    // If both left and right subtree are balanced then only we can say that the current node is balanced.therefore we return left && right.not left || right because if any of them is false then we can say that the current node is not balanced.
    return left && right;
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