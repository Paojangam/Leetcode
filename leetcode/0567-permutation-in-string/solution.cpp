class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length();
        if (len1 > len2) return false;

        unordered_map<char, int> s1_map;
        for (char c : s1) s1_map[c]++;

        for (int i = 0; i <= len2 - len1; ++i) {
            unordered_map<char, int> window_map;
            for (int j = 0; j < len1; ++j) {
                window_map[s2[i + j]]++;
            }
            if (window_map == s1_map) return true;
        }

        return false;
    }
};

