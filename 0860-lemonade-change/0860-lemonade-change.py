class Solution(object):
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        freq = { }
        for i in range(len(bills)):
            freq[bills[i]] = freq.get(bills[i], 0) + 1
            
            if(bills[i] == 10):
                if(freq.get(5, 0) == 0):
                    return False
                freq[5] = freq[5] - 1
                
            if(bills[i] == 20):
                if(freq.get(10, 0) >= 1 and freq.get(5, 0) >= 1):
                    freq[10] = freq[10] - 1
                    freq[5] = freq[5] - 1
                elif(freq.get(5, 0) >= 3):
                    freq[5] = freq[5] - 3
                else:
                    return False 
                    
        return True