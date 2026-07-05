class Solution(object):
    def characterReplacement(self, s, k):
        left = 0
        right = 0
        freq = {}
        maxFreq = 0
        ans = 0

        while right < len(s):

            # Add current character to the window
            freq[s[right]] = freq.get(s[right], 0) + 1

            # Update the highest frequency seen in the window
            maxFreq = max(maxFreq, freq[s[right]])

            # If more than k replacements are needed,
            # shrink the window
            while (right - left + 1) - maxFreq > k:
                freq[s[left]] -= 1
                left += 1

            # Update answer
            ans = max(ans, right - left + 1)

            # Expand window
            right += 1

        return ans