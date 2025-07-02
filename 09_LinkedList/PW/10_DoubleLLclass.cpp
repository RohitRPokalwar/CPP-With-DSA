#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// MUST CHANGE THE CODE OF GET INDEX FOR DOUBLY LINKED LIST
class Node
{
public:
    int data;
    Node *Next;
    Node *Prev; // For Doubly Linked List
    Node(int a)
    {
        this->data = a;
        this->Next = NULL;
        this->Prev = NULL; // Initialize Prev to nullptr for Doubly Linked List
    }
};
class DLL
{
public:
    Node *Head;
    Node *Tail;
    int size = 0;
    DLL()
    {
        Head = Tail = NULL;
        size = 0;
    }
    void InsertatEnd(int val)
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
    void insertathead(int val)
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
    // Insert a Node using teh function
    void InsertaNode(int pos, int val)
    {
        if (pos < 0 && pos >= size)
        {
            cout << "Error" << endl;
        }
        else if (pos == 0)
        {
            insertathead(val);
            size++;
        }
        else if (pos == size)
        {
            InsertatEnd(val);
            size++;
        }
        else
        {
            Node *t = new Node(val);
            Node *tem = Head;
            for (int i = 0; i < pos - 1; i++)
            {
                tem = tem->Next;
            }
            t->Next = tem->Next;
            tem->Next = t;
            // DLL Changes
            t->Prev = tem;     // Set the Prev pointer for the new Node
            t->Next->Prev = t; // Set the Prev pointer for the next Node
            size++;
        }
    }
    // Display an element of that index
    int displaynodeatindex(int pos)
    {
        if (pos == 0 && pos >= size)
        {
            cout << "Error" << endl;
            return -1;
        }
        Node *tem = Head;
        for (int i = 0; i < pos; i++)
        {
            tem = tem->Next;
        }
        int a = tem->data;
        return a;
    }
    // Delete a Head Node
    void DeleteatHead()
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
    void DeleteatTail()
    {
        if (size == 0)
            return;
        else if (size == 1) // If there's only one element
        {
            DeleteatHead();
        }
        Node *tem = Tail->Prev;
        tem->Next = NULL;
        Tail = tem;
        size--;
    }
    // Delete Node at index
    void DeleteNodeatindex(int pos)
    {
        if (pos < 0 || pos >= size)
            return;
        else if (pos == 0)
            DeleteatHead();
        else if (pos == size - 1)
            DeleteatTail();
        else
        {
            Node *tem = Head;
            for (int i = 0; i < pos; i++)
            {
                tem = tem->Next;
            }
            // Method 1
            //  tem->Next = NULL;
            //  Head = tem; // If not wriiten it will not give error it can be good approach
            // Method 2
            tem->Next = tem->Next->Next;
            // DLL Changes
            tem->Next->Prev = tem;
            size--;
        }
    }
    // Finding index by the Node
    // MUST CHANGE THE CODE FOR DOUBLY LINKED LIST
    int Nodeindexfind(Node *t)
    {
        int count = 0;
        Node *tem = Head;
        while (tem != NULL)
        {
            if (tem == t)
            {
                return count;
            }
            count++;
            tem = tem->Next;
        }
        return -1; // Not found
    }
    void PrintLLIteration()
    {
        Node *tem = Head;
        while (tem != NULL)
        {
            cout << tem->data << " ";
            tem = tem->Next;
        }
    }
};
// PrintLL

int main()
{
    DLL list;
    list.InsertatEnd(10);
    list.InsertatEnd(20);
    list.InsertatEnd(30);
    list.PrintLLIteration();
    cout << endl;
    list.InsertatEnd(40);
    list.PrintLLIteration();
    list.insertathead(5);
    cout << endl;
    list.PrintLLIteration();
    list.InsertaNode(2, 25); // Insert 25 at index 2
    cout << endl;
    list.PrintLLIteration();
    cout << endl;
    list.DeleteatTail();
    list.PrintLLIteration();
    return 0;
}