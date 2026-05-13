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

// Function to delete the head node of the linked list

Node *deleteHead(Node *head)
{
    if (head == nullptr)
        return nullptr;

    Node *temp = head;
    head = head->next;
    delete temp;
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

// Another function to delete the head node of the linked list
Node *removesHead(Node *head)
{
    if (head == nullptr)
        return nullptr;

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to delete tail node of linked list
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node *temp = head; // traverse to second last node

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// rempve tail node of linked list
Node *removeTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node *temp = head; // traverse to second last node

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// remove node at given position
Node *removek(Node *head, int k)
{
    if (head == nullptr)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0;
    Node *temp = head;   // FIX: temp was missing
    Node *prev = nullptr;

    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;   
}


// Main function to demonstrate the deletion of the head node
int main()
{
    vector<int> arr = {
        12,
        5,
        8,
        7,
    };
    Node *head = convertArr2LL(arr);
    head=removek(head,4);
    print(head);
}
