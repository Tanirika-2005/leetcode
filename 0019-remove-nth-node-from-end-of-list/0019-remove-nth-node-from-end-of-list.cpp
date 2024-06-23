/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head -> next == nullptr)
        {
            head = head -> next ;
            return head;
        }

        int count = 0; 
        ListNode *cur = head; 
        while(cur != NULL)
        {
            cur = cur -> next; 
            count++;
        }

        int target  = count - n ; 
        ListNode *del = head;
        ListNode *prev = nullptr;
        for(int i = 1; i< target+1;i++)
        {
            prev = del ;
            del = del->next; 
        }
        if(del->next!=NULL)
        {
            del -> val = del->next->val; 
            del -> next = del->next->next;
        }
        else 
        {
            prev -> next = nullptr;
            return head;
        }
        return head;
    }
};