#include <iostream>
using namespace std;
// Creating our New defined Class
// Defining LL as Node
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};
void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void PrintLLRec(Node *head)
{
    Node *tem = head;
    // Base Case
    if (tem == NULL)
    {
        return;
    }
    cout << tem->data << " ";
    PrintLLRec(tem->next);
}
int size(Node *head)
{
    Node *temp = head;
    // Counting the number of nodes in the linked list
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // PrintLL(first);
    // Printing the Linked List
    cout << "Printing the Linked List: ";
    Node *temp = first;
    while (1)
    {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp->next == NULL)
        {
            cout << temp->data << " ";
            break;
        }
    }
    cout << endl;
    // Printing the Linked List using Recursion
    cout << "Printing the Linked List using Recursion: ";
    PrintLLRec(first);
    cout << endl;
    // Finding the size of the Linked List
    cout << "Size of the Linked List: ";
    cout << size(first);
    return 0;
}