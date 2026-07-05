class Solution(object):
    def numberOfSubstrings(self, s):
        

        left = 0
        total = 0
        currSum = 0
        count = 0 
        freq = {} 
        for right in range(len(s)):

            freq[s[right]] = freq.get(s[right], 0) + 1
            
            while (freq.get('a', 0) >= 1 and freq.get('b', 0) >= 1 and freq.get('c', 0) >= 1):
                total += len(s) - right
                freq[s[left]] -= 1
                
                left += 1


        return total

