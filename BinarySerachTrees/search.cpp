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
Node* search(Node *root, int key)
{
    while (root != nullptr && root->data != key) {
        if(root->data<key){
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return root;
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
    int key;
    cout<<"enter the key:";
    cin >> key;
    Node *found = search(root, key);
    if (found)
    {
        cout << "key found";
    }
    else
    {
        cout << "key not found";
    }

    return 0;
}