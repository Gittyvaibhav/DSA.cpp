// BST Iterator root->(7)
//bst iterator is a class that takes the root of a binary search tree and allows us to iterate through the elements of the tree in sorted order
//inorder traversal of the tree will give us the elements in sorted order
//difference between BST iterator and normal iterator is that BST iterator uses a stack to store the elements of the tree while normal iterator uses a vector to store the elements of the tree
//3 , 7, 9, 15, 20
//initially pointer is at nullptr
// next() -> 3, pointer moves to 3
//next -> 7, pointer moves to 7
//hasNext() -> true, pointer is at 7
//next -> 9, pointer moves to 9
//hasNext() -> true, pointer is at 9
//next -> 15, pointer moves to 15
//hasNext() -> true, pointer is at 15
//next -> 20, pointer moves to 20
//hasNext() -> false, pointer is at 20
//vector to store the elements of the BST in sorted order inorder traversal
//left-root-right
//space complexity O(H) for storing the elements in vector where H is the height of the tree
//time complexity O(1) for next() and hasNext() as we are just moving the pointer in the vector
//logic for next() -> return the element at the pointer and move the pointer to the next element in the vector
//logic for hasNext() -> check if the pointer is at the end of the vector or not

#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BSTIterator {
    stack<Node*> st;

    void pushAll(Node* node) {
        while (node) {
            st.push(node);
            node = node->left;
        }
    }

public:
    BSTIterator(Node* root) {
        pushAll(root);
    }

    bool hasNext() {
        return !st.empty();
    }

    int next() {
        Node* temp = st.top();
        st.pop();

        pushAll(temp->right);

        return temp->data;
    }
};

int main() {
    Node* root = new Node(10);

    root->left = new Node(5);
    root->right = new Node(15);

    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->right->right = new Node(18);

    BSTIterator it(root);

    while (it.hasNext()) {
        cout << it.next() << " ";
    }

    return 0;
}