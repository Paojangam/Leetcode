class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int numOfVow = 0, maxVow = 0;
        
        for (int i = 0; i < k; i++) {
            if (vowels.count(s[i])) numOfVow++;
        }
        maxVow = numOfVow;

        for (int i = k; i < s.length(); i++) {
            if (vowels.count(s[i])) numOfVow++;  
            if (vowels.count(s[i - k])) numOfVow--;  
            maxVow = max(maxVow, numOfVow);
        }
        
        return maxVow;
    }
};

