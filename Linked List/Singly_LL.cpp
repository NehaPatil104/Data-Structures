#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int data){
    
}

int main(){
    Node *newnode = new Node(10);
    cout<<newnode->data<<endl;
    InsertAtHead( head, 20);
}