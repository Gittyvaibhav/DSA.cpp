// lowest common ancestor in a binary search tree is the lowest node in the tree that has both p and q as descendants (where we allow a node to be a descendant of itself).
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


Node *lca(Node *root, Node *p, Node *q)
{
    if (root == nullptr)
    {
        return root;
    };
    int curr = root->data;

    if (p->data < curr && q->data < curr)
    {
        lca(root->left, p, q);
    }

    if (p->data > curr && q->data > curr)
    {
        lca(root->right, p, q);
    }

    return root;
};
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);
    Node *ans = lca(root,root->left->right ,root->right->right  );

    if (ans != nullptr)
    {
        cout << ans->data;
    }
}