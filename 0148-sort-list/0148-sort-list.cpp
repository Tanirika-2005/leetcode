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
    ListNode* sortList(ListNode* head) 
    { 
        vector<int> array;
        ListNode* current = head;
    while (current) {
        array.push_back(current->val);
        current = current->next;
    }
    
    // Sort the array
    sort(array.begin(), array.end());
    
    // Convert array back to linked list
    current = head;
    for (int i = 0; i < array.size(); ++i) {
        current->val = array[i];
        current = current->next;
    }
    
    return head;
    }
};