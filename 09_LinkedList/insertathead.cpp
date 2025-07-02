#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
Node(){
    this->data=0;
    this->next=NULL;
}
Node(int a){
    this->data=a;
    this->next=NULL;
}
};
void insertatheadLL(Node* &head , int data){
    //step 1: 
    Node *newNode=new Node(data);
    //step 2:
    newNode->next=head;
    //step 3:
    head=newNode;   
}
void insertattailLL(Node * &tail , int data){
    Node *newNode=new Node(data);
    
    tail->next=newNode;
    tail=newNode;
}
void PrintLL(Node* &head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    Node *First=new Node(20);
    Node *Tail=First;
   insertatheadLL(First , 50); 
    insertatheadLL(First, 50);
    insertattailLL(Tail,80);
    PrintLL(First);
return 0;
}