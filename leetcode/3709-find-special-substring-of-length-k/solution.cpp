class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        
        // Edge case: if k is greater than s length, return false
        if (k > n) return false;
        
        for (int i = 0; i <= n - k; i++) { 
            // Check if all characters in the substring s[i..i+k-1] are the same
            char ch = s[i];
            bool isValid = true;
            
            for (int j = i; j < i + k; j++) {
                if (s[j] != ch) {
                    isValid = false;
                    break;
                }
            }
            
            // Check the boundary conditions
            if (isValid) {
                if ((i > 0 && s[i - 1] == ch) || (i + k < n && s[i + k] == ch)) {
                    continue; // Does not satisfy the conditions
                }
                return true; // Found a valid substring
            }
        }
        return false;
    }
};

