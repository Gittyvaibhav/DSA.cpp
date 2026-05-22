#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

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

int maximumDepth(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lH=maximumDepth(root->left);
    int rH=maximumDepth(root->right);

    return 1+max(lH,rH);
    
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "maximum Depth is: " << maximumDepth(root) << endl;
    return 0;

}