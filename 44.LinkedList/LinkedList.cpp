#include<iostream>
using namespace std;

// Doubly Linked List

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of the linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    
    return len;
}

int main()
{
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Print(head);
    cout << getLength(head) << endl;
    


    return 0;
}