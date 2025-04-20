class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) return "";

        unordered_map<char, int> t_freq;
        for (char c : t) t_freq[c]++;

        unordered_map<char, int> windowFreq;
        int left = 0, matched = 0;
        int min_len = INT_MAX, start_index = 0;

        for (int right = 0; right < s.length(); right++) {
            char right_char = s[right];
            windowFreq[right_char]++;

            if (t_freq.count(right_char) && windowFreq[right_char] == t_freq[right_char]) {
                matched++;
            }

            while (matched == t_freq.size()) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start_index = left;
                }

                char left_char = s[left];
                windowFreq[left_char]--;

                if (t_freq.count(left_char) && windowFreq[left_char] < t_freq[left_char]) {
                    matched--;
                }

                left++;
            }
        }

        return min_len == INT_MAX ? "" : s.substr(start_index, min_len);
    }
};

