#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool path(Node* root, int target, vector<int>& ans) {
    if (root == nullptr)
        return false;

    ans.push_back(root->data);

    if (root->data == target)
        return true;

    if (path(root->left, target, ans) ||
        path(root->right, target, ans))
        return true;

    ans.pop_back(); // backtrack
    return false;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans;

    if (path(root, 5, ans)) {
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}