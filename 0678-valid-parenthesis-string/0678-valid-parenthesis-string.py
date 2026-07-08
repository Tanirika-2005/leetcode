class Solution(object):
    def checkValidString(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # --- PASS 1: Left to Right ---
        # Checks if we have enough '(' or '*' to balance every ')'
        freq = {}
        for i in range(len(s)):
            freq[s[i]] = freq.get(s[i], 0) + 1
            if s[i] == ')':
                if freq.get('(', 0) >= 1:
                    freq['('] -= 1
                elif freq.get('*', 0) >= 1:
                    freq['*'] -= 1
                else:
                    return False # Found a ')' that can never be closed

        # --- PASS 2: Right to Left ---
        # Checks if we have enough ')' or '*' to balance every '('
        freq = {}
        for i in range(len(s) - 1, -1, -1):
            freq[s[i]] = freq.get(s[i], 0) + 1
            if s[i] == '(':
                if freq.get(')', 0) >= 1:
                    freq[')'] -= 1
                elif freq.get('*', 0) >= 1:
                    freq['*'] -= 1
                else:
                    return False # Found a '(' that can never be closed
        
        return True