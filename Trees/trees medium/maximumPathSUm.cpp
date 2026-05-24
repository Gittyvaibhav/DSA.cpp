#include <iostream>
#include <algorithm>
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

int maxi = INT_MIN;

int maxPath(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int leftSum = max(0, maxPath(root->left));
    int rightSum = max(0, maxPath(root->right));

    // path passing through current node
    int currentPath = root->data + leftSum + rightSum;

    // update global maximum
    maxi = max(maxi, currentPath);

    // return single best path upward
    return root->data + max(leftSum, rightSum);
}

int main()
{
    Node *root = new Node(-10);

    root->left = new Node(9);

    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    maxPath(root);

    cout << "Maximum Path Sum is : "
         << maxi << endl;

    return 0;
}