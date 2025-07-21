#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
    Node *Prev;
    Node(int a)
    {
        this->data = a;
        this->Next = NULL;
        this->Prev = NULL;
    }
};
class Dqeue
{
public:
    Node *Head;
    Node *Tail;
    int size = 0;
    Dqeue()
    {
        Head = Tail = NULL;
        size = 0;
    }
    void PushBack(int val)
    {
        // Make a new Node
        Node *tem = new Node(val);
        if (size == 0)
        {
            Head = Tail = tem;
        }
        else
        {
            Tail->Next = tem;
            // DLL Changes
            tem->Prev = Tail; // Set the Prev pointer for the new Tail
            Tail = tem;
        }

        size++;
    }
    // Adding the element in front
    void PushFront(int val)
    {
        Node *tem = new Node(val);
        if (size == 0)
        {
            Head = Tail = tem;
        }
        else
        {
            tem->Next = Head;
            // DLL Changes
            Head->Prev = tem; // Set the Prev pointer for the old Head
            Head = tem;
        }
        size++;
    }
    // Delete a Head Node
    void PopFront()
    {
        if (size == 0)
            return;
        Head = Head->Next;
        // DLL Changes
        if (Head != NULL) // Check if Head is not NULL after deletion
        {
            Head->Prev = NULL; // Set the Prev pointer of the new Head to NULL
        }
        if (Head == NULL) // If the list becomes empty
        {
            Tail = NULL; // Set Tail to NULL as well
        }
        size--;
    }
    // Delete a Tail Node
    void PopBack()
    {
        if (size == 0)
            return;
        else if (size == 1) // If there's only one element
        {
            PopFront();
        }
        Node *tem = Tail->Prev;
        tem->Next = NULL;
        Tail = tem;
        size--;
    }
    void Print()
    {
        Node *tem = Head;
        while (tem != NULL)
        {
            cout << tem->data << " ";
            tem = tem->Next;
        }
        cout << endl;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return Head->data;
    }
    int back()
    {
        return Tail->data;
    }
    int sizeQ()
    {
        return size;
    }
};
int main()
{
    Dqeue q;
    q.PushBack(10);
    q.PushBack(20);
    q.PushBack(30);
    q.PushBack(40);
    q.Print();
    q.PopBack();
    q.Print();
    q.PopFront();
    q.Print();
    return 0;
}