#include <iostream>
#include <vector>
#include <queue>

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

void levelOrder(Node *root, vector<vector<int>> &ans) {
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {

            Node *curr = q.front();
            q.pop();

            level.push_back(curr->data);

            if (curr->left != nullptr)
                q.push(curr->left);

            if (curr->right != nullptr)
                q.push(curr->right);
        }

        ans.push_back(level);
    }
}

int main() {

    // Constructing the tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans;

    levelOrder(root, ans);

    cout << "Level Order Traversal:\n";

    for (auto level : ans) {
        for (auto node : level) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}