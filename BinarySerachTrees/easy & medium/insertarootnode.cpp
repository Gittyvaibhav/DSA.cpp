#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (root == nullptr)
    {
        return new TreeNode(val);
    }

    TreeNode *curr = root;

    while (true)
    {
        // go LEFT for smaller values
        if (val < curr->data)
        {
            if (curr->left == nullptr)
            {
                curr->left = new TreeNode(val);
                break;
            }
            curr = curr->left;
        }
        // go RIGHT for larger/equal values
        else
        {
            if (curr->right == nullptr)
            {
                curr->right = new TreeNode(val);
                break;
            }
            curr = curr->right;
        }
    }

    return root;
}

void inorder(TreeNode *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);

    root->right->right = new TreeNode(18);

    int val;

    cout << "Enter the value: ";
    cin >> val;

    root = insertIntoBST(root, val);

    cout << "Inorder traversal after insertion:\n";
    inorder(root);

    return 0;
}