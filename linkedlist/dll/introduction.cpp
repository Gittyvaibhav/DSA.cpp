#include <iostream>
#include <vector>
using namespace std;
// Definition of the Node class
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// array to doubly linked list
Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
// delete head node of doubly linked list
Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

// delete tail node of doubly linked list
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    Node *tail = temp->next;
    temp->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head;
}
// delete node at given position
Node *deletek(Node *head, int k)
{
    if (head == nullptr)
        return head;

    Node *temp = head;
    int count = 0;

    while (temp != nullptr)
    {
        count++;
        if (count == k)
            break;
        temp = temp->next;
    }

    // If k is greater than number of nodes
    if (temp == nullptr)
        return head;

    Node *prev = temp->back;
    Node *next = temp->next;

    if (prev == nullptr && next == nullptr)
    {
        head = nullptr;
    }
    else if (prev == nullptr) // deleting head
    {
        head = deleteHead(head);
        return head;
    }
    else if (next == nullptr) // deleting tail
    {
        head = deleteTail(head);
        return head;
    }
    else // deleting middle
    {
        prev->next = next;
        next->back = prev;
    }

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}
// remove a node at given position but not head
void deleteNode(Node* temp)
{
    

    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == nullptr) 
    {
        prev->next = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = front;;
    temp->back = prev;
   
}

// print doubly linked list
void print(Node *head)
{

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = convertArr2DLL(arr);
    head=deletek(head, 2);
    print(head);
    return 0;
}
