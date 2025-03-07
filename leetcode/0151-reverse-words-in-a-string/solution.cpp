class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string result = "";
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                temp += s[i];  // Collecting a word
            } else if (!temp.empty()) {
                if (!result.empty()) result = " " + result;  // Adding space between words
                result = temp + result;  // Adding word to the front
                temp = "";  // Reset temp for next word
            }
        }
        
        if (!temp.empty()) {
            if (!result.empty()) result = " " + result;
            result = temp + result; 
        }
        
        return result;
    }
};
