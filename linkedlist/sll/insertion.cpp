#include <iostream>
#include <vector>
using namespace std;

// Definition of the Node class
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// Function to convert an array to a linked list
Node *convertArr2LL(vector<int> &arr)
{
    if (arr.size() == 0)
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to print the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a node at the head of the linked list
Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
}

// Function to insert a node at the tail of the linked list
Node *insertTail(Node *head, int val)
{
    if (head == nullptr)
    {
        return new Node(val);
    }

    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;

    return head;
}
// function to insert a node at given position
Node *insertk(Node *head, int val, int k)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else
        {
            return nullptr;
        }
    }

    if (k == 1)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }

    Node *temp = head;
    int count = 1;

    while (temp != nullptr && count < k - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr)
    {
        return head;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}


// Main function to demonstrate insertion at head

int main()
{
    vector<int> arr = {12, 5, 8, 20};
    Node *head = convertArr2LL(arr);
    head = insertk(head, 15, 3);
    print(head);
}
