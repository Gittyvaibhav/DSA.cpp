// diameter of binary tree is the longest path between any two nodes in the tree. The path may or may not pass through the root. The diameter of a binary tree can be computed by recursively calculating the diameter of left and right subtrees and the longest path through the root. The diameter of the tree is the maximum of these three values.
#include <iostream>
#include <algorithm>

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

int diameter(Node *root, int &dia)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lH = diameter(root->left, dia);
    int rH = diameter(root->right, dia);

    dia = max(dia, lH+rH);// update the diameter if the longest path through the root is greater than the current diameter//diameter will become the maximum of the current diameter and the longest path through the root which is the sum of left height and right height

    return 1 + max(lH, rH);
}

int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    int dia = 0;
    diameter(root, dia);
    cout << "The diameter of binary tree is : "
         << dia << endl;

    return 0;
}