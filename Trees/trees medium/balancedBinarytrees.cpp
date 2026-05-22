//in balanced binary tree for every node , height(left)-height(right)<=1
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

    // Check left and right subtrees
    bool left = check(root->left);
    bool right = check(root->right);

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