class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Special case: if goal is 0, we need to count subarrays where all elements are 0.
        if (goal == 0) {
            return countSubarraysWithZero(nums);
        }
        
        // General case: subtract subarrays with at most (goal-1) ones from subarrays with at most goal ones
        return countSubarraysWithAtMostK(nums, goal) - countSubarraysWithAtMostK(nums, goal - 1);
    }
    
    int countSubarraysWithAtMostK(vector<int>& nums, int k) {
        int count = 0;  
        int sum = 0;  
        int l = 0;  
        int r = 0;
        
        while (r < nums.size()) {
            sum += nums[r];
            
            // Shrink the window if the sum exceeds k
            while (sum > k) {
                sum -= nums[l];
                l++;
            }
            
            // Add the number of subarrays ending at r and starting from any index between l and r
            count += (r - l + 1);
            r++;
        }
        
        return count;
    }

    int countSubarraysWithZero(vector<int>& nums) {
        int count = 0;
        int length = 0;
        
        for (int num : nums) {
            if (num == 0) {
                length++;
            } else {
                count += (length * (length + 1)) / 2;  // Count subarrays formed by consecutive 0's
                length = 0;
            }
        }
        
        // Account for the case where the array ends with 0's
        count += (length * (length + 1)) / 2;
        
        return count;
    }
};
