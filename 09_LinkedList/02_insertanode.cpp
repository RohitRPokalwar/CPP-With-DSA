#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int a) {
        this->data = a;
        this->next = NULL;
    }
};

// Insert at head
void insertatheadLL(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    
    // If list was empty, update tail as well
    if (head == NULL) {
        tail = newNode;
    }

    head = newNode;
}

// Insert at tail
void insertattailLL(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);

    // If list is empty
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Print list
void PrintLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
  
}

// Main function
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertatheadLL(head, tail, 50);
    insertatheadLL(head, tail, 40);
    insertattailLL(head, tail, 80);

    PrintLL(head);  // Output: 40 50 80 NULL

    return 0;
}
