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
//insert node before head
Node* insertAtHead(Node* head, int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    temp->back = nullptr;

    if(head != nullptr)
        head->back = temp;

    return temp;
}


int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = convertArr2DLL(arr);
    head=insertAtHead(head,5);
    print(head);
    return 0;
}
