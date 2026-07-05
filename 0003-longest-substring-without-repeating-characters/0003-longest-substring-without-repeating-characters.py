class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        #if s == " " or len(s) == 1:
          #  return 1 
    
        i = 0 
        j = 0 
        max = 0
        d = " "
        for i in range(len(s)):
            if (len(d) > max ):
                max = len(d)
            d = s[i]
            for j in range(i+1,len(s)): 
                if s[j] not in d:
                    d += s[j]
                else : 
                    break
                    
                
                
        return max 