class Solution(object):
    def topKFrequent(self, nums, k):
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        
        # Sort keys directly by their frequency value in reverse order
        sorted_keys = sorted(freq, key=freq.get, reverse=True)
        
        return sorted_keys[:k]