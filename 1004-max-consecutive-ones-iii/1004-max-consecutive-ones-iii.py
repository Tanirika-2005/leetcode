class Solution(object):
    def longestOnes(self, nums, k):
        left = 0
        right = 0
        zeros = 0
        ans = 0

        while right < len(nums):

            if nums[right] == 0:
                zeros += 1

            while zeros > k:
                if nums[left] == 0:
                    zeros -= 1
                left += 1

            ans = max(ans, right - left + 1)

            right += 1

        return ans