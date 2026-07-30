class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = set()
        for i in range(len(nums)) :
            target = -nums[i]
            seen = set()
            for j in range(i+1 , len(nums)):
                complement = target - nums[j]
                if complement in seen :
                    triplet = tuple(sorted([nums[i], nums[j], complement]))
                    res.add(triplet)
                seen.add(nums[j])
        return [list(t) for t in res]