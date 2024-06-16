class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode *nextNode = nullptr;
        while(curr){
            nextNode = curr->next;  // Store next node
            curr->next = prev;      // Reverse current node's pointer
            prev = curr;            // Move prev and curr pointers one step forward
            curr = nextNode;
        }
        
        return prev;
    }
};