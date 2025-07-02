#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev; // For Doubly Linked List
public:
    Node(int data1, Node *next1)
    {

        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr; // Initialize Prev to nullptr for Doubly Linked List
    }
};
void DisplayLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void DisplayRec(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    DisplayRec(head->next);
}
void DisplayRev(Node *tail)
{
    while (tail)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d; // Set previous pointer for doubly linked list
    d->prev = c; // Set previous pointer for doubly linked list
    c->prev = b; // Set previous pointer for doubly linked list
    b->prev = a; // Set previous pointer for doubly linked list
    DisplayLL(a);
    DisplayRec(a);
    cout << endl;
    DisplayRev(e); // Displaying in reverse order
    return 0;
}