#include <iostream>
#include <climits>
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

bool validateBst(Node *root, long long min, long long max)
{
    if (root == nullptr)
    {
        return true;
    }

    if (root->data <= min || root->data >= max)
        return false;

    return validateBst(root->left, min, root->data) &&
           validateBst(root->right, root->data, max);
}

int main()
{
    Node *root = new Node(10);

    root->left = new Node(5);
    root->right = new Node(15);

    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->right->right = new Node(18);

    if (validateBst(root, LLONG_MIN, LLONG_MAX))
        cout << "true";
    else
        cout << "false";
}