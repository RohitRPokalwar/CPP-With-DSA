#include <iostream>
using namespace std;
class Node{
public : 
    int data;
    Node* Next;
    Node (int a){
        this->data=a;
        this->Next=NULL;
    }
};
//PrintLL ITIRATIVELY METHOD
void PrintLL(Node* &first){
    Node* tem=first;
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem=tem->Next;
    }
    cout<<"NULL";
}
//Print LL by Recursively
void PrintLLRecursive(Node* first){
    if(first==NULL) return;
    cout<<first->data<<" ";
    PrintLLRecursive(first->Next);
}
int main(){
    //making New Nodes
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    first->Next=(second);
    second->Next=third;
    third->Next=fourth;
    // fourth->Next=NULL;
    PrintLL(first);
    cout<<endl;
    PrintLLRecursive(first);
return 0;
}