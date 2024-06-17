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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL)
        return head;
        vector <int> arr; 
        vector <int> arr1; 
        ListNode* cur = head;
        int count = 0;
        while(cur != NULL)
        {
            if(count%2==0)
            arr.push_back(cur->val);
            else 
            arr1.push_back(cur->val);
            cur = cur -> next;
            count++;
        }        
        ListNode *temp = new ListNode(arr[0]); 
        ListNode *t = temp;
        printf("%d" ,arr[0]);      
        for(int i = 1; i<arr.size();i++)
        {
            temp -> next = new ListNode(arr[i]); 
            temp = temp->next;
        }
        for(int i = 0; i<arr1.size();i++)
        {
            temp -> next = new ListNode(arr1[i]); 
            temp = temp->next;
        }
    return t;
    }
};