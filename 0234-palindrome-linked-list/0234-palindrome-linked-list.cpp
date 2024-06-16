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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *cur = head; 
        vector <int> arr; 
        while(cur != NULL)
        {
            arr.push_back(cur->val); 
            cur = cur -> next ;
        }
        vector<int> reversed = arr;
        reverse(reversed.begin(), reversed.end());
    return arr == reversed;
    }
};