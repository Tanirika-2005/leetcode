class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int c = 0; // Counter for content children
        sort(g.begin(), g.end()); // Sort greed factors
        sort(s.begin(), s.end()); // Sort cookie sizes
        int i = 0, j = 0; // Pointers for greed factors and cookie sizes

        // Traverse both arrays
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) { // If the cookie can satisfy the child
                c++; // Increment content children count
                i++; // Move to the next child
            }
            j++; // Move to the next cookie
        }

        return c;
    }
};
