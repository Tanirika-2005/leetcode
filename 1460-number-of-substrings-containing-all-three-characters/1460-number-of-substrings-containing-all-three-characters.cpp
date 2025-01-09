class Solution {
public:
   int numberOfSubstrings(string s) {
        int r = 0;
        int l = 0;
        int count = 0;
        map<char, int> dict;  
        while (r < s.size()) {
            dict[s[r]]++;  
            while (dict['a'] > 0 && dict['b'] > 0 && dict['c'] > 0) {
                count += s.size() - r; 
                dict[s[l]]--;  
                l++;  
            }

            r++;  // Move the right pointer
        }
        return count;
    }
};