class Solution {
public:
    bool isValid(string s) 
    {
    stack<char> st;
    
    // Edge case: if the input string has only one character, return false
    if (s.size() == 1) 
        return false;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            // Check if stack is empty before accessing top
            if (st.empty()) {
                return false;
            } else if (s[i] == ')' && st.top() == '(') {
                st.pop();
            } else if (s[i] == '}' && st.top() == '{') {
                st.pop();
            } else if (s[i] == ']' && st.top() == '[') {
                st.pop();
            } else {
                return false;
            }
        }
    }
    
    // After iterating through the string, the stack should be empty for valid parentheses
    return st.empty();
    }   
};