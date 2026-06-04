//lowest common descendant in a binary tree is the lowest node in the tree that has both p and q as descendants (where we allow a node to be a descendant of itself).
//For example, the lowest common ancestor of nodes 5 and 15 is 10, while the lowest common ancestor of nodes 3 and 7 is 5.
//The lowest common ancestor of nodes 3 and 15 is 10, since a node can be a descendant of itself according to the LCA definition.
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
int lca(Node *root, int p, int q)
{
    if (root == nullptr)
    {
        return -1;
    }
    if (root->data == p || root->data == q)
    {
        return root->data;
    }

    
}

int main()
{
    // Constructing the binary search tree
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    lca(root, 3, 7);

    return 0;
}