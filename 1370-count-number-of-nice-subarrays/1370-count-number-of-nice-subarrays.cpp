class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countSubarraysWithAtMostK(nums, k) - countSubarraysWithAtMostK(nums, k - 1);
    }
    
    int countSubarraysWithAtMostK(vector<int>& nums, int k) {
        int count = 0;  
        int oddCount = 0;  
        int l = 0;  
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) {
                oddCount++;
            }
            while (oddCount > k) {
                if (nums[l] % 2 != 0) {
                    oddCount--;
                }
                l++;
            }
            
            count += (r - l + 1);
        }
        
        return count;
    }
};
