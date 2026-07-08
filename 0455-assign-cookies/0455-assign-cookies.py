class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        count = 0 
        g.sort()
        s.sort()
        i = 0
        j = 0
        while(i < len(g) and j <len(s)):
            if(s[j] >= g[i]):
                count = count+1
                i = i+1
            j = j+1
        return count
      