// in balanced binary tree for every node , height(left)-height(right)<=1
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

    dia = max(dia, lH+rH);

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