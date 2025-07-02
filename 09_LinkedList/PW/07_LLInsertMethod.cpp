#include <iostream>
using namespace std;
class Node{
public : 
 int data;
 Node* next;
 Node(int a){
    this->data=a;
    this->next=NULL;
 }
};
void InsertionofNode(int pos , Node* head , int val){
    Node *tem= new Node(val);
    if(pos==0){
        head=tem;
        return;
    }
    else{
        
    }
}
int main(){
    
return 0;
}