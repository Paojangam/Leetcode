class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; ++i) {
            if (s[i] == ' ') continue;
            string word = "";
            while (i < n && s[i] != ' ') {
                word.push_back(s[i]);
                ++i;
            }
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans.push_back(' ');
            ans += word;
        }
        return ans;
    }
};
