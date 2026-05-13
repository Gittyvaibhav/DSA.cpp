#include <iostream>
#include <vector>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)   // ✅ Added this constructor
    {
        data = data1;
        next = nullptr;
    }

public:
    Node()
    {
        data = 0;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//length of linked list
int lengthLL(Node* head){
    int length = 0;
    Node* temp = head;
    while(temp){
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node y = Node(arr[0], nullptr);
    // cout << &y << endl;
    // cout << y.data << endl;
    // cout << y.next << endl;

    Node *head = convertArr2LL(arr);
    // cout << head << endl;
    // cout << head->data << endl;


    // Print the linked list

    Node* temp=head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
