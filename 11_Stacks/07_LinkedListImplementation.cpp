#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;

public:
    Node(int data1, Node *Next1)
    {

        data = data1;
        Next = Next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        Next = nullptr;
    }
};
class stack
{
public:
    Node *head;
    int size;
    stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int val)
    {
        Node *tem = new Node(val);
        tem->Next = head;
        head = tem;
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        head = head->Next;
        size--;
    }
    int top()
    {
        if (size == 0)
        {
            cout << "It is Empty" << endl;
            return 0;
        }
        return head->data;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size << endl;
    st.pop();
    cout << st.size << endl;
    cout << st.top();
    // Display then 20 10 print
    return 0;
}