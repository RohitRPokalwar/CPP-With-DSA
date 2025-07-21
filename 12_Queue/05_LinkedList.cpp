#include <iostream>
#include <queue>
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
class Queue
{
public:
    Node *Head;
    Node *Tail;
    int size = 0;
    Queue()
    {
        Head = Tail = NULL;
        size = 0;
    }
    void push(int val)
    {
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
    void pop()
    {
        if (size == 0)
            return;
        else
        {
            Node *tem = Head;
            Head = Head->Next;
            delete (tem);
        }
        size--;
    }
    int front()
    {
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
    void Display()
    {
        while (Head != NULL)
        {
            cout << Head->data << " ";
            Head = Head->Next;
        }
        cout << endl;
    }
};
int main()
{
    // Node *a = new Node(10);
    // Node *b = new Node(20);
    // Node *c = new Node(30);
    // Node *d = new Node(40);
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.sizeQ() << endl;
    q.Display();
    return 0;
}