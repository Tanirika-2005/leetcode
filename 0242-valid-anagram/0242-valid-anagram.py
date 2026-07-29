class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        freq = {}
        for i in s:
            if i in freq:
                freq[i] = freq[i] + 1 
            else :
                freq[i] = 1 
        print(freq)
        freq1 = {}
        for i in t:
            if i in freq1:
                freq1[i] = freq1[i] + 1
            else:
                freq1[i] = 1 
        print(freq1)

        if freq == freq1:
            return True 
        else :
            return False 