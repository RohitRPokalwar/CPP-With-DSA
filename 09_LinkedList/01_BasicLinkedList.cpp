#include <bits/stdc++.h>
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
Node *ConvertArrtoll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *Mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        Mover->Next = temp;
        Mover = temp;
    }
    return head;
}
// finding Length
int lengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->Next;
        cnt++;
    }
    return cnt;
}
// Check if Present
bool checknumber(Node *head, int Val)
{
    Node *temp = head;
    while (temp)
    {

        if (temp->data == Val)
        {
            return true;
        }
        temp = temp->Next;
    }
    return false;
}
int main()
{
    vector<int> arr{1, 2, 4, 3};
    Node *head = ConvertArrtoll(arr);
    Node *temp = head;
    // Printing the Full Array
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->Next; // Move to the next node inside the loop
    }
    cout << endl;
    cout << "Length of Linked List is " << lengthofLL(head) << endl;
    ;
    cout << "The Number is Present 0 or not 1 " << checknumber(head, 5) << endl;
    ;
}