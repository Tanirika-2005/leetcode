class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for (int i = 2; i <= n; i++) {
            cout << s << " ";
            string d = say(s);
            s = d;  
        }
        return s;
    }

    string say(const string& n) {
        map<char, int> freq;
        string result;

        freq[n[0]] = 1;
        for (int i = 1; i < (int)n.length(); ++i) {
            if (n[i] == n[i - 1]) {
                freq[n[i]]++;
            } else {
                result += to_string(freq[n[i - 1]]) + n[i - 1];
                freq[n[i]] = 1;
            }
        }
        result += to_string(freq[n.back()]) + n.back();
        cout << result << " ";
        return result;
    }
};
