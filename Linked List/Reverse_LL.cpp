//Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode * next, *prev = NULL, *current = head;
        
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};