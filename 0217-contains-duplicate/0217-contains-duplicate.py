class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        freq = {}
        for i in nums:
            if i in freq :
                freq[i] = freq[i] + 1 
            else :
                freq[i] = 1
        l  = []
        for i in range(len(nums)):
            l.append(1)
        print(l)
        if freq.values() == l :
            return False 
        else :
            return True 
