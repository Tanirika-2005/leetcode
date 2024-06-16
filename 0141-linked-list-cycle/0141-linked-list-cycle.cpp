/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *cur = head;
        std::unordered_map<ListNode*, int> frequencyMap;
        if(cur == NULL)
        return false; 

        while(cur!= NULL)
        {
        // If the number is already in the map, increment its count
            if (frequencyMap.find(cur) != frequencyMap.end()) 
            {
                return true;
            }
            frequencyMap[cur] = 1;
            cur = cur -> next; 
        }
        return false;
    }
};