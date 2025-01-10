class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countSubarraysWithAtMostK(nums, k) - countSubarraysWithAtMostK(nums, k - 1);
    }

private:
    int countSubarraysWithAtMostK(vector<int>& nums, int k) {
        int r = 0;
        int l = 0;
        int sum = 0;
        map<int, int> dict;

        while (r < nums.size()) {
            dict[nums[r]]++;

            // Shrink the window if there are more than k distinct integers
            while (dict.size() > k) {
                dict[nums[l]]--;
                if (dict[nums[l]] == 0) {
                    dict.erase(nums[l]);
                }
                l++;
            }

            // Count all subarrays ending at r
            sum += r - l + 1;
            r++;
        }

        return sum;
    }
};
