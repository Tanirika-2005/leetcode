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
    ListNode* Rotation(ListNode* head ,int k)
    {
            ListNode *cur = head;
            ListNode *c = cur;
            while(cur -> next->next!= NULL)
            {
                cur = cur -> next;
            }
            ListNode *p = new ListNode(cur->next->val);
            cur->next = NULL;
            ListNode *head1 = p;
            p->next=c;
        return head1;
    }
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == NULL or head -> next == NULL)
        return head;
        ListNode *cur = head;
        int count = 0;
        while(cur != NULL)
        {
            count++;
            cur = cur->next;
        }
        k = k%count;
        for(int i = 1;i<=k;i++)
        {
            head = Rotation(head,k);
        }
        return head;
    }
};