//Reverse a Doubly Linked List
Node* reverseDLL(Node * head)
{
    //Your code here
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *previousNode = NULL;
    Node *current = head;
    
    
    while(current != NULL){
        previousNode = current->prev;
        current->prev = current->next;
        current->next = previousNode;
        current = current->prev;
    }
    if(previousNode != NULL){
        head = previousNode->prev;
    }
}