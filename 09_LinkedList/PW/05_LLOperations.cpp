#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
    Node(int a)
    {
        this->data = a;
        this->Next = NULL;
    }
};
class linkedlist
{
public:
    Node *Head;
    Node *Tail;
    int size = 0;
    linkedlist()
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
        size--;
    }
    // Delete a Tail Node
    void DeleteatTail()
    {
        if (size == 0)
            return;
        Node *tem = Head;
        while (tem->Next != Tail)
        {
            tem = tem->Next;
        }
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
            size--;
        }
    }
    // Finding index by the Node
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
    linkedlist ll;
    ll.InsertatEnd(5);
    ll.PrintLLIteration();
    cout << endl;
    ll.InsertatEnd(20);
    ll.PrintLLIteration();
    cout << endl;
    ll.insertathead(50); // 50 5 20
    ll.PrintLLIteration();
    cout << endl;
    ll.InsertaNode(1, 1);
    ll.PrintLLIteration(); // 50 1 5 20
    cout << endl;
    cout << ll.displaynodeatindex(2); // 5
    cout << endl;
    ll.DeleteatHead();
    ll.PrintLLIteration();
    cout << endl;
    ll.DeleteatTail();
    ll.PrintLLIteration();
    cout << endl;
    ll.DeleteNodeatindex(1);
    ll.PrintLLIteration();
    cout << endl;
    ll.InsertaNode(1, 20);
    ll.PrintLLIteration();
    cout << endl;
    cout << "Finding Node index" << endl;
    return 0;
}