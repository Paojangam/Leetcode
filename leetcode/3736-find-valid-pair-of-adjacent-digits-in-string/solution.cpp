class Solution {
public:
    string findValidPair(string s) {
        string result;
        unordered_map<char, int> freq; 
        
        for (char c : s) {
            freq[c]++;
        }

        
       for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i + 1] && freq[s[i]] == (s[i] - '0') && freq[s[i + 1]] == (s[i + 1] - '0')) {
        result.push_back(s[i]);
        result.push_back(s[i + 1]);
        return result; 
    }
}


        return "";
    }
};

