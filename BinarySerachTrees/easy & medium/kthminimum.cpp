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

int inorder(Node *root, int &k)
{
    if (root == nullptr)
    {
        return -1;
    }

    int left = inorder(root->left, k);
    if (left != -1)
    {
        return left;
    }

    k--;

    if (k == 0)
    {
        return root->data;
    }

    return inorder(root->right, k);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    int k = 1;

    cout << inorder(root, k);

    return 0;
}