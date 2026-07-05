class Solution(object):

    def sum(self, nums, goal):
        if goal < 0:
            return 0

        left = 0
        total = 0
        currSum = 0

        for right in range(len(nums)):

            currSum += nums[right]

            while currSum > goal:
                currSum -= nums[left]
                left += 1

            total += right - left + 1

        return total

    def numSubarraysWithSum(self, nums, goal):
        return self.sum(nums, goal) - self.sum(nums, goal - 1)