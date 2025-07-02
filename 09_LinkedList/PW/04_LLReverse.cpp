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
//LL reverse by Recursiuvely
void LLReverse(Node * head){
    if(head==NULL) return;
    LLReverse(head->Next);
    cout<<head->data<<" ";
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
    //Reverse LL
    LLReverse(First);
return 0;
}