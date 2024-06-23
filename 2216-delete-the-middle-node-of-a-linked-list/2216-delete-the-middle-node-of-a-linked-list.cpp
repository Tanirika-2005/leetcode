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
    ListNode* deleteMiddle(ListNode* head) 
    {
        
        if(head -> next == NULL)
        return nullptr;
        else {
            if(head -> next ->next == nullptr)
            {
                head -> next =  nullptr;
                return head;
            }
        ListNode *cur = head; 
        ListNode *cur1= head;
        int count = 1; 
        while(cur->next != NULL)
        {
            cur = cur-> next ;
            count++;
        } 
        int mid = count / 2 +1;
        printf("%d ",mid);
       
        //return head1;
        for(int i = 0 ; i < mid-1; i++)
        {
            cur1 = cur1 -> next;
        }
        if(cur1->next != NULL)
        {
            cur1 -> val = cur1 -> next-> val;
            cur1->next = cur1-> next -> next; 
        }
        else 
        {
            cur1 -> next  =NULL;
        }
        }
        return head;
    }
};