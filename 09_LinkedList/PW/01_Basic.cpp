#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
    Node(int d)
    {
        this->data = d;
        this->Next=NULL;
    }
};
int main()
{
    // Declaring a node
    //  Node a;
    //  a.data=10;
    // Diffrent Method to declare Make a Constructor
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // We can this in Constructor
    // a.Next=NULL;

    // Making LL
    a.Next = &b;
    b.Next = &c;
    c.Next = &d;
    //Priniting Node
    //Method 1
    cout<<(*(a.Next)).data<<endl;
    //Method 2
    cout<<a.Next->data<<endl;


    // If i want value of d directly from a 
    cout<<(((a.Next)->Next)->Next)->data<<endl;
    //Using Loop
    Node  tem=a;

//Print LL
    while (true)
    {
        cout<<tem.data<<" ";
        if(tem.Next==NULL) break;
        tem=*(tem.Next);
        
    }
    
    return 0;
}