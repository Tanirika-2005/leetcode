class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // Helper function to count subarrays with at most `k` odd numbers
        return countSubarraysWithAtMostK(nums, k) - countSubarraysWithAtMostK(nums, k - 1);
    }
    
    int countSubarraysWithAtMostK(vector<int>& nums, int k) {
        int count = 0;  // To store the number of valid subarrays
        int oddCount = 0;  // To store the number of odd numbers in the current window
        int l = 0;  // Left pointer of the sliding window
        
        // Iterate through the array with the right pointer `r`
        for (int r = 0; r < nums.size(); r++) {
            // If the current element is odd, increase the odd count
            if (nums[r] % 2 != 0) {
                oddCount++;
            }
            
            // If the number of odd numbers exceeds `k`, move the left pointer `l`
            // to shrink the window until the number of odd numbers is less than or equal to `k`
            while (oddCount > k) {
                if (nums[l] % 2 != 0) {
                    oddCount--;
                }
                l++;
            }
            
            // Add the number of subarrays that end at index `r` and have at most `k` odd numbers
            count += (r - l + 1);
        }
        
        return count;
    }
};
