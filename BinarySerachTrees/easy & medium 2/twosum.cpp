#include <iostream>
#include <climits>
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

void inorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
        return;

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
bool twoSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
                return true;
            }
        }
    }
}

int main()
{
    Node *root = new Node(10);

    root->left = new Node(5);
    root->right = new Node(15);

    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->right->right = new Node(18);

    vector<int> arr;
    inorder(root, arr);
    twoSum(arr, 16);
}