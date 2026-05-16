#include <iostream>
#include <stack>
using namespace std;

// Insert x at the bottom of the stack using recursion.
void insertAtBottom(stack<int>& st, int x) {
    // Base case: if stack is empty, just push the new element.
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Temporarily remove the top element.
    int temp = st.top();
    st.pop();

    // Recursively go deeper until the stack becomes empty.
    insertAtBottom(st, x);

    // Restore the removed element back on top.
    st.push(temp);
}

// Reverse the stack using recursion.
void reverseStack(stack<int>& st) {
    // Base case: an empty stack is already reversed.
    if (st.empty()) {
        return;
    }

    // Store the top element and remove it.
    int temp = st.top();
    st.pop();

    // Reverse the remaining smaller stack.
    reverseStack(st);

    // Put the removed element at the bottom of the reversed stack.
    insertAtBottom(st, temp);
}

int main() {
    stack<int> st;
    int n, value;

    // Ask the user how many values will go into the stack.
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter stack elements:\n";

    // Push elements into the stack.
    // The last input becomes the top of the stack.
    for (int i = 0; i < n; i++) {
        cin >> value;
        st.push(value);
    }

    // Reverse the stack.
    reverseStack(st);

    cout << "\nReversed stack (top to bottom):\n";

    // Print and remove elements from top to bottom.
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}