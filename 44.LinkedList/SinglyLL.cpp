#include <iostream>
using namespace std;

// Linked List : is a linear data structure which made by collection of node.
// Why? : array can not be changed at run time but we can do with linked list
// Dynamic DS and no memory wastage(unlike array)
//  Insertion and deletion easy - no shift needed

// Singly Linked List
class Node
{

public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    { // Cover case : Insert at start
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    { // Cover case : Insert at Last and for update tail.
        InsertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head, Node* &tail)
{

    if (position == 1) // For Delete First Node
    {
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        delete temp; // memory free
    }
    else
    {
        Node *current = head;
        Node *Previous = NULL;
        int i = 1;
        while (i < position)
        {
            Previous = current;
            current = current->next;
            i++;
        }
        if(current -> next == NULL){ // For handle tail value
            tail = Previous;
        }
        Previous->next = current->next;

        current -> next = NULL;
        delete current;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    // cout <<  endl;

    // Node* head = node1;
    // Print(head);
    // InsertAtHead(head, 12);
    // Print(head);
    // InsertAtHead(head, 15);
    // Print(head);

    Node *head = node1;
    Node *tail = node1;
    Print(head);
    InsertAtTail(tail, 12);
    Print(head);
    InsertAtTail(tail, 15);
    Print(head);
    InsertAtTail(tail, 17);
    Print(head);
    InsertAtTail(tail, 19);
    Print(head);
    InsertAtPosition(tail, head, 4, 16);
    Print(head);
    InsertAtPosition(tail, head, 1, 2);
    Print(head);
    InsertAtPosition(tail, head, 8, 50);
    Print(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;

    deleteNode(3, head, tail);
    Print(head);
    deleteNode(7, head, tail);
    Print(head);

    cout << head->data << endl;
    cout << tail->data << endl;// tail handled


    return 0;
}