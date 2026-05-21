#include <iostream>
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

void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    vector<int> preorder;
    stack<Node *> st;

    st.push(root);

    while (!st.empty())
    {
        root = st.top();
        st.pop();

        preorder.push_back(root->data);

        // Push right first so left is processed first
        if (root->right != nullptr)
        {
            st.push(root->right);
        }

        if (root->left != nullptr)
        {
            st.push(root->left);
        }
    }

    // Print traversal
    for (int val : preorder)
    {
        cout << val << " ";
    }
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

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    return 0;
}