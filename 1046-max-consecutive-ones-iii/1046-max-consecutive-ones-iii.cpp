class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int index = 0;
        int c = 0;
        int j = 0;
        int i = 0 ;     
        for (i = 0; i < nums.size(); i++)
        {
            c++;
            if (nums[i] == 0) {
                count++;
            }
            if (count <= k) {
                index = max(index, c);
            } else {
                count = 0;
                c = 0;
                i = j;
                j++;
            }
        }
    return index;
    }
};
