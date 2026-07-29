class Solution(object):
    def groupAnagrams(self, strs): 
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        freq1 = {}
        for i in strs :
            sorted_list = sorted(i)
            key = "" . join(sorted_list)
            print(key)
            #if i in freq1:
            if key not in freq1 : 
                freq1[key] = []
            freq1[key].append(i)
        
        return list(freq1.values())