#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Display(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
Node *deleteNode(Node *head, Node *target)
{
    if (head == target)
    {
        head = head->next;
        return head;
    }
    Node *tem = head;
    while (tem->next != target)
    {
        tem = tem->next;
    }
    tem->next = tem->next->next;
    return head;
}
Node *deleteNodeval(Node *head, int targetval)
{
    if (head->val == targetval)
    {
        head = head->next;
        return head;
    }
    Node *tem = head;
    while (tem->next->val != targetval)
    {
        tem = tem->next;
    }
    tem->next = tem->next->next;
    return head;
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
    Display(a);
    cout << endl;
    Node *new1 = a;
    new1 = deleteNode(a, a);
    Display(new1);
    cout << endl;
    Node *new2 = a;
    new2 = deleteNodeval(a, 30);
    Display(new2);
    return 0;
}