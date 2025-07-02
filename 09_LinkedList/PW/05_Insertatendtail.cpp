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
void InsertAtEnd(Node*& Head, int val) {
    Node* tem = new Node(val);

    if (Head == NULL) {
        Head = tem;  // Set the head to the new node
        return;
    }

    Node* curr = Head;
    while (curr->Next != NULL) {
        curr = curr->Next;
    }
    curr->Next = tem;
}
//If head has some node value
void InsertatEnd( Node* Head ,int val){
        //Make a new Node
        Node *tem=new Node(val);
        while(Head->Next!=NULL){
            Head=Head->Next;
        }
        Head->Next=tem; 
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
   InsertatEnd(First , 90); // Output: 10 20 30 40 90
   PrintLLIteration(First);
   cout<<endl;
   cout<<"Adding Node in F"<<endl;
   Node *F=NULL;
   InsertAtEnd(F, 480); //Output 480
   PrintLLIteration(F);
return 0;
}