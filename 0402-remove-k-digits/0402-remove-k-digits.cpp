class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        // If we need to remove all digits, return "0"
        if(num.length() == k) {
            return "0";
        }
        
        string result = "";
        
        for (char digit : num) {
            // While there are digits to remove and the current digit is smaller
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        
       
         // If there are still digits to remove, remove them from the end
        while (k > 0) {
            result.pop_back();
            k--;
        }
        // Remove leading zeros
        while (!result.empty() && result[0] == '0') {
            result.erase(result.begin());
        }
        
        // If the result is empty, return "0"
        return result.empty() ? "0" : result;
    }
};
