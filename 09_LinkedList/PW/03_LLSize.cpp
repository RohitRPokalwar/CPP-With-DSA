#include <iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* Next;
        Node(int a){
            this->data=a;
            this->Next=NULL;
        }
};
//LL Size
int LLSize(Node * First){
     Node* tem=First;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->Next;
    }
    return count;
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
   cout<<"Size is "<<LLSize(First);
return 0;
}