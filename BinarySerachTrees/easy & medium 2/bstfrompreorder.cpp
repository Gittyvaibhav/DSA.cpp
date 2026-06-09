#include <iostream>
#include <vector>
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

Node* bstfromPreorder(vector<int>& arr, int& i, int bound)
{
    if (i == arr.size() || arr[i] > bound)
    {
        return nullptr;
    }

    Node* root = new Node(arr[i++]);

    root->left = bstfromPreorder(arr, i, root->data);
    root->right = bstfromPreorder(arr, i, bound);

    return root;
}

void inorder(Node* root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    vector<int> arr = {8, 5, 1, 7, 10, 12};

    int i = 0;

    Node* root = bstfromPreorder(arr, i, INT_MAX);

    inorder(root);

    return 0;
}