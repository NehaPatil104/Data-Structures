//Reverse Singly Linked List using Recursion

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Reverse(&head);
        return head;
    }
    
    Node * Reverse(Node *p){
        if(p == NULL || p->next == NULL){
           return p;
        }
        
        Node *anotherHead = Reverse(p->next);
        p->next->next = p;
        p->next = NULL;
        
        return anotherHead;
    }
    
};