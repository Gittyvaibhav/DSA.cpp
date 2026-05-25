#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <queue>

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

vector<vector<int>> zigZag(Node *root)
{
    vector<vector<int>> ans;

    if (root == nullptr)
    {
        return ans;
    }

    queue<Node *> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            int index;

            if (leftToRight)
            {
                index = i;
            }
            else
            {
                index = size - 1 - i;
            }

            level[index] = node->data;

            if (node->left != nullptr)
            {
                q.push(node->left);
            }

            if (node->right != nullptr)
            {
                q.push(node->right);
            }
        }

        ans.push_back(level);
        leftToRight = !leftToRight;
    }

    return ans;
}

int main()
{
    Node *root = new Node(-10);

    root->left = new Node(9);

    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<vector<int>> result = zigZag(root);

    for (auto level : result)
    {
        for (auto val : level)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}