class Solution(object):
    def sum(self, nums, goal):
        if goal < 0:
            return 0

        left = 0
        total = 0
        currSum = 0
        count = 0 

        for right in range(len(nums)):

            if(nums[right]%2 != 0):
                count = count + 1

            while count > goal:
                if(nums[left] %2 != 0):
                    count = count - 1 
                left += 1

            total += right - left + 1

        return total

    def numberOfSubarrays(self, nums, k):
            return self.sum(nums, k) - self.sum(nums, k - 1)
        
        