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

void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    vector<int> inorder;
    stack<Node *> st;

    while (root != nullptr || !st.empty())
    {
        // Go to leftmost node
        while (root != nullptr)
        {
            st.push(root);
            root = root->left;
        }

        // Process current node
        root = st.top();
        st.pop();

        inorder.push_back(root->data);

        // Move to right subtree
        root = root->right;
    }

    

    // Print traversal
    for (int val : inorder)
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

    cout << "inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}