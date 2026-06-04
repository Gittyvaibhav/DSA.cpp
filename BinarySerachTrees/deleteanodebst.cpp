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

TreeNode *deleteNode(TreeNode *root, int val)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    TreeNode *curr = root;
    TreeNode *parent=nullptr;
    while(curr!=nullptr && curr->data!=val){
        parent = curr;
        if(curr->data<val){
            curr=curr->left;
        }else{
            curr=curr->right;
        }
    }
    if(curr==nullptr){
        return root;
    }


    
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

    root = deleteNode(root, val);

    cout << "Inorder traversal after deletion:\n";
    inorder(root);

    return 0;
}