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
// uses auxiliary stack space of O(h) where h is height of tree
// skew tree will have O(n) space complexity where n is number of nodes in tree

//recursive approach
int maximumDepth(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lH=maximumDepth(root->left);//  recursive call to left subtree to find its height.
    int rH=maximumDepth(root->right);

    return 1+max(lH,rH);// 1 for current node and max of left and right subtree height.
    //recursive calls will return the height of left and right subtree, and we take the maximum of those two heights and add 1 to account for the current node. This way, we are effectively calculating the height of the tree as we traverse it.
    
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