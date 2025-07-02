#include <iostream>
using namespace std;
class Node{
public :
    int data;
    Node *Next;
    Node(int a){
        this->data=a;
        this->Next=NULL;
        }
};
//IF Head hass NULl we use this
void InsertAtHead(Node*& Head, int val) {
    Node* tem = new Node(val);

    if (Head == NULL) {
        Head = tem;  // Set the head to the new node
        return;
    }
    tem->Next=Head;
    Head=tem;
}
//PrintLL
void PrintLLIteration(Node * head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->Next;
    }
}

int main(){
     Node* First=new Node(10);
    Node* Second=new Node(20);
    Node* Third=new Node(30);
    Node* Fourth=new Node(40);
    //Linking the Nodes
    First->Next=Second;
    Second->Next=Third;
    Third->Next=Fourth;
    cout<<"Adding Node in First"<<endl;
   InsertAtHead(First , 45);
   PrintLLIteration(First);
   cout<<endl;
return 0;
}