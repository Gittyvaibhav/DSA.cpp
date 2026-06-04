#include <iostream>
#include <vector>
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
Node *lcam(Node *root, int p, int q)
{
    if (root == nullptr || root->data == p || root->data == q)
    {
        return root;
    }
    Node *left = lcam(root->left, p, q);
    Node *right = lcam(root->right, p, q);

    if (left == nullptr)
    {
        return right;
    }
    else if (right == nullptr)
    {
        return left;
    }
    else
    {
        return root;
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node *ans = lcam(root, 4, 5);

    if (ans != nullptr)
    {
        cout << ans->data;
    }
}