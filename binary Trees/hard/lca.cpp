// loweast common ancestor in a binary tree is the lowest node in the tree that has both p and q as descendants (where we allow a node to be a descendant of itself).
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

//most optimal solution is to use recursion and return the node itself instead of the data. This way we can easily check if the node is null or not and also we can easily return the node itself if we found it.

Node *lcam(Node *root, int p, int q)
{
    if (root == nullptr || root->data == p || root->data == q)
    {
        return root;
    }

    //bfs traversal to find the node p and q in the tree and return the node itself if we found it. If we found both p and q in the left subtree then we return the left subtree, if we found both p and q in the right subtree then we return the right subtree, if we found p in the left subtree and q in the right subtree then we return the root node as it is the lowest common ancestor of p and q.
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
    else//if both are not null we found our result.
    
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