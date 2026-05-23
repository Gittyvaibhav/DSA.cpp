// longest distance between two nodes it may or may not pass through root node
#include <iostream>
#include <algorithm>
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

int maxPath(Node *root, vector<int> &max, int &sum)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lh = maxPath(root->left, max, sum + root->data);
    int rh = maxPath(root->right, max, sum + root->data);

    max.push_back(sum);

    int mx = *max_element(max.begin(), max.end());
    return mx;
}

int main()
{
    Node *root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    vector<int> max;
    int sum = 0;
    maxPath(root, max, sum);
    cout << "The the sum of most optimal path is : "
         << maxPath << endl;

    return 0;
}