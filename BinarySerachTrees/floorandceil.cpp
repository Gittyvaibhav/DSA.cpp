// floor means the greatest element in the tree which is smaller than or equal to the key
// ceil means the smallest element in the tree which is greater than or equal to the key

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

int floor(Node *root, int key)
{
    int floor = -1;

    while (root)
    {
        if (root->data == key)
        {
            return root->data;
        }
        //The BST structure guarantees that by always going right on valid candidates and left on invalid ones, you'll naturally converge to the largest value ≤ key.
        if (root->data < key)
        {
            floor = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }

    return floor;
};
int ceil(Node *root, int key)
{
    int ceil = -1;

    while (root)
    {
        if (root->data == key)
        {
            return root->data;
        }

        if (root->data > key)
        {
            ceil = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    return ceil;
};

int main()
{
    // Constructing the binary search tree
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    int key = 8;

    cout << floor(root, key);
    cout << endl;
    cout << ceil(root, key);

    return 0;
}